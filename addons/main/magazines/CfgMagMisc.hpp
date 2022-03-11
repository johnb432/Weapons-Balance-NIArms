class hlc_5rnd_3006_1903: 30Rnd_556x45_Stanag {
    mass = 2.8;
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    modelSpecial = "";
};
class hlc_5rnd_3006_T_1903: hlc_5rnd_3006_1903 {
    ammo = "HLC_3006_T";
    mass = 2.8;
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

class 1Rnd_HE_Grenade_shell;
class hlc_VOG25_AK: 1Rnd_HE_Grenade_shell {
    displayName = "VOG25P (HE)";
};
class hlc_GRD_White: 1Rnd_HE_Grenade_shell {
    displayname = "GRD-40 (White Smoke)";
};
class hlc_GRD_blue: hlc_GRD_White {
    displayname = "GRD-40 (Blue Smoke)";
};
class hlc_GRD_green: hlc_GRD_White {
    displayname = "GRD-40 (Green Smoke)";
};
class hlc_GRD_orange: hlc_GRD_White {
    displayname = "GRD-40 (Orange Smoke)";
};
class hlc_GRD_purple: hlc_GRD_White {
    displayname = "GRD-40 (Purple Smoke)";
};
class hlc_GRD_yellow: hlc_GRD_White {
    displayname = "GRD-40 (Yellow Smoke)";
};
class hlc_GRD_Red: hlc_GRD_White {
    displayname = "GRD-40 (Red Smoke)";
};

class 30Rnd_9x21_Mag;
class hlc_30Rnd_10mm_B_MP5: 30Rnd_9x21_Mag {
    mass = 10;
};
class hlc_30Rnd_10mm_JHP_MP5: 30Rnd_9x21_Mag {
    mass = 10;
};

class hlc_30Rnd_9x19_B_MP5: 30Rnd_9x21_Mag {
    mass = 10;
};
class hlc_30Rnd_9x19_GD_MP5: 30Rnd_9x21_Mag {
    mass = 10;
};
class hlc_30Rnd_9x19_SD_MP5: 30Rnd_9x21_Mag {
    mass = 10;
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
class hlc_200rnd_556x45_B_SAW: hlc_200rnd_556x45_M_SAW {
    mass = 51.65;
};
class hlc_200rnd_556x45_Mdim_SAW: hlc_200rnd_556x45_M_SAW {
    mass = 51.65;
};
class hlc_200rnd_556x45_T_SAW: hlc_200rnd_556x45_M_SAW {
    mass = 51.65;
};

class hlc_100Rnd_762x51_B_M60E4: 30Rnd_556x45_Stanag {
    mass = 32.34;
};
class hlc_100Rnd_762x51_Mdim_M60E4: hlc_100Rnd_762x51_B_M60E4 {
    mass = 32.34;
};
class hlc_100Rnd_762x51_M_M60E4: hlc_100Rnd_762x51_B_M60E4 {
    mass = 32.34;
};
class hlc_100Rnd_762x51_Barrier_M60E4: hlc_100Rnd_762x51_B_M60E4 {
    displayName = "7.62mm SOST 100Rnd M13-linked belt (Tracers Every 4)";
    mass = 32.34;
};
class hlc_100Rnd_762x51_T_M60E4: hlc_100Rnd_762x51_B_M60E4 {
    mass = 32.34;
};

class hlc_200Rnd_762x51_B_M60E4: 30Rnd_556x45_Stanag {
    mass = 62;
};
class hlc_200Rnd_762x51_Mdim_M60E4: hlc_200Rnd_762x51_B_M60E4 {
    mass = 62;
};
class hlc_200Rnd_762x51_M_M60E4: hlc_200Rnd_762x51_B_M60E4 {
    mass = 62;
};
class hlc_200Rnd_762x51_Barrier_M60E4: hlc_200Rnd_762x51_B_M60E4 {
    displayName = "7.62mm SOST 200Rnd M13-linked belt (Tracers Every 4)";
    mass = 62;
};
class hlc_200Rnd_762x51_T_M60E4: hlc_200Rnd_762x51_B_M60E4 {
    mass = 62;
};

class hlc_10rnd_12g_buck_S12: 30Rnd_556x45_Stanag {
    descriptionShort = "Caliber: 12 Gauge 00-Buck<br/>Type: Lead Pellets<br/>Rounds: 8";
    displayName = "12 Gauge Buckshot 8Rnd Saiga Magazine";
    mass = 9.5;
};
class hlc_10rnd_12g_slug_S12: 30Rnd_556x45_Stanag {
    descriptionShort = "Caliber: 12 Gauge Slug<br/>Type: Single-piece Lead Slug<br/>Rounds: 8";
    displayName = "12 Gauge Slug 8Rnd Saiga Magazine";
    mass = 9.5;
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
