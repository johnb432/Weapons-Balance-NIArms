#pragma hemtt flag pe23_ignore_has_include

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

class hlc_50rnd_9x19_B_9mmar: 30Rnd_556x45_Stanag {
    displayName = "9mm Ball 50Rnd MP5 Magazine";
    descriptionShort = "Caliber: 9x19mm Parrabellum (Ball)<br/>Rounds: 50<br/>Used in: MP5";
    mass = 16.5;
    model = "\hlc_core\mesh\magazines\50rnd_556NATO_X15.p3d";
    modelSpecial = "\hlc_core\mesh\magazines\proxies\50rnd_556NATO_X15.p3d";
    modelSpecialIsProxy = 1;
    picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_EPR_ca.paa";
    scope = 2;
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

    #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    #endif
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
