#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Arduino.h>
#include <Regexp.h>
#include <SPI.h>
#include <SdFat.h>
#include <Wire.h>
#include <sdios.h>

// Emoji converter by language
#define DE         // Possible languages are: EN, DE, ES, FR, PT, IT, FA
#define EMOTICONS  // Possible values are: EMOJIS, EMOTICONS
#include "../lib/emoji.h"

EmojiConverter emojiConverter;

// SD variables
#define SD_CS_PIN D0

// Try to select the best SD card configuration.
#if HAS_SDIO_CLASS
#define SD_CONFIG SdioConfig(FIFO_SDIO)
#elif ENABLE_DEDICATED_SPI
#define SD_CONFIG SdSpiConfig(SD_CS_PIN, DEDICATED_SPI, SD_SCK_MHZ(16))
#else  // HAS_SDIO_CLASS
#define SD_CONFIG SdSpiConfig(SD_CS_PIN, SHARED_SPI, SD_SCK_MHZ(16))
#endif  // HAS_SDIO_CLASS

// OLED variables
#define SCREEN_WIDTH 128  // OLED display width, in pixels
#define SCREEN_HEIGHT 64  // OLED display height, in pixels

#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C

// Application settings
#define CHAT_DELAY 100
#define MAX_MESSAGES 30  // Max number of messages to display on screen
#define CHAT_WIDTH 110

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

SdFs SD;
FsFile chat;

String messages[MAX_MESSAGES];
bool indent[MAX_MESSAGES];
String person = "";

unsigned long offset = 0;

// Function declarations
void error(const char *msg);
void reset();

void shiftMessages();
void printChatMessage(unsigned long index);
void parseMessage(unsigned long index);

String utf8Parser(String input);

void setup() {
    // Initialize serial debug output
    Serial.begin(9600);

    // Initialize SD
    if (!SD.begin(SD_CONFIG))
        error("SD initialization failed");

    // Check if chat file exists and read file
    if (!SD.exists("chat.txt"))
        error("chat.txt not found");

    chat = SD.open("chat.txt", FILE_READ);

    // Initialize LCD
    if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS))
        error("SSD1306 allocation failed");

    // Set display settings
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setTextWrap(false);

    // Clear display
    display.clearDisplay();
    display.display();

    // Begin reading chat file at random offset
    uint64_t startAt = random(chat.size());

    for (uint64_t i = 0; i < startAt; i++) {
        chat.read();
        yield();
    }
    chat.readStringUntil('\n');  // Skip to next line
}

void loop() {
    // Variable for timing of delay between messages
    unsigned long lastMessage = millis();

    // Reset display
    display.clearDisplay();
    display.setCursor(0, -offset);

    // Begin writing messages to display
    printChatMessage(0);

    // Check if message out of bounds
    if (display.getCursorY() < 0) {
        // Shift messages
        shiftMessages();

        // Reset display
        display.clearDisplay();
        display.setCursor(0, 0);
        offset = 0;

        // Print messages
        printChatMessage(0);
    }

    // Print remaining messages
    for (int i = 1; i < MAX_MESSAGES && display.getCursorY() < SCREEN_HEIGHT; i++)
        printChatMessage(i);

    // Apply next step
    offset++;

    // Wait for next frame and display
    long delayTime = CHAT_DELAY - (millis() - lastMessage);
    if (delayTime > 0) delay(delayTime);
    display.display();
}

/**
 * Serial error output and stop program
 * @param msg msg to output
 */
void error(const char *msg) {
    // Print error message
    Serial.println(msg);

    display.clearDisplay();
    display.setCursor(0, 0);
    display.println(msg);
    display.display();

    while (true)
        yield();
}

/**
 * Reset sd at end of file to repeat chat
 */
void reset() {
    chat.close();
    chat = SD.open("chat.txt", FILE_READ);
}

/** Functions for parsing text data **/

/**
 * Shift messages and remove first in list
 */
void shiftMessages() {
    for (unsigned long i = 0; i < MAX_MESSAGES - 1; i++) {
        messages[i] = messages[i + 1];
        indent[i] = indent[i + 1];
    }

    messages[MAX_MESSAGES - 1] = "";
    indent[MAX_MESSAGES - 1] = false;
}

/**
 * Print chat message to screen if it exists or query for next message
 * @param index index of message to print
 */
void printChatMessage(unsigned long index) {
    // Check if message exists
    if (messages[index] == "") {
        // Read message
        parseMessage(index);
    }

    // Cache message to reduce during following loop
    String message = messages[index];

    while (true) {
        // Omit empty spaces at beginning of message
        message.trim();
        if (message == "") break;

        String currentLine = "";
        String currentLineTest = "";

        unsigned long i = 0;
        int16_t x = 0, y = 0;
        uint16_t width = 0, height = 0;

        while (width < CHAT_WIDTH && i < message.length()) {
            char character = message[i++];

            // Store possible solution for line when space is reached
            if (character == ' ') currentLine = currentLineTest;
            // Stop accumulating characters when line break is reached
            else if (character == '\n')
                break;

            // Check width of current test line to further accumulate characters or stop
            currentLineTest += character;
            display.getTextBounds(currentLineTest, 0, 0, &x, &y, &width, &height);
        }

        // If i and length match complete message can be printed in one line
        if (message.length() == i) currentLine = currentLineTest;

        // If current line is empty a word break is required
        // Apply word break at last fitting space with current line test as current line minus last character
        // If one character is already too long, break at that character
        if (currentLine == "") currentLine = currentLineTest.substring(0, max(int(currentLineTest.length()) - 1, 1));

        // Draw message to screen and update message string
        if (indent[index]) {
            display.getTextBounds(currentLine, 0, 0, &x, &y, &width, &height);
            display.setCursor(SCREEN_WIDTH - width, display.getCursorY());
        } else
            display.setCursor(0, display.getCursorY());

        display.println(currentLine);
        message = message.substring(currentLine.length());
    }
}

/**
 * Parse next message from chat file
 * @return String of next line
 */
void parseMessage(unsigned long index) {
    // Overhead of last read line
    static String lastLine = "";

    // Prepare MatchState in order to check for
    // "00/00/00, 00:00 - " or "0/00/00, 00:00 -" or "00/0/00, 00:00 -" or "0/0/0, 00:00 -"
    MatchState ms;

    // Read next line for parsing if no line is buffered
    String currentLines = lastLine;

    if (lastLine == "") {
        if (!chat.available()) reset();
        currentLines += chat.readStringUntil('\n');
    }

    while (true) {
        if (!chat.available()) reset();
        String newLine = chat.readStringUntil('\n');

        char buffer[min(int(newLine.length()), 18) + 1];
        newLine.toCharArray(buffer, min(int(newLine.length()), 18) + 1);

        ms.Target(buffer);
        char result = ms.Match("([0-9][0-2]?)/([0-9][0-9]?)/([0-9][0-9]), ([0-2][0-9]):([0-5][0-9]) - ");

        // New line was detected
        if (result > 0) {
            lastLine = newLine;
            break;
        } else
            currentLines += newLine;
    }

    // Omit unused information
    currentLines = currentLines.substring(currentLines.indexOf('-') + 2);

    // Extract person name
    int personEnd = currentLines.indexOf(':');

    if (personEnd == -1)
        // Skip to next message
        return parseMessage(index);

    String currentPerson = currentLines.substring(0, personEnd);

    // Apply indentation if new person
    if (person == "") person = currentPerson;
    indent[index] = person != currentPerson;

    // Apply message while parsing for UTF-8 characters
    messages[index] = utf8Parser(currentLines.substring(personEnd + 2));
}

String utf8Parser(String input) {
    // Replace emojis by given language
    emojiConverter.parseEmojis(input);

    // Replace special characters -- german umlauts
    input.replace("ä", "ae");
    input.replace("ö", "oe");
    input.replace("ü", "ue");
    input.replace("Ä", "Ae");
    input.replace("Ö", "Oe");
    input.replace("Ü", "Ue");
    input.replace("ß", "ss");

    // Check for non supported characters
    String validatedInput = "";

    static const char allowedCharacters[] PROGMEM = {' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~'};

    for (unsigned long i = 0; i < input.length(); i++) {
        char character = input[i];

        // Check if character is allowed
        bool allowed = false;
        for (unsigned long j = 0; j < sizeof(allowedCharacters); j++) {
            char allowedCharacter = pgm_read_byte(&allowedCharacters[j]);
            if (character == allowedCharacter) {
                allowed = true;
                break;
            }
        }

        // Replace character if not allowed
        if (allowed) validatedInput += input[i];
    }

    return validatedInput;
}