#include <Arduino.h>

// Emojis taken from https://github.com/carpedm20/emoji/blob/master/emoji/unicode_codes/data_dict.py
#include "lang/all_emojis.cpp"

#if defined(EN)
#include "lang/emoji_en.cpp"
#elif defined(DE)
#include "lang/emoji_de.cpp"
#elif defined(ES)
#include "lang/emoji_es.cpp"
#elif defined(FR)
#include "lang/emoji_fr.cpp"
#elif defined(PT)
#include "lang/emoji_pt.cpp"
#elif defined(IT)
#include "lang/emoji_it.cpp"
#elif defined(FA)
#include "lang/emoji_fa.cpp"
#else
#include "lang/emoji_en.cpp"
#endif

class EmojiConverter {
   public:
    void parseEmojis(String &input);
};

/**
 * @brief Parse emojis in a string
 * Parse emojis in a string in the format :emoji_name: by language
 * @param input String to parse
 */
void EmojiConverter::parseEmojis(String &input) {
    // Map through every emoji and replace it with a string
    for (unsigned long i = 0; i < sizeof(emojis) / sizeof(emojis[0]); i++) {
        input.replace(emojis[i], emojiTexts[i]);
    }
}