#pragma hemtt flag pe23_ignore_has_include

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_10Rnd_762x51_B_SCARH: 30Rnd_556x45_Stanag {
        mass = 8.9;
    };
    class hlc_10Rnd_762x51_barrier_SCARH: hlc_10Rnd_762x51_B_SCARH {
        mass = 8.9;
    };
    class hlc_10Rnd_762x51_mk316_SCARH: hlc_10Rnd_762x51_B_SCARH {
        mass = 8.9;
    };
    class hlc_10Rnd_762x51_S_SCARH: hlc_10Rnd_762x51_B_SCARH {
        mass = 8.9;
    };
    class hlc_10Rnd_762x51_T_SCARH: hlc_10Rnd_762x51_B_SCARH {
        mass = 8.9;
    };
    class hlc_10Rnd_762x51_TDim_SCARH: hlc_10Rnd_762x51_B_SCARH {
        mass = 8.9;
    };

    class hlc_20Rnd_762x51_B_SCARH: 30Rnd_556x45_Stanag {
        mass = 16.24;
    };
    class hlc_20Rnd_762x51_barrier_SCARH: hlc_20Rnd_762x51_B_SCARH {
        mass = 16.24;
    };
    class hlc_20rnd_762x51_M_SCARH: hlc_20Rnd_762x51_B_SCARH {
        displayname = "7.62mm EPR 20Rnd SCAR-H Magazine (Tracers Every 4/Black)";
        mass = 16.24;
    };
    class hlc_20rnd_762x51_MDIM_SCARH: hlc_20Rnd_762x51_B_SCARH {
        mass = 16.24;
    };
    class hlc_20Rnd_762x51_MDIM_SCARH_camo: hlc_20rnd_762x51_MDIM_SCARH {
        displayname = "7.62mm EPR 20Rnd SCAR-H Magazine (IR-DIM Every 4/Camo)";
    };
    class hlc_20Rnd_762x51_MDIM_SCARH_tan: hlc_20rnd_762x51_MDIM_SCARH {
        displayname = "7.62mm EPR 20Rnd SCAR-H Magazine (IR-DIM Every 4/Tan)";
    };
    class hlc_20Rnd_762x51_mk316_SCARH: hlc_20Rnd_762x51_B_SCARH {
        mass = 16.24;
    };
    class hlc_20Rnd_762x51_S_SCARH: hlc_20Rnd_762x51_B_SCARH {
        mass = 16.24;
    };
    class hlc_20Rnd_762x51_T_SCARH: hlc_20Rnd_762x51_B_SCARH {
        mass = 16.24;
    };
    class hlc_20Rnd_762x51_TDim_SCARH: hlc_20Rnd_762x51_B_SCARH {
        mass = 16.24;
    };

    // SCAR Magazines
    class hlc_20Rnd_762x51_B_SCARH_Tan;
    class hlc_20rnd_762x51_B_SCAR: hlc_20Rnd_762x51_B_SCARH_Tan {
        displayName = "20Rnd 7.62x51mm SCAR-H Mag";
        picture = "\hlc_core\tex\ui\ammo\m_scarhball_ca.paa";

        #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
            model = "rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_scar_mag.p3d";
            modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_MK17_20rnd";
            modelSpecialIsProxy = 1;
        #endif
    };
    class hlc_20Rnd_762x51_T_SCARH_tan;
    class hlc_20rnd_762x51_T_SCAR: hlc_20Rnd_762x51_T_SCARH_tan {
        displayName = "20Rnd 7.62x51mm SCAR-H Mag (Tracer) ";
        picture = "\hlc_core\tex\ui\ammo\m_scarhTracer_ca.paa";

        #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
            model = "rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_scar_mag.p3d";
            modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_MK17_20rnd";
            modelSpecialIsProxy = 1;
        #endif
    };
    class hlc_20Rnd_762x51_S_SCARH_tan;
    class hlc_20rnd_762x51_S_SCAR: hlc_20Rnd_762x51_S_SCARH_tan {
        displayName = "20Rnd 7.62x51mm Subsonic SCAR-H Mag";
        picture = "\hlc_core\tex\ui\ammo\m_scarhsubsonic_ca.paa";

        #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
            model = "rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_scar_mag.p3d";
            modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_MK17_20rnd";
            modelSpecialIsProxy = 1;
        #endif
    };
};
