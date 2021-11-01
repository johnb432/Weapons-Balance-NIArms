//Bren Gun Magazines
class hlc_30Rnd_303_B_bren : hlc_50Rnd_45ACP_B_1921 {
    ammo = "HLC_303Brit_B";
    author = "Toadie, johnb43";
    count = 30;
    descriptionShort = "Caliber: .303British Ball<br/>Rounds: 30<br/>Used in: Bren";
    displayName = "30Rnd .303 Bren Mag";
    displayNameShort = ".303 Ball";
    initSpeed = 840;
    lastRoundsTracer = 1;
    mass = 19.55;
    picture = "\hlc_core\tex\ui\ammo\m_brenball_ca.paa";
    scope = 2;
};
class hlc_30Rnd_303_T_bren : hlc_30Rnd_303_B_bren {
    ammo = "HLC_303Brit_T";
    author = "Toadie, johnb43";
    count = 30;
    descriptionShort = "Caliber: .303British Tracer<br/>Rounds: 30<br/>Used in: Bren";
    displayName = "30Rnd .303 Tracer Bren Mag";
    displayNameShort = ".303 Tracer";
    initSpeed = 770;
    lastRoundsTracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_brentracer_ca.paa";
    tracersEvery = 3;
};
class hlc_30Rnd_303_AP_bren : hlc_30Rnd_303_B_bren {
    ammo = "HLC_303Brit_AP";
    author = "Toadie, johnb43";
    count = 30;
    descriptionShort = "Caliber: .303British Armour-Piercing<br/>Rounds: 30<br/>Used in: Bren";
    displayName = "30Rnd .303 AP Bren Mag";
    displayNameShort = ".303 AP";
    initSpeed = 720;
    lastRoundsTracer = 0;
    picture = "\hlc_core\tex\ui\ammo\m_brenap_ca.paa";
    tracersEvery = 1;
};

//Lee-Enfield Stipper Clips
class hlc_10Rnd_303_B_enfield : hlc_30Rnd_303_B_bren {
    count = 10;
    scope = 2;
    descriptionShort = "Caliber: .303British Ball<br/>Rounds: 10<br/>Used in: SMLE,No.4,No.5";
    displayName = "10Rnd .303 Lee-Enfield Clip";
    initSpeed = 744;
    mass = 5.65;
    displayNameShort = ".303 Ball";
    picture = "\hlc_core\tex\ui\ammo\m_enfieldball_ca.paa";
};
class hlc_10Rnd_303_T_enfield : hlc_30Rnd_303_T_bren {
    count = 10;
    descriptionShort = "Caliber: .303British Tracer<br/>Rounds: 10<br/>Used in: SMLE,No.4,No.5";
    displayName = "10Rnd .303 Tracer Lee-Enfield Clip";
    tracersEvery = 1;
    scope = 2;
    initSpeed = 720;
    mass = 5.65;
    displayNameShort = ".303 Tracer";
    picture = "\hlc_core\tex\ui\ammo\m_enfieldtracer_ca.paa";
};
class hlc_10Rnd_303_AP_enfield : hlc_30Rnd_303_AP_bren {
    count = 10;
    descriptionShort = "Caliber: .303British Armour-Piercing<br/>Rounds: 10<br/>Used in: SMLE,No.4,No.5";
    displayName = "10Rnd .303 AP Lee-Enfield Clip";
    tracersEvery = 1;
    initSpeed = 840;
    scope = 2;
    mass = 5.65;
    displayNameShort = ".303 AP";
    picture = "\hlc_core\tex\ui\ammo\m_enfieldap_ca.paa";
};
