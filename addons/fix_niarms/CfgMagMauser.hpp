//Kar98k Clips
class hlc_5Rnd_792_B_Kar98 : hlc_10Rnd_303_B_enfield {
    ammo = "HLC_792x57_Ball";
    count = 5;
    descriptionShort = "Caliber: 7.92x57mm sS (Ball)<br/>Rounds: 5<br/>Used in: Kar98";
    displayName = "5Rnd 7.92x57mm FMJ Mauser Clip";
    displayNameShort = "7.92x57mm Ball";
    initSpeed = 770;
    lastRoundsTracer = 1;
    mass = 2.9;
    picture = "\hlc_core\tex\ui\ammo\m_k98ball_ca.paa";
    tracersEvery = 0;
};
class hlc_5Rnd_792_T_Kar98 : hlc_10Rnd_303_B_enfield {
    ammo = "HLC_792x57_Tracer";
    count = 5;
    descriptionShort = "Caliber: 7.92x57mm Tracer<br/>Rounds: 5<br/>Used in: Kar98";
    displayName = "5Rnd 7.92x57mm Tracer Mauser Clip";
    displayNameShort = "7.92x57mm Tracer";
    initSpeed = 762;
    lastRoundsTracer = 2;
    mass = 2.9;
    picture = "\hlc_core\tex\ui\ammo\m_k98tracer_ca.paa";
    tracersEvery = 1;
};
class hlc_5Rnd_792_AP_Kar98 : hlc_10Rnd_303_B_enfield {
    ammo = "HLC_792x57_AP";
    count = 5;
    descriptionShort = "Caliber: 7.92x57mm PmK (AP)<br/>Rounds: 5<br/>Used in: Kar98";
    displayName = "5Rnd 7.92x57mm AP Mauser Clip";
    displayNameShort = "7.92x57mm AP";
    initSpeed = 840;
    lastRoundsTracer = 3;
    mass = 2.9;
    picture = "\hlc_core\tex\ui\ammo\m_k98ap_ca.paa";
    tracersEvery = 0;
};

//MG34 Boxes
class hlc_75rnd_792_B_MG34 : hlc_5Rnd_792_B_Kar98 {
    ACE_isBelt = 1;
    count = 75;
    descriptionShort = "Caliber: 7.92x57mm sS (Ball)<br/>Rounds: 75<br/>Used in: MG34";
    displayName = "75Rnd 7.92x57mm Ball MG Drum";
    displayNameShort = "7.92x57mm Ball";
    initSpeed = 762;
    mass = 39;
    model = "hlc_wp_mg3\mesh\magazine\magazine_42.p3d";
    modelSpecial = "hlc_wp_mg3\mesh\magazine\proxy\50rnd_792x57_Gurt34.p3d";
    modelSpecialIsProxy = 1;
    picture = "\hlc_core\tex\ui\ammo\m_mg34ball_ca.paa";
    tracersEvery = 3;
};
class hlc_75rnd_792_T_MG34 : hlc_75rnd_792_B_MG34 {
    ammo = "HLC_792x57_Tracer";
    count = 75;
    descriptionShort = "Caliber: 7.92x57mm Tracer<br/>Rounds: 75<br/>Used in: MG34";
    displayName = "75Rnd 7.92x57mm Tracer MG Drum";
    displayNameShort = "7.92x57mm Tracer";
    mass = 39;
    picture = "\hlc_core\tex\ui\ammo\m_mg34tracer_ca.paa";
    tracersEvery = 3;
};
class hlc_75rnd_792_AP_MG34 : hlc_75rnd_792_B_MG34 {
    ammo = "HLC_792x57_AP";
    count = 75;
    descriptionShort = "Caliber: 7.92x57mm PmK (AP)<br/>Rounds: 75<br/>Used in: MG34";
    displayName = "75Rnd 7.92x57mm AP MG Drum";
    displayNameShort = "7.92x57mm Armour-Piercing";
    mass = 39;
    picture = "\hlc_core\tex\ui\ammo\m_mg34ap_ca.paa";
    tracersEvery = 3;
};
