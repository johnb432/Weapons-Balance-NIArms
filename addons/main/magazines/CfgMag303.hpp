#pragma hemtt flag pe23_ignore_has_include

// Bren Gun Magazines
class hlc_30Rnd_303_B_bren: hlc_50Rnd_45ACP_B_1921 {
    ammo = "HLC_303Brit_B";
    author = "Toadie, johnb43";
    count = 30;
    descriptionShort = "Caliber: .303 British Mk.VII<br/>Type: FMJ<br/>Rounds: 30<br/>Used in: Bren";
    displayName = "30Rnd .303 Mk.VII Mag";
    displayNameShort = "FMJ";
    initSpeed = 840;
    lastRoundsTracer = 1;
    mass = 19.55;
    picture = "\hlc_core\tex\ui\ammo\m_brenball_ca.paa";
    scope = 2;

    #if __has_include("\UK3CB_Factions\addons\UK3CB_Factions_Weapons\BREN\proxy\uk3cb_bren_303_30rnd_magazine.p3d")
        modelSpecial = "UK3CB_Factions\addons\UK3CB_Factions_Weapons\BREN\proxy\uk3cb_bren_303_30rnd_magazine.p3d";
    #else
        modelSpecial = "";
    #endif
};
class hlc_30Rnd_303_M_bren: hlc_30Rnd_303_B_bren {
    ammo = "HLC_303Brit_T";
    author = "Toadie, johnb43";
    count = 30;
    descriptionShort = "Caliber: .303 British Mk.VII/G Mk.II<br/>Type: FMJ/Tracer<br/>Rounds: 30<br/>Used in: Bren";
    displayName = "30Rnd .303 Mk.VII Mag (White Tracer Mixed)";
    displayNameShort = "FMJ/Tracer";
    initSpeed = 770;
    lastRoundsTracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_brentracer_ca.paa";
    tracersEvery = 3;

    #if __has_include("\UK3CB_Factions\addons\UK3CB_Factions_Weapons\BREN\proxy\uk3cb_bren_303_30rnd_magazine.p3d")
        modelSpecial = "UK3CB_Factions\addons\UK3CB_Factions_Weapons\BREN\proxy\uk3cb_bren_303_30rnd_magazine.p3d";
    #else
        modelSpecial = "";
    #endif
};
class hlc_30Rnd_303_T_bren: hlc_30Rnd_303_B_bren {
    ammo = "HLC_303Brit_T";
    author = "Toadie, johnb43";
    count = 30;
    descriptionShort = "Caliber: .303 British G Mk.II<br/>Type: Tracer<br/>Rounds: 30<br/>Used in: Bren";
    displayName = "30Rnd .303 G Mk.II Mag (White Tracer)";
    displayNameShort = "Tracer";
    initSpeed = 770;
    lastRoundsTracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_brentracer_ca.paa";
    tracersEvery = 1;

    #if __has_include("\UK3CB_Factions\addons\UK3CB_Factions_Weapons\BREN\proxy\uk3cb_bren_303_30rnd_magazine.p3d")
        modelSpecial = "UK3CB_Factions\addons\UK3CB_Factions_Weapons\BREN\proxy\uk3cb_bren_303_30rnd_magazine.p3d";
    #else
        modelSpecial = "";
    #endif
};
class hlc_30Rnd_303_AP_bren: hlc_30Rnd_303_B_bren {
    ammo = "HLC_303Brit_AP";
    author = "Toadie, johnb43";
    count = 30;
    descriptionShort = "Caliber: .303 British W Mk.IZ<br/>Type: AP<br/>Rounds: 30<br/>Used in: Bren";
    displayName = "30Rnd .303 W Mk.IZ Mag";
    displayNameShort = "AP";
    initSpeed = 720;
    lastRoundsTracer = 0;
    picture = "\hlc_core\tex\ui\ammo\m_brenap_ca.paa";
    tracersEvery = 1;

    #if __has_include("\UK3CB_Factions\addons\UK3CB_Factions_Weapons\BREN\proxy\uk3cb_bren_303_30rnd_magazine.p3d")
        modelSpecial = "UK3CB_Factions\addons\UK3CB_Factions_Weapons\BREN\proxy\uk3cb_bren_303_30rnd_magazine.p3d";
    #else
        modelSpecial = "";
    #endif
};

// Lee-Enfield Stipper Clips
class hlc_10Rnd_303_B_enfield: hlc_30Rnd_303_B_bren {
    count = 10;
    scope = 2;
    descriptionShort = "Caliber: .303 British Mk.VII<br/>Type: FMJ<br/>Rounds: 10<br/>Used in: Lee-Enfield";
    displayName = "10Rnd .303 Mk.VII Clip";
    displayNameShort = "FMJ";
    initSpeed = 744;
    mass = 5.65;
    picture = "\hlc_core\tex\ui\ammo\m_enfieldball_ca.paa";

    #if __has_include("\UK3CB_Factions\addons\UK3CB_Factions_Weapons\ENFIELD\proxy\uk3cb_enfield_303_10rnd_magazine.p3d")
        modelSpecial = "UK3CB_Factions\addons\UK3CB_Factions_Weapons\ENFIELD\proxy\uk3cb_enfield_303_10rnd_magazine.p3d";
    #else
        modelSpecial = "";
    #endif
};
class hlc_10Rnd_303_T_enfield: hlc_30Rnd_303_T_bren {
    count = 10;
    descriptionShort = "Caliber: .303 British G Mk.II<br/>Type: Tracer<br/>Rounds: 10<br/>Used in: Lee-Enfield";
    displayName = "10Rnd .303 G Mk.II Mag (White Tracer)";
    displayNameShort = "Tracer";
    tracersEvery = 1;
    initSpeed = 720;
    mass = 5.65;
    picture = "\hlc_core\tex\ui\ammo\m_enfieldtracer_ca.paa";

    #if __has_include("\UK3CB_Factions\addons\UK3CB_Factions_Weapons\ENFIELD\proxy\uk3cb_enfield_303_10rnd_magazine.p3d")
        modelSpecial = "UK3CB_Factions\addons\UK3CB_Factions_Weapons\ENFIELD\proxy\uk3cb_enfield_303_10rnd_magazine.p3d";
    #else
        modelSpecial = "";
    #endif
};
class hlc_10Rnd_303_AP_enfield: hlc_30Rnd_303_AP_bren {
    count = 10;
    descriptionShort = "Caliber: .303 British W Mk.IZ<br/>Type: AP<br/>Rounds: 10<br/>Used in: Lee-Enfield";
    displayName = "10Rnd .303 W Mk.IZ Mag";
    displayNameShort = "AP";
    tracersEvery = 1;
    initSpeed = 840;
    mass = 5.65;
    picture = "\hlc_core\tex\ui\ammo\m_enfieldap_ca.paa";

    #if __has_include("\UK3CB_Factions\addons\UK3CB_Factions_Weapons\ENFIELD\proxy\uk3cb_enfield_303_10rnd_magazine.p3d")
        modelSpecial = "UK3CB_Factions\addons\UK3CB_Factions_Weapons\ENFIELD\proxy\uk3cb_enfield_303_10rnd_magazine.p3d";
    #else
        modelSpecial = "";
    #endif
};
