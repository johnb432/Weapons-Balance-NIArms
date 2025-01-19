#pragma hemtt flag pe23_ignore_has_include

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_200rnd_556x45_M_SAW: 30Rnd_556x45_Stanag {
        mass = 51.65;

        #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
            modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
            modelSpecialIsProxy = 1;
            reloadAction = "rhs_GestureReloadM249";
        #else
            reloadAction = "GestureReloadM200";
        #endif
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
};
