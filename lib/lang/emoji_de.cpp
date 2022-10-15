#include <Arduino.h>

const char* const emojiTexts[] PROGMEM = {
    ":goldmedaille:",
    ":silbermedaille:",
    ":bronzemedaille:",
    ":großbuchstaben_ab_in_rotem_quadrat:",
    ":symbol_geldautomat:",
    ":großbuchstabe_a_in_rotem_quadrat:",
    ":wassermann_(sternzeichen):",
    ":widder_(sternzeichen):",
    ":back-pfeil:",
    ":großbuchstabe_b_in_rotem_quadrat:",
    ":großbuchstaben_cl_in_rotem_quadrat:",
    ":wort_cool_in_blauem_quadrat:",
    ":krebs_(sternzeichen):",
    ":steinbock_(sternzeichen):",
    ":weihnachtsbaum:",
    ":end-pfeil:",
    ":wort_free_in_blauem_quadrat:",
    ":zwillinge_(sternzeichen):",
    ":großbuchstaben_id_in_lila_quadrat:",
    ":schriftzeichen_für_akzeptieren:",
    ":schriftzeichen_für_anwenden:",
    ":schriftzeichen_für_schnäppchen:",
    ":japanisches_schloss:",
    ":schriftzeichen_für_gratulation:",
    ":schriftzeichen_für_rabatt:",
    ":japanische_puppen:",
    ":schriftzeichen_für_gratis:",
    ":schriftzeichen_koko:",
    ":schriftzeichen_für_monatsbetrag:",
    ":schriftzeichen_für_kein_zimmer_frei:",
    ":schriftzeichen_für_nicht_gratis:",
    ":schriftzeichen_für_geöffnet:",
    ":schriftzeichen_für_note_zum_bestehen:",
    ":japanisches_postgebäude:",
    ":schriftzeichen_für_verbieten:",
    ":schriftzeichen_für_reserviert:",
    ":schriftzeichen_für_geheimnis:",
    ":schriftzeichen_sa:",
    ":japanisches_anfänger-zeichen:",
    ":schriftzeichen_für_zimmer_frei:",
    ":löwe_(sternzeichen):",
    ":waage_(sternzeichen):",
    ":weihnachtsfrau:",
    ":wort_new_in_blauem_quadrat:",
    ":großbuchstaben_ng_in_blauem_quadrat:",
    ":großbuchstaben_ok_in_blauem_quadrat:",
    ":ok-zeichen:",
    ":on!-pfeil:",
    ":großbuchstabe_o_in_rotem_quadrat:",
    ":schlangenträger:",
    ":großbuchstabe_p_in_blauem_quadrat:",
    ":fische_(sternzeichen):",
    ":soon-pfeil:",
    ":sos-zeichen:",
    ":schütze_(sternzeichen):",
    ":weihnachtsmann:",
    ":skorpion_(sternzeichen):",
    ":freiheitsstatue:",
    ":t-rex:",
    ":top-pfeil:",
    ":stier_(sternzeichen):",
    ":tokyo_tower:",
    ":schriftzug_up!_im_blauen_quadrat:",
    ":schriftzug_vs_in_orangem_quadrat:",
    ":jungfrau_(sternzeichen):",
    ":abakus:",
    ":akkordeon:",
    ":heftpflaster:",
    ":eintrittskarten:",
    ":bergseilbahn:",
    ":flugzeug:",
    ":landung_eines_flugzeugs:",
    ":abflug:",
    ":wecker:",
    ":destillierapparat:",
    ":außerirdischer:",
    ":computerspiel-monster:",
    ":krankenwagen:",
    ":football:",
    ":amphore:",
    ":herz_(organ):",
    ":anker:",
    ":ärger:",
    ":verärgertes_gesicht:",
    ":wütendes_gesicht_mit_hörnern:",
    ":qualvolles_gesicht:",
    ":ameise:",
    ":balkenförmige_signalstärkenanzeige:",
    ":besorgtes_gesicht_mit_schweißtropfen:",
    ":sattelzug:",
    ":mischpalette:",
    ":erstauntes_gesicht:",
    ":atomzeichen:",
    ":autorikscha:",
    ":auto:",
    ":avocado:",
    ":axt:",
    ":baby:",
    ":putte:",
    ":babyflasche:",
    ":küken:",
    ":symbol_baby:",
    ":nach_unten_weisender_zeigefinger:",
    ":nach_links_weisender_zeigefinger:",
    ":nach_rechts_weisender_zeigefinger:",
    ":nach_oben_weisender_zeigefinger_von_hinten:",
    ":schulranzen:",
    ":bacon:",
    ":dachs:",
    ":badminton:",
    ":bagel:",
    ":gepäckausgabe:",
    ":baguette:",
    ":waage:",
    ":glatze:",
    ":ballettschuhe:",
    ":luftballon:",
    ":urne_mit_wahlzettel:",
    ":banane:",
    ":banjo:",
    ":bank:",
    ":balkendiagramm:",
    ":barbershop-säule:",
    ":baseball:",
    ":korb:",
    ":basketball:",
    ":fledermaus:",
    ":badewanne:",
    ":batterie:",
    ":strand_mit_sonnenschirm:",
    ":strahlendes_gesicht_mit_lachenden_augen:",
    ":bohnen:",
    ":bär:",
    ":schlagendes_herz:",
    ":biber:",
    ":bett:",
    ":bierkrug:",
    ":käfer:",
    ":glocke:",
    ":paprika:",
    ":durchgestrichene_glocke:",
    ":rezeptionsklingel:",
    ":bento-box:",
    ":trinkpäckchen:",
    ":fahrrad:",
    ":bikini:",
    ":baseballmütze:",
    ":biogefährdung:",
    ":vogel:",
    ":geburtstagskuchen:",
    ":bison:",
    ":auf_lippe_beißen:",
    ":schwarzer_punkt:",
    ":schwarze_flagge:",
    ":schwarzes_herz:",
    ":großes_schwarzes_quadrat:",
    ":mittelkleines_schwarzes_quadrat:",
    ":mittelgroßes_schwarzes_quadrat:",
    ":schwarzer_federhalter:",
    ":kleines_schwarzes_quadrat:",
    ":schwarze_quadratische_schaltfläche:",
    ":gelbe_blüte:",
    ":kugelfisch:",
    ":blaues_buch:",
    ":blauer_punkt:",
    ":blaues_herz:",
    ":blaues_quadrat:",
    ":blaubeeren:",
    ":wildschwein:",
    ":bombe:",
    ":knochen:",
    ":lesezeichen:",
    ":pagemarker:",
    ":bücherstapel:",
    ":bumerang:",
    ":flasche_mit_knallendem_korken:",
    ":blumenstrauß:",
    ":pfeil_und_bogen:",
    ":schüssel_mit_löffel:",
    ":bowling:",
    ":boxhandschuh:",
    ":junge:",
    ":gehirn:",
    ":brot:",
    ":stillen:",
    ":ziegelstein:",
    ":brücke_vor_nachthimmel:",
    ":aktentasche:",
    ":slip:",
    ":heller-taste:",
    ":brokkoli:",
    ":gebrochenes_herz:",
    ":besen:",
    ":brauner_punkt:",
    ":braunes_herz:",
    ":braunes_quadrat:",
    ":bubble_tea:",
    ":blasen:",
    ":eimer:",
    ":raupe:",
    ":kran:",
    ":hochgeschwindigkeitszug:",
    ":darts:",
    ":burrito:",
    ":bus:",
    ":bushaltestelle:",
    ":silhouette_einer_büste:",
    ":silhouette_mehrerer_büsten:",
    ":butter:",
    ":schmetterling:",
    ":kaktus:",
    ":kalender:",
    ":ruf-mich-an-handzeichen:",
    ":dromedar:",
    ":fotoapparat:",
    ":fotoapparat_mit_blitz:",
    ":camping:",
    ":kerze:",
    ":bonbon:",
    ":konserve:",
    ":kanu:",
    ":karteikasten:",
    ":rotationskartei:",
    ":karteireiter:",
    ":karussellpferd:",
    ":traditionelle_japanische_windsäcke:",
    ":handsäge:",
    ":karotte:",
    ":schloss:",
    ":katze:",
    ":katzengesicht:",
    ":katze_mit_freudentränen:",
    ":verwegen_lächelnde_katze:",
    ":ketten:",
    ":stuhl:",
    ":abwärtstrend:",
    ":aufwärtstrend:",
    ":steigende_kurve_mit_yen-zeichen:",
    ":abgehaktes_kästchen:",
    ":kräftiges_häkchen:",
    ":weißes_häkchen:",
    ":käsestück:",
    ":zielflagge:",
    ":kirschen:",
    ":kirschblüte:",
    ":bauer_schach:",
    ":kastanie:",
    ":huhn:",
    ":kind:",
    ":kinder_überqueren_die_straße:",
    ":streifenhörnchen:",
    ":schokoladentafel:",
    ":essstäbchen:",
    ":kirche:",
    ":zigarette:",
    ":kinosymbol:",
    ":buchstabe_m_in_kreis:",
    ":zirkuszelt:",
    ":skyline:",
    ":abendstimmung_in_der_stadt:",
    ":schraubzwinge:",
    ":filmklappe:",
    ":klatschende_hände:",
    ":antikes_gebäude:",
    ":bierkrüge:",
    ":sektgläser:",
    ":klemmbrett:",
    ":kreisförmige_pfeile_im_uhrzeigersinn:",
    ":geschlossenes_buch:",
    ":geschlossener_briefkasten_ohne_post:",
    ":geschlossener_briefkasten_mit_post:",
    ":geschlossener_regenschirm:",
    ":wolke:",
    ":wolke_mit_blitz:",
    ":wolke_mit_blitz_und_regen:",
    ":wolke_mit_regen:",
    ":wolke_mit_schnee:",
    ":clown-gesicht:",
    ":kreuz:",
    ":clutch:",
    ":mantel:",
    ":kakerlake:",
    ":cocktailglas:",
    ":kokosnuss:",
    ":sarg:",
    ":münze:",
    ":frierendes_gesicht:",
    ":zusammenstoß:",
    ":komet:",
    ":kompass:",
    ":minidisc:",
    ":computermaus:",
    ":konfettiball:",
    ":verwirrtes_gesicht:",
    ":verwundertes_gesicht:",
    ":baustellenabsperrung:",
    ":bauarbeiter(in):",
    ":drehregler:",
    ":minimarkt:",
    ":reis_in_schüssel:",
    ":keks:",
    ":spiegelei_in_bratpfanne:",
    ":copyright:",
    ":koralle:",
    ":sofa_und_lampe:",
    ":pfeile_gegen_den_uhrzeigersinn:",
    ":liebespaar:",
    ":kuh:",
    ":kuhgesicht:",
    ":gesicht_mit_cowboyhut:",
    ":krebs:",
    ":wachsmalstift:",
    ":kreditkarte:",
    ":mondsichel:",
    ":grille:",
    ":kricket:",
    ":krokodil:",
    ":croissant:",
    ":kreuzzeichen:",
    ":angekreuztes_kästchen:",
    ":hand_mit_gekreuzten_fingern:",
    ":überkreuzte_flaggen:",
    ":gekreuzte_schwerter:",
    ":krone:",
    ":krücke:",
    ":weinende_katze:",
    ":weinendes_gesicht:",
    ":kristallkugel:",
    ":gurke:",
    ":becher_mit_strohhalm:",
    ":cupcake:",
    ":curlingstein:",
    ":lockiges_haar:",
    ":schleife:",
    ":geldwechsel:",
    ":reis_mit_curry:",
    ":pudding:",
    ":zollkontrolle:",
    ":fleischstück:",
    ":wirbel:",
    ":dolch:",
    ":dango:",
    ":dunkle_hautfarbe:",
    ":staubwolke:",
    ":gehörlose_person:",
    ":laubbaum:",
    ":hirsch:",
    ":lieferwagen:",
    ":kaufhaus:",
    ":verfallenes_haus:",
    ":wüste:",
    ":einsame_insel:",
    ":desktopcomputer:",
    ":detektiv(in):",
    ":karo:",
    ":rautenform_mit_punkt:",
    ":taste_dimmen:",
    ":enttäuschtes_gesicht:",
    ":verkleidet:",
    ":geteilt_durch:",
    ":tauchmaske:",
    ":öllampe:",
    ":schwindlig:",
    ":dna:",
    ":dodo:",
    ":hund:",
    ":hundegesicht:",
    ":dollar-banknote:",
    ":delfin:",
    ":tür:",
    ":gesicht_mit_gestrichelter_linie:",
    ":hexagramm_mit_punkt:",
    ":doppelschleife:",
    ":doppeltes_ausrufezeichen:",
    ":donut:",
    ":taube:",
    ":pfeil_nach_links_unten:",
    ":pfeil_nach_rechts_unten:",
    ":pfeil_nach_unten:",
    ":bedrücktes_gesicht_mit_schweiß:",
    ":abwärts-schaltfläche:",
    ":drache:",
    ":drachengesicht:",
    ":kleid:",
    ":sabberndes_gesicht:",
    ":blutstropfen:",
    ":tropfen:",
    ":trommel:",
    ":ente:",
    ":teigtasche:",
    ":dvd:",
    ":e-mail:",
    ":adler:",
    ":ohr:",
    ":maiskolben:",
    ":ohr_mit_hörgerät:",
    ":ei:",
    ":aubergine:",
    ":achtstrahliger_stern:",
    ":achtzackiger_stern:",
    ":8.30_uhr:",
    ":8.00_uhr:",
    ":auswerfen:",
    ":netzstecker:",
    ":elefant:",
    ":fahrstuhl:",
    ":11.30_uhr:",
    ":11.00_uhr:",
    ":elf(e):",
    ":leeres_nest:",
    ":briefumschlag:",
    ":umschlag_mit_pfeil:",
    ":euro-banknote:",
    ":nadelbaum:",
    ":schaf:",
    ":ausrufe-_und_fragezeichen:",
    ":explodierender_kopf:",
    ":ausdrucksloses_gesicht:",
    ":auge:",
    ":augen:",
    ":kuss_zuwerfendes_gesicht:",
    ":gesicht_das_tränen_zurückhält:",
    ":sich_die_lippen_leckendes_gesicht:",
    ":vor_angst_schreiendes_gesicht:",
    ":kotzendes_gesicht:",
    ":benommenes_gesicht:",
    ":gesicht_mit_schrägem_mund:",
    ":verlegen_kicherndes_gesicht:",
    ":gesicht_mit_kopfverband:",
    ":gesicht_mit_atemschutzmaske:",
    ":gesicht_mit_monokel:",
    ":gesicht_mit_offenen_augen_und_hand_über_dem_mund:",
    ":gesicht_mit_offenem_mund:",
    ":gesicht_mit_durch_die_finger_linsendem_auge:",
    ":gesicht_mit_hochgezogenen_augenbrauen:",
    ":augen_verdrehendes_gesicht:",
    ":schnaubendes_gesicht:",
    ":gesicht_mit_symbolen_über_dem_mund:",
    ":gesicht_mit_freudentränen:",
    ":gesicht_mit_fieberthermometer:",
    ":gesicht_mit_herausgestreckter_zunge:",
    ":gesicht_ohne_mund:",
    ":fabrik:",
    ":märchenfee:",
    ":falafel:",
    ":laub:",
    ":familie:",
    ":doppelpfeile_nach_rechts:",
    ":doppelpfeile_nach_unten:",
    ":zurückspulen:",
    ":doppelpfeile_nach_oben:",
    ":faxgerät:",
    ":ängstliches_gesicht:",
    ":feder:",
    ":frauensymbol:",
    ":riesenrad:",
    ":fähre:",
    ":feldhockey:",
    ":aktenschrank:",
    ":ordner:",
    ":filmstreifen:",
    ":filmprojektor:",
    ":feuer:",
    ":feuerwehrauto:",
    ":feuerlöscher:",
    ":feuerwerkskörper:",
    ":feuerwerk:",
    ":zunehmender_halbmond:",
    ":mondsichel_mit_gesicht_links:",
    ":fisch:",
    ":fischfrikadelle:",
    ":angel_mit_fisch:",
    ":5.30_uhr:",
    ":5.00_uhr:",
    ":golffahne:",
    ":flamingo:",
    ":taschenlampe:",
    ":flacher_schuh:",
    ":fladenbrot:",
    ":lilie:",
    ":angespannter_bizeps:",
    ":diskette:",
    ":japanische_blumenkarte:",
    ":errötetes_gesicht_mit_großen_augen:",
    ":fliege:",
    ":frisbee:",
    ":fliegende_untertasse:",
    ":nebel:",
    ":neblig:",
    ":zusammengelegte_handflächen:",
    ":fondue:",
    ":fuß:",
    ":fußabdrücke:",
    ":messer_und_gabel:",
    ":teller_mit_messer_und_gabel:",
    ":glückskeks:",
    ":springbrunnen:",
    ":füllhalter:",
    ":4.30_uhr:",
    ":glücksklee:",
    ":4.00_uhr:",
    ":fuchs:",
    ":gerahmtes_bild:",
    ":pommes_frites:",
    ":frittierte_garnele:",
    ":frosch:",
    ":küken_von_vorne:",
    ":düsteres_gesicht:",
    ":entsetztes_gesicht:",
    ":tanksäule:",
    ":vollmond:",
    ":vollmond_mit_gesicht:",
    ":urne:",
    ":spielwürfel:",
    ":knoblauch:",
    ":zahnrad:",
    ":edelstein:",
    ":flaschengeist:",
    ":gespenst:",
    ":giraffe:",
    ":mädchen:",
    ":glas_milch:",
    ":brille:",
    ":globus_mit_amerika:",
    ":globus_mit_asien_und_australien:",
    ":globus_mit_europa_und_afrika:",
    ":globus_mit_meridianen:",
    ":handschuhe:",
    ":funkelnder_stern:",
    ":tor:",
    ":ziege:",
    ":kobold:",
    ":schutzbrille:",
    ":gorilla:",
    ":doktorhut:",
    ":trauben:",
    ":grüner_apfel:",
    ":grünes_buch:",
    ":grüner_punkt:",
    ":grünes_herz:",
    ":salat:",
    ":grünes_quadrat:",
    ":grimassen_schneidendes_gesicht:",
    ":grinsende_katze:",
    ":grinsende_katze_mit_lachenden_augen:",
    ":grinsendes_gesicht:",
    ":grinsendes_gesicht_mit_großen_augen:",
    ":grinsendes_gesicht_mit_lachenden_augen:",
    ":grinsendes_gesicht_mit_schweißtropfen:",
    ":grinsegesicht_mit_zugekniffenen_augen:",
    ":wachsendes_herz:",
    ":wache:",
    ":blindenhund:",
    ":gitarre:",
    ":hamburger:",
    ":hammer:",
    ":hammer_und_pickel:",
    ":hammer_und_schraubenschlüssel:",
    ":hamsa:",
    ":hamster:",
    ":hand_mit_gespreizten_fingern:",
    ":hand_mit_gekreuztem_zeigefinger_und_daumen:",
    ":handtasche:",
    ":handschlag:",
    ":schlüpfendes_küken:",
    ":kopfhörer:",
    ":grabstein:",
    ":sich_die_ohren_zuhaltendes_affengesicht:",
    ":herzdekoration:",
    ":herz_als_ausrufezeichen:",
    ":hände_die_herz_bilden:",
    ":herz:",
    ":herz_mit_pfeil:",
    ":herz_mit_schleife:",
    ":dollarzeichen_extrafett:",
    ":gleichheitszeichen_extrafett:",
    ":igel:",
    ":hubschrauber:",
    ":kräuter:",
    ":hibiskus:",
    ":stöckelschuh:",
    ":hochgeschwindigkeitszug_mit_spitzer_nase:",
    ":hochspannung:",
    ":wanderstiefel:",
    ":hindutempel:",
    ":nilpferd:",
    ":loch:",
    ":hohler_roter_kreis:",
    ":honigtopf:",
    ":biene:",
    ":haken:",
    ":horizontale_verkehrsampel:",
    ":pferd:",
    ":pferdegesicht:",
    ":pferderennen:",
    ":krankenhaus:",
    ":heißgetränk:",
    ":hotdog:",
    ":schwitzendes_gesicht:",
    ":peperoni:",
    ":heiße_quellen:",
    ":hotel:",
    ":sanduhr:",
    ":laufende_sanduhr:",
    ":haus:",
    ":haus_mit_garten:",
    ":wohnhäuser:",
    ":100_punkte:",
    ":verdutztes_gesicht:",
    ":hütte:",
    ":eiswürfel:",
    ":eiscreme:",
    ":eishockey:",
    ":schlittschuh:",
    ":ausweis:",
    ":posteingang:",
    ":eingehender_briefumschlag:",
    ":auf_betrachter_zeigender_zeigefinger:",
    ":nach_oben_weisender_zeigefinger_von_vorne:",
    ":unendlichkeit:",
    ":buchstabe_i_in_blauem_quadrat:",
    ":eingabesymbol_lateinische_buchstaben:",
    ":eingabesymbol_lateinische_kleinbuchstaben:",
    ":eingabesymbol_lateinische_großbuchstaben:",
    ":eingabesymbol_zahlen:",
    ":eingabesymbol_sonderzeichen:",
    ":halloweenkürbis:",
    ":einmachglas:",
    ":jeans:",
    ":jokerkarte:",
    ":joystick:",
    ":kaaba:",
    ":känguru:",
    ":schlüssel:",
    ":tastatur:",
    ":taste_10:",
    ":tretroller:",
    ":kimono:",
    ":sich_küssendes_paar:",
    ":kussabdruck:",
    ":küssende_katze:",
    ":küssendes_gesicht:",
    ":küssendes_gesicht_mit_geschlossenen_augen:",
    ":küssendes_gesicht_mit_lächelnden_augen:",
    ":küchenmesser:",
    ":drachen:",
    ":kiwi:",
    ":knoten:",
    ":koala:",
    ":laborkittel:",
    ":etikett:",
    ":lacrosse:",
    ":leiter:",
    ":marienkäfer:",
    ":laptop:",
    ":große_blaue_raute:",
    ":große_orangefarbene_raute:",
    ":abnehmender_halbmond:",
    ":mondsichel_mit_gesicht_rechts:",
    ":vorheriger_titel:",
    ":lateinisches_kreuz:",
    ":blätter_im_wind:",
    ":blattgemüse:",
    ":spiralblock:",
    ":faust_nach_links:",
    ":pfeil_nach_links_und_rechts:",
    ":pfeil_nach_links:",
    ":geschwungener_pfeil_nach_rechts:",
    ":gepäckaufbewahrung:",
    ":sprechblase_links:",
    ":nach_links_weisende_hand:",
    ":bein:",
    ":zitrone:",
    ":leopard:",
    ":schieberegler:",
    ":glühbirne:",
    ":s-bahn:",
    ":helle_hautfarbe:",
    ":linksymbol:",
    ":verhakte_büroklammern:",
    ":löwe:",
    ":lippenstift:",
    ":symbol_papierkorb:",
    ":eidechse:",
    ":lama:",
    ":hummer:",
    ":geschlossenes_schloss:",
    ":schloss_mit_schlüssel:",
    ":schloss_mit_füller:",
    ":dampflokomotive:",
    ":lutscher:",
    ":afrikanische_trommel:",
    ":creme:",
    ":lotusblüte:",
    ":heulendes_gesicht:",
    ":lautsprecher:",
    ":ich-liebe-dich-geste:",
    ":stundenhotel:",
    ":liebesbrief:",
    ":schwache_batterie:",
    ":gepäck:",
    ":lunge:",
    ":lügendes_gesicht:",
    ":magier(in):",
    ":zauberstab:",
    ":magnet:",
    ":lupe_nach_links:",
    ":lupe_nach_rechts:",
    ":mahjong-stein:",
    ":männersymbol:",
    ":mammut:",
    ":mann:",
    ":tanzender_mann:",
    ":mango:",
    ":kaminuhr:",
    ":manueller_rollstuhl:",
    ":herrenschuh:",
    ":umriss_von_japan:",
    ":ahornblatt:",
    ":kampfsportanzug:",
    ":mate-tee:",
    ":fleischhachse:",
    ":armprothese:",
    ":beinprothese:",
    ":äskulapstab:",
    ":mitteldunkle_hautfarbe:",
    ":mittelhelle_hautfarbe:",
    ":mittlere_hautfarbe:",
    ":megafon:",
    ":honigmelone:",
    ":schmelzendes_gesicht:",
    ":papier_und_bleistift:",
    ":händchen_haltende_männer:",
    ":menora:",
    ":herren:",
    ":wassermensch:",
    ":u-bahn:",
    ":mikrobe:",
    ":mikrofon:",
    ":mikroskop:",
    ":mittelfinger:",
    ":militärhelm:",
    ":militärorden:",
    ":milchstraße:",
    ":kleinbus:",
    ":minus:",
    ":spiegel:",
    ":discokugel:",
    ":statue:",
    ":mobiltelefon:",
    ":mobiltelefon_aus:",
    ":mobiltelefon_mit_pfeil:",
    ":gesicht_mit_dollarzeichen:",
    ":geldsack:",
    ":geldschein_mit_flügeln:",
    ":affe:",
    ":affengesicht:",
    ":einschienenbahn:",
    ":mondkuchen:",
    ":traditionelles_mondfest:",
    ":moschee:",
    ":mücke:",
    ":motorboot:",
    ":motorroller:",
    ":motorrad:",
    ":elektrischer_rollstuhl:",
    ":autobahn:",
    ":fuji:",
    ":berg:",
    ":bergschwebebahn:",
    ":bergbahn:",
    ":maus:",
    ":mäusegesicht:",
    ":mausefalle:",
    ":mund:",
    ":filmkamera:",
    ":mal:",
    ":fliegenpilz:",
    ":klaviatur:",
    ":musiknote:",
    ":musiknoten:",
    ":notenschlüssel:",
    ":durchgestrichener_lautsprecher:",
    ":nagellack:",
    ":namensschild:",
    ":nationalpark:",
    ":würgendes_gesicht:",
    ":nazar-amulett:",
    ":hemd_mit_krawatte:",
    ":strebergesicht:",
    ":nest_mit_eiern:",
    ":matroschka:",
    ":neutrales_gesicht:",
    ":neumond:",
    ":neumond_mit_gesicht:",
    ":zeitung:",
    ":nächster_titel:",
    ":sternenhimmel:",
    ":9.30_uhr:",
    ":9.00_uhr:",
    ":ninja:",
    ":fahrräder_verboten:",
    ":zutritt_verboten:",
    ":abfall_verboten:",
    ":mobiltelefone_verboten:",
    ":minderjährige_verboten:",
    ":fußgänger_verboten:",
    ":rauchverbot:",
    ":kein_trinkwasser:",
    ":nase:",
    ":notizbuch:",
    ":notizbuch_mit_dekorativem_einband:",
    ":mutter_und_schraube:",
    ":oktopus:",
    ":oden:",
    ":bürogebäude:",
    ":ungeheuer:",
    ":ölfass:",
    ":alter_schlüssel:",
    ":älterer_mann:",
    ":ältere_frau:",
    ":ältere_person:",
    ":olive:",
    ":om:",
    ":auto_von_vorne:",
    ":bus_von_vorne:",
    ":geballte_faust:",
    ":polizeiwagen_von_vorne:",
    ":taxi_von_vorne:",
    ":einteiliger_badeanzug:",
    ":1.30_uhr:",
    ":1.00_uhr:",
    ":zwiebel:",
    ":offenes_buch:",
    ":geöffneter_ordner:",
    ":offene_hände:",
    ":offener_briefkasten_ohne_post:",
    ":offener_briefkasten_mit_post:",
    ":cd:",
    ":orangefarbenes_buch:",
    ":oranger_punkt:",
    ":oranges_herz:",
    ":oranges_quadrat:",
    ":orang-utan:",
    ":orthodoxes_kreuz:",
    ":otter:",
    ":postausgang:",
    ":eule:",
    ":ochse:",
    ":auster:",
    ":paket:",
    ":vorderseite_eines_blattes:",
    ":teilweise_eingerolltes_blatt:",
    ":pager:",
    ":pinsel:",
    ":hand_mit_handfläche_nach_unten:",
    ":palme:",
    ":hand_mit_handfläche_nach_oben:",
    ":handflächen_nach_oben:",
    ":pfannkuchen:",
    ":panda:",
    ":büroklammer:",
    ":fallschirm:",
    ":papagei:",
    ":teilalternationszeichen:",
    ":konfettibombe:",
    ":partygesicht:",
    ":passagierschiff:",
    ":passkontrolle:",
    ":pause:",
    ":tatzenabdrücke:",
    ":friedenszeichen:",
    ":pfirsich:",
    ":pfau:",
    ":erdnuss:",
    ":birne:",
    ":kugelschreiber:",
    ":bleistift:",
    ":pinguin:",
    ":nachdenkliches_gesicht:",
    ":sich_umarmende_personen:",
    ":personen_mit_hasenohren:",
    ":ringer(in):",
    ":masken:",
    ":entschlossenes_gesicht:",
    ":person:",
    ":person_bart:",
    ":radfahrer(in):",
    ":person_blondes_haar:",
    ":person_mit_ball:",
    ":sich_verbeugende_person:",
    ":rad_schlagende_person:",
    ":bergsteiger(in):",
    ":sich_an_den_kopf_fassende_person:",
    ":fechter(in):",
    ":missmutige_person:",
    ":person_mit_überkreuzten_armen:",
    ":person_mit_händen_auf_dem_kopf:",
    ":person_beim_haareschneiden:",
    ":person_die_eine_kopfmassage_bekommt:",
    ":golfer(in):",
    ":im_bett_liegende_person:",
    ":person_im_lotossitz:",
    ":person_in_dampfsauna:",
    ":schwebender_mann_im_anzug:",
    ":person_im_smoking:",
    ":jongleur(in):",
    ":kniende_person:",
    ":gewichtheber(in):",
    ":mountainbiker(in):",
    ":handballspieler(in):",
    ":wasserballspieler(in):",
    ":schmollende_person:",
    ":person_mit_erhobenem_arm:",
    ":person_im_ruderboot:",
    ":laufende_person:",
    ":schulterzuckende_person:",
    ":stehende_person:",
    ":surfer(in):",
    ":schwimmer(in):",
    ":badende_person:",
    ":infoschalter-mitarbeiter(in):",
    ":fußgänger(in):",
    ":person_mit_turban:",
    ":person_mit_krone:",
    ":mann_mit_chinesischem_hut:",
    ":person_mit_schleier:",
    ":petrischale:",
    ":pickel:",
    ":pick-up:",
    ":kuchen:",
    ":schwein:",
    ":schweinegesicht:",
    ":schweinerüssel:",
    ":kothaufen:",
    ":kapsel:",
    ":zusammengedrückte_finger:",
    ":wenig-geste:",
    ":piniendekoration:",
    ":ananas:",
    ":tischtennis:",
    ":pizza:",
    ":pinata:",
    ":protestschild:",
    ":religiöse_stätte:",
    ":wiedergabe:",
    ":wiedergabe_oder_pause:",
    ":spielplatzrutsche:",
    ":bettelndes_gesicht:",
    ":saugglocke:",
    ":plus:",
    ":polizeiwagen:",
    ":polizeilicht:",
    ":polizist(in):",
    ":pudel:",
    ":billardkugel:",
    ":popcorn:",
    ":postgebäude:",
    ":posthorn:",
    ":briefkasten:",
    ":topf_mit_essen:",
    ":trinkwasser:",
    ":kartoffel:",
    ":topfpflanze:",
    ":hähnchenschenkel:",
    ":pfund-banknote:",
    ":flüssigkeit_ausgießen:",
    ":schmollende_katze:",
    ":schmollendes_gesicht:",
    ":gebetskette:",
    ":schwangerer_mann:",
    ":schwangere_person:",
    ":schwangere_frau:",
    ":brezel:",
    ":prinz:",
    ":prinzessin:",
    ":drucker:",
    ":verboten:",
    ":lila_punkt:",
    ":lila_herz:",
    ":lila_quadrat:",
    ":geldbörse:",
    ":reißzwecke:",
    ":puzzleteil:",
    ":hase:",
    ":hasengesicht:",
    ":waschbär:",
    ":rennauto:",
    ":radio:",
    ":optionsfeld:",
    ":radioaktiv:",
    ":eisenbahnwagen:",
    ":bahngleis:",
    ":regenbogen:",
    ":erhobene_hand_von_hinten:",
    ":erhobene_faust:",
    ":erhobene_hand:",
    ":zwei_erhobene_handflächen:",
    ":widder:",
    ":ratte:",
    ":rasierer:",
    ":beleg:",
    ":aufnehmen:",
    ":recycling-symbol:",
    ":roter_apfel:",
    ":roter_punkt:",
    ":roter_umschlag:",
    ":rotes_ausrufezeichen:",
    ":rotes_haar:",
    ":rotes_herz:",
    ":rote_papierlaterne:",
    ":rotes_fragezeichen:",
    ":rotes_quadrat:",
    ":rotes_dreieck_mit_der_spitze_nach_unten:",
    ":rotes_dreieck_mit_der_spitze_nach_oben:",
    ":registered-trademark:",
    ":erleichtertes_gesicht:",
    ":gedenkschleife:",
    ":wiederholen:",
    ":titel_wiederholen:",
    ":rettungshelm:",
    ":toiletten:",
    ":pfeil_zurück:",
    ":kreisende_herzen:",
    ":nashorn:",
    ":pinke_schleife:",
    ":reisbällchen:",
    ":reiscracker:",
    ":faust_nach_rechts:",
    ":sprechblase_für_wütende_aussage_rechts:",
    ":pfeil_nach_rechts:",
    ":geschwungener_pfeil_nach_unten:",
    ":geschwungener_pfeil_nach_links:",
    ":geschwungener_pfeil_nach_oben:",
    ":nach_rechts_weisende_hand:",
    ":ring:",
    ":rettungsring:",
    ":ringplanet:",
    ":geröstete_süßkartoffel:",
    ":roboter:",
    ":felsen:",
    ":rakete:",
    ":küchenrolle:",
    ":zusammengerollte_zeitung:",
    ":achterbahn:",
    ":rollschuh:",
    ":sich_vor_lachen_auf_dem_boden_wälzen:",
    ":hahn:",
    ":rose:",
    ":rosette:",
    ":stecknadel:",
    ":rugbyball:",
    ":laufshirt:",
    ":sportschuh:",
    ":trauriges_aber_erleichtertes_gesicht:",
    ":sicherheitsnadel:",
    ":sicherheitsweste:",
    ":segelboot:",
    ":sake-flasche_mit_tasse:",
    ":salz:",
    ":grüßendes_gesicht:",
    ":sandwich:",
    ":sari:",
    ":satellit:",
    ":satellitenschüssel:",
    ":sauropode:",
    ":saxofon:",
    ":schal:",
    ":schule:",
    ":schere:",
    ":skorpion:",
    ":schraubenzieher:",
    ":schriftrolle:",
    ":seehund:",
    ":sitzplatz:",
    ":sich_die_augen_zuhaltendes_affengesicht:",
    ":spross:",
    ":selfie:",
    ":7.30_uhr:",
    ":7.00_uhr:",
    ":nähnadel:",
    ":pfannengericht:",
    ":kleeblatt:",
    ":hai:",
    ":wassereis:",
    ":reisähre:",
    ":schutzschild:",
    ":shinto-schrein:",
    ":schiff:",
    ":sternschnuppe:",
    ":einkaufstüten:",
    ":einkaufswagen:",
    ":torte:",
    ":shorts:",
    ":dusche:",
    ":garnele:",
    ":zufallsmodus:",
    ":ermahnendes_gesicht:",
    ":teufelsgruß:",
    ":6.30_uhr:",
    ":6.00_uhr:",
    ":skateboard:",
    ":skifahrer(in):",
    ":ski:",
    ":totenkopf:",
    ":totenkopf_mit_gekreuzten_knochen:",
    ":stinktier:",
    ":schlitten:",
    ":schlafendes_gesicht:",
    ":schläfriges_gesicht:",
    ":betrübtes_gesicht:",
    ":leicht_lächelndes_gesicht:",
    ":spielautomat:",
    ":faultier:",
    ":kleines_flugzeug:",
    ":kleine_blaue_raute:",
    ":kleine_orangefarbene_raute:",
    ":lachende_katze_mit_herzen_als_augen:",
    ":lächelndes_gesicht:",
    ":lächelndes_gesicht_mit_heiligenschein:",
    ":lächelndes_gesicht_mit_herzförmigen_augen:",
    ":lächelndes_gesicht_mit_herzen:",
    ":grinsendes_gesicht_mit_hörnern:",
    ":gesicht_mit_umarmenden_händen:",
    ":lächelndes_gesicht_mit_lachenden_augen:",
    ":lächelndes_gesicht_mit_sonnenbrille:",
    ":lachendes_gesicht_mit_träne:",
    ":süffisant_lächelndes_gesicht:",
    ":schnecke:",
    ":schlange:",
    ":niesendes_gesicht:",
    ":schneebedeckter_berg:",
    ":snowboarder(in):",
    ":schneeflocke:",
    ":schneemann_im_schnee:",
    ":schneemann_ohne_schneeflocken:",
    ":seife:",
    ":fußball:",
    ":socken:",
    ":softeis:",
    ":softball:",
    ":pik:",
    ":spaghetti:",
    ":funkeln:",
    ":wunderkerze:",
    ":funkelnde_sterne:",
    ":funkelndes_herz:",
    ":sich_den_mund_zuhaltendes_affengesicht:",
    ":lautsprecher_mit_hoher_lautstärke:",
    ":lautsprecher_mit_geringer_lautstärke:",
    ":lautsprecher_mit_mittlerer_lautstärke:",
    ":sprechender_kopf:",
    ":sprechblase_mit_drei_punkten:",
    ":schnellboot:",
    ":spinne:",
    ":spinnennetz:",
    ":spiralkalender:",
    ":notizblock:",
    ":schneckenhaus:",
    ":schwamm:",
    ":löffel:",
    ":wohnmobil:",
    ":sportmedaille:",
    ":blasender_wal:",
    ":tintenfisch:",
    ":gesicht_mit_herausgestreckter_zunge_und_zusammengekniffenen_augen:",
    ":stadion:",
    ":weißer_mittelgroßer_stern:",
    ":überwältigt:",
    ":hilal_und_stern:",
    ":davidstern:",
    ":bahnhof:",
    ":schüssel_und_essstäbchen:",
    ":stethoskop:",
    ":stopp:",
    ":stoppschild:",
    ":stoppuhr:",
    ":lineal:",
    ":erdbeere:",
    ":studiomikrofon:",
    ":döner:",
    ":sonne:",
    ":sonne_hinter_wolke:",
    ":sonne_hinter_großer_wolke:",
    ":sonne_hinter_regenwolke:",
    ":sonne_hinter_kleiner_wolke:",
    ":sonne_mit_gesicht:",
    ":sonnenblume:",
    ":sonnenbrille:",
    ":sonnenaufgang_über_dem_meer:",
    ":sonnenaufgang_über_bergen:",
    ":sonnenuntergang_in_der_stadt:",
    ":superheld(in):",
    ":bösewicht:",
    ":sushi:",
    ":schwebebahn:",
    ":schwan:",
    ":schweißtropfen:",
    ":synagoge:",
    ":spritze:",
    ":t-shirt:",
    ":taco:",
    ":takeaway-schachtel:",
    ":tamale:",
    ":tanabata-baum:",
    ":mandarine:",
    ":taxi:",
    ":teetasse_ohne_henkel:",
    ":teekanne:",
    ":abreißkalender:",
    ":teddybär:",
    ":telefon:",
    ":telefonhörer:",
    ":teleskop:",
    ":fernseher:",
    ":10.30_uhr:",
    ":10.00_uhr:",
    ":tennisball:",
    ":zelt:",
    ":reagenzglas:",
    ":thermometer:",
    ":nachdenkendes_gesicht:",
    ":zehensandale:",
    ":gedankenblase:",
    ":faden:",
    ":3.30_uhr:",
    ":3.00_uhr:",
    ":daumen_runter:",
    ":daumen_hoch:",
    ":ticket:",
    ":tiger:",
    ":tigergesicht:",
    ":zeitschaltuhr:",
    ":müdes_gesicht:",
    ":toilette:",
    ":tomate:",
    ":zunge:",
    ":werkzeugkasten:",
    ":zahn:",
    ":zahnbürste:",
    ":zylinder:",
    ":wirbelsturm:",
    ":trackball:",
    ":traktor:",
    ":markenzeichen:",
    ":zug:",
    ":straßenbahn:",
    ":straßenbahnwagen:",
    ":transgender-symbol:",
    ":wimpel:",
    ":dreieckiges_lineal:",
    ":dreizack:",
    ":troll:",
    ":oberleitungsbus:",
    ":pokal:",
    ":cocktail:",
    ":tropenfisch:",
    ":trompete:",
    ":tulpe:",
    ":trinkglas:",
    ":truthahn:",
    ":schildkröte:",
    ":12.30_uhr:",
    ":ziffernblatt_12.00_uhr:",
    ":kamel:",
    ":2.30_uhr:",
    ":zwei_herzen:",
    ":2.00_uhr:",
    ":regenschirm:",
    ":aufgestellter_sonnenschirm:",
    ":regenschirm_im_regen:",
    ":verstimmtes_gesicht:",
    ":einhorn:",
    ":offenes_schloss:",
    ":pfeil_nach_oben_und_unten:",
    ":pfeil_nach_links_oben:",
    ":pfeil_nach_rechts_oben:",
    ":pfeil_nach_oben:",
    ":umgekehrtes_gesicht:",
    ":aufwärts-schaltfläche:",
    ":vampir:",
    ":vertikale_verkehrsampel:",
    ":vibrationsmodus:",
    ":victory-geste:",
    ":videokamera:",
    ":gamepad:",
    ":videokassette:",
    ":geige:",
    ":vulkan:",
    ":volleyball:",
    ":vulkanischer_gruß:",
    ":waffel:",
    ":letztes_mondviertel:",
    ":drittes_mondviertel:",
    ":warnung:",
    ":papierkorb:",
    ":armbanduhr:",
    ":wasserbüffel:",
    ":wc:",
    ":wasserpistole:",
    ":welle:",
    ":wassermelone:",
    ":winkende_hand:",
    ":wellenlinie:",
    ":erstes_mondviertel:",
    ":zweites_mondviertel:",
    ":erschöpfte_katze:",
    ":erschöpftes_gesicht:",
    ":hochzeit:",
    ":wal:",
    ":autorad:",
    ":dharma-rad:",
    ":symbol_rollstuhl:",
    ":blindenstock:",
    ":weißer_punkt:",
    ":weißes_ausrufezeichen:",
    ":weiße_flagge:",
    ":blumenstempel:",
    ":weißes_haar:",
    ":weißes_herz:",
    ":großes_weißes_quadrat:",
    ":mittelkleines_weißes_quadrat:",
    ":mittelgroßes_weißes_quadrat:",
    ":weißes_fragezeichen:",
    ":kleines_weißes_quadrat:",
    ":weiße_quadratische_schaltfläche:",
    ":welke_blume:",
    ":japanisches_windspiel:",
    ":wind:",
    ":fenster:",
    ":weinglas:",
    ":zwinkerndes_gesicht:",
    ":zwinkerndes_gesicht_mit_herausgestreckter_zunge:",
    ":wolf:",
    ":frau:",
    ":mann_und_frau_halten_hände:",
    ":tanzende_frau:",
    ":frau_mit_kopftuch:",
    ":damenstiefel:",
    ":bluse:",
    ":damenhut:",
    ":damensandale:",
    ":händchen_haltende_frauen:",
    ":damen:",
    ":holz:",
    ":schwindeliges_gesicht:",
    ":weltkarte:",
    ":wurm:",
    ":besorgtes_gesicht:",
    ":geschenk:",
    ":schraubenschlüssel:",
    ":schreibende_hand:",
    ":röntgenbild:",
    ":wollknäuel:",
    ":gähnendes_gesicht:",
    ":gelber_punkt:",
    ":gelbes_herz:",
    ":gelbes_quadrat:",
    ":yen-banknote:",
    ":yin_und_yang:",
    ":jo-jo:",
    ":irres_gesicht:",
    ":zebra:",
    ":gesicht_mit_reißverschlussmund:",
    ":zombie:",
    ":schlafen:"};