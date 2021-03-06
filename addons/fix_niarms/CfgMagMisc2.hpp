//P90 Magazines
class hlc_50Rnd_57x28_JHP_P90: 30Rnd_556x45_Stanag {
    ammo = "HLC_57x28mm_JHP";
    author = "Toadie, johnb43";
    count = 50;
    descriptionShort = "Caliber: 5.7x28mm SS195LF Blue VMax <br/>Rounds: 50<br/>Used in: P90";
    displayName = "5.7mm JHP 50Rnd P90 Magazine";
    displayNameShort = "5.7x28mm SS195LF Blue VMax";
    initSpeed = 715;
    lastRoundsTracer = 0;
    mass = 12;
    picture = "\hlc_core\tex\ui\ammo\m_p90ss195_ca.paa";
    scope = 2;
    tracersEvery = 0;

};
class hlc_50Rnd_57x28_FMJ_P90: hlc_50Rnd_57x28_JHP_P90 {
    ammo = "HLC_57x28mm_FMJ";
    descriptionShort = "Caliber: 5.7x28mm SS190 Black-Tip<br/>Rounds: 50<br/>Used in: P90";
    displayName = "5.7mm FMJ 50Rnd P90 Magazine";
    displayNameShort = "5.7x28mm SS190 Black-Tip";
    lastRoundsTracer = 0;
    mass = 12;
    picture = "\hlc_core\tex\ui\ammo\m_p90ss190_ca.paa";
    scope = 2;
    tracersEvery = 0;
};

//TAC50 Magazines
class hlc_5Rnd_50BMG_B_TAC50: hlc_50Rnd_45ACP_B_1921 {
    ammo = "B_127x99_Ball";
    author = "Toadie, johnb43";
    count = 5;
    descriptionShort = "Caliber: .50 BMG Ball<br/>Rounds: 5<br/>Used in: TAC-50";
    displayName = "TAC-50 Ball 5rnd .50BMG";
    displayNameShort = ".50 BMG Ball";
    lastRoundsTracer = 0;
    initSpeed = 1024;
    mass = 16;
    picture = "\hlc_core\tex\ui\ammo\m_tac50ball_ca.paa";
    scope = 2;
};
class hlc_5Rnd_50BMG_T_TAC50: hlc_5Rnd_50BMG_B_TAC50 {
    ammo = "B_127x99_Ball_Tracer_Red";
    count = 5;
    descriptionShort = "Caliber: .50 BMG Tracer<br/>Rounds: 5<br/>Used in: TAC-50";
    displayName = "TAC-50 Tracer 5Rnd .50BMG";
    displayNameShort = ".50 BMG Tracer";
    initSpeed = 928;
    tracersEvery = 1;
    picture = "\hlc_core\tex\ui\ammo\m_tac50tracer_ca.paa";
};
class hlc_5Rnd_50BMG_SLAP_TAC50: hlc_5Rnd_50BMG_B_TAC50 {
    ammo = "FH_50BMG_SLAP";
    count = 5;
    descriptionShort = "Caliber: .50 BMG SLAP<br/>Rounds: 5<br/>Used in: TAC-50";
    displayName = "TAC-50 SLAP 5Rnd .50BMG";
    displayNameShort = ".50 BMG SLAP";
    initSpeed = 1219;
    tracersEvery = 1;
    picture = "\hlc_core\tex\ui\ammo\m_tac50slap_ca.paa";
};
class hlc_5Rnd_50BMG_Raufoss_TAC50: hlc_5Rnd_50BMG_B_TAC50 {
    ammo = "FH_50BMG_Raufoss";
    count = 5;
    descriptionShort = "Caliber: .50 BMG Raufoss<br/>Rounds: 5<br/>Used in: TAC-50";
    displayName = "TAC-50 Raufoss (Mk211) HEIAP 5Rnd .50BMG";
    displayNameShort = ".50 BMG Raufoss";
    initSpeed = 889;
    tracersEvery = 1;
    picture = "\hlc_core\tex\ui\ammo\m_tac50raufoss_ca.paa";
};

//Sten Magazines
class hlc_32rnd_9x19_B_sten: hlc_50Rnd_45ACP_B_1921 {
    ammo = "HLC_9x19_Ball";
    count = 32;
    descriptionShort = "Caliber: 9x19mm Ball<br/>Rounds: 32<br/>Used in: Sten";
    displayName = "32Rnd 9x19mm Ball Sten Mag";
    displayNameShort = "9x19mm Ball";
    initSpeed = 365;
    lastRoundsTracer = 1;
    mass = 11;
    picture = "\hlc_core\tex\ui\ammo\m_sten_ca.paa";
    scope = 2;
    tracersEvery = 2;
};

//SCAR Magazines
class hlc_20Rnd_762x51_T_fal;
class hlc_20rnd_762x51_B_SCAR: hlc_20Rnd_762x51_B_fal {
    descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: SCAR-H (Mk17)";
    displayName = "20Rnd 7.62x51mm SCAR-H Mag";
    displayNameShort = "7.62mm Ball";
    initSpeed = 714;
    mass = 16.24;
    picture = "\hlc_core\tex\ui\ammo\m_scarhball_ca.paa";
};
class hlc_20rnd_762x51_T_SCAR: hlc_20Rnd_762x51_T_fal {
    descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: SCAR-H (Mk17)";
    displayName = "20Rnd 7.62x51mm SCAR-H Mag (Tracer) ";
    displayNameShort = "7.62mm Tracer";
    initSpeed = 714;
    mass = 16.24;
    picture = "\hlc_core\tex\ui\ammo\m_scarhTracer_ca.paa";
};
class hlc_20rnd_762x51_S_SCAR: hlc_20Rnd_762x51_S_fal {
    descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: SCAR-H (Mk17)";
    displayName = "20Rnd 7.62x51mm Subsonic SCAR-H Mag";
    displayNameShort = "7.62mm Subsonic";
    mass = 16.24;
    picture = "\hlc_core\tex\ui\ammo\m_scarhsubsonic_ca.paa";
};
