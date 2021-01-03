class hlc_5rnd_3006_1903: 30Rnd_556x45_Stanag {
    mass = 3;
};
class hlc_5rnd_3006_T_1903: hlc_5rnd_3006_1903 {
    ammo = "HLC_3006_T";
    mass = 3;
};

class hlc_5rnd_300WM_FMJ_AWM: 30Rnd_556x45_Stanag {
    mass = 2.6;
};
class hlc_5rnd_300WM_mk248_AWM: hlc_5rnd_300WM_FMJ_AWM {
    mass = 2.6;
};
class hlc_5rnd_300WM_BTSP_AWM: hlc_5rnd_300WM_FMJ_AWM {
    mass = 2.6;
};
class hlc_5rnd_300WM_AP_AWM: hlc_5rnd_300WM_FMJ_AWM {
    mass = 2.6;
};
class hlc_5rnd_300WM_SBT_AWM: hlc_5rnd_300WM_FMJ_AWM {
    mass = 2.6;
};
class hlc_5rnd_300WM_T_AWM: hlc_5rnd_300WM_FMJ_AWM {
    mass = 2.6;
};

class hlc_50rnd_9x19_B_9mmar: 30Rnd_556x45_Stanag {
    displayName = "9mm Ball 50Rnd MP5 Magazine";
    descriptionShort = "Caliber: 9x19mm Parrabellum (Ball)<br/>Rounds: 50<br/>Used in: MP5";
    mass = 16.5;
    model = "\hlc_core\mesh\magazines\50rnd_556NATO_X15.p3d";
    modelSpecial = "\hlc_core\mesh\magazines\proxies\50rnd_556NATO_X15";
    modelSpecialIsProxy = 1;
    picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_EPR_ca.paa";
    scope = 2;
};

class hlc_200rnd_556x45_M_SAW: 30Rnd_556x45_Stanag {
    mass = 51.65;
    reloadAction = "GestureReloadM200";
};

class hlc_100Rnd_762x51_B_M60E4: 30Rnd_556x45_Stanag {
    mass = 32.34;
};
class hlc_100Rnd_762x51_Barrier_M60E4: hlc_100Rnd_762x51_B_M60E4 {
    displayName = "7.62mm SOST 100Rnd M13-linked belt (Tracers Every 4)";
};

class hlc_200Rnd_762x51_B_M60E4: 30Rnd_556x45_Stanag {
    mass = 62;
};
class hlc_200Rnd_762x51_Barrier_M60E4: hlc_200Rnd_762x51_B_M60E4 {
    displayName = "7.62mm SOST 200Rnd M13-linked belt (Tracers Every 4)";
};

class hlc_10rnd_12g_buck_S12: 30Rnd_556x45_Stanag {
    descriptionShort = "Caliber: 12 Gauge 00-Buck<br/>Type: Lead Pellets<br/>Rounds: 8";
    displayName = "12 Gauge Buckshot 8Rnd Saiga Magazine";
};
class hlc_10rnd_12g_slug_S12: 30Rnd_556x45_Stanag {
    descriptionShort = "Caliber: 12 Gauge Slug<br/>Type: Single-piece Lead Slug<br/>Rounds: 8";
    displayName = "12 Gauge Slug 8Rnd Saiga Magazine";
};
class hlc_12rnd_12g_buck_S12: hlc_10rnd_12g_buck_S12 {
    author = "Toadie, johnb43";
    count = 12;
    descriptionShort = "Caliber: 12 Gauge 00-Buck<br/>Type: Lead Pellets<br/>Rounds: 12";
    displayName = "12 Gauge Buckshot 12Rnd Saiga Magazine";
    mass = 16;
};
class hlc_12rnd_12g_slug_S12: hlc_10rnd_12g_slug_S12 {
    author = "Toadie, johnb43";
    count = 12;
    descriptionShort = "Caliber: 12 Gauge Slug<br/>Type: Single-piece Lead Slug<br/>Rounds: 12";
    displayName = "12 Gauge Slug 12Rnd Saiga Magazine";
    mass = 16;
};
