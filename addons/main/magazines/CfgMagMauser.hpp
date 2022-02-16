// Kar98k Clips
class hlc_5Rnd_792_B_Kar98: hlc_10Rnd_303_B_enfield {
    ammo = "HLC_792x57_Ball";
    count = 5;
    descriptionShort = "Caliber: 7.92x57mm S.m.E.<br/>Type: FMJ<br/>Rounds: 5<br/>Used in: Kar98k";
    displayName = "5Rnd 7.92x57 S.m.E. Clip";
    displayNameShort = "FMJ";
    initSpeed = 770;
    mass = 2.9;
    picture = "\hlc_core\tex\ui\ammo\m_k98ball_ca.paa";
    tracersEvery = 0;
};
class hlc_5Rnd_792_T_Kar98: hlc_5Rnd_792_B_Kar98 {
    ammo = "HLC_792x57_Tracer";
    descriptionShort = "Caliber: 7.92x57mm S.m.K. L'spur<br/>Type: Tracer<br/>Rounds: 5<br/>Used in: Kar98k";
    displayName = "5Rnd 7.92x57 S.m.K. L'spur Clip (Yellow Tracer)";
    displayNameShort = "Tracer";
    initSpeed = 762;
    picture = "\hlc_core\tex\ui\ammo\m_k98tracer_ca.paa";
    tracersEvery = 1;
};
class hlc_5Rnd_792_AP_Kar98: hlc_5Rnd_792_B_Kar98 {
    ammo = "HLC_792x57_AP";
    descriptionShort = "Caliber: 7.92x57mm S.m.K.H.<br/>Type: AP<br/>Rounds: 5<br/>Used in: Kar98k";
    displayName = "5Rnd 7.92x57 S.m.K.H. Clip";
    displayNameShort = "AP";
    initSpeed = 840;
    picture = "\hlc_core\tex\ui\ammo\m_k98ap_ca.paa";
};

// MG 34 Boxes
class hlc_75rnd_792_B_MG34: hlc_5Rnd_792_B_Kar98 {
    ACE_isBelt = 1;
    count = 75;
    descriptionShort = "Caliber: 7.92x57mm S.m.E.<br/>Type: FMJ<br/>Rounds: 75<br/>Used in: MG 34, MG 42";
    displayName = "75Rnd 7.92x57 S.m.E. Drum";
    mass = 39;
    model = "hlc_wp_mg3\mesh\magazine\magazine_42.p3d";
    modelSpecial = "hlc_wp_mg3\mesh\magazine\proxy\50rnd_792x57_Gurt34.p3d";
    modelSpecialIsProxy = 1;
    picture = "\hlc_core\tex\ui\ammo\m_mg34ball_ca.paa";
    tracersEvery = 0;
};
class hlc_75rnd_792_M_MG34: hlc_75rnd_792_B_MG34 {
    ammo = "HLC_792x57_Tracer";
    descriptionShort = "Caliber: 7.92x57mm S.m.E./S.m.K. L'spur<br/>Type: FMJ/Tracer<br/>Rounds: 75<br/>Used in: MG 34, MG 42";
    displayName = "75Rnd 7.92x57 S.m.E. Drum (Yellow Tracer Mixed)";
    displayNameShort = "FMJ/Tracer";
    picture = "\hlc_core\tex\ui\ammo\m_mg34tracer_ca.paa";
    tracersEvery = 3;
};
class hlc_75rnd_792_T_MG34: hlc_75rnd_792_B_MG34 {
    ammo = "HLC_792x57_Tracer";
    descriptionShort = "Caliber: 7.92x57mm S.m.K. L'spur<br/>Type: Tracer<br/>Rounds: 75<br/>Used in: MG 34, MG 42";
    displayName = "75Rnd 7.92x57 S.m.K. L'spur Drum (Yellow Tracer)";
    displayNameShort = "Tracer";
    initSpeed = 762;
    picture = "\hlc_core\tex\ui\ammo\m_mg34tracer_ca.paa";
    tracersEvery = 1;
};
class hlc_75rnd_792_AP_MG34: hlc_75rnd_792_B_MG34 {
    ammo = "HLC_792x57_AP";
    descriptionShort = "Caliber: 7.92x57mm S.m.K.H.<br/>Type: AP<br/>Rounds: 75<br/>Used in: MG 34, MG 42";
    displayName = "75Rnd 7.92x57 S.m.K.H. Drum";
    displayNameShort = "AP";
    initSpeed = 840;
    picture = "\hlc_core\tex\ui\ammo\m_mg34ap_ca.paa";
};
