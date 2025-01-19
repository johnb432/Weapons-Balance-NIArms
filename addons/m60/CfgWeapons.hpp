class CfgWeapons {
    class Rifle_Base_F;
    class hlc_M60e4_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class hlc_lmg_m60: hlc_M60e4_base {
        delete nia_magSwitch;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 231;
        };
    };
    class hlc_lmg_M60E4: hlc_M60e4_base {
        delete nia_magSwitch;
    };
};
