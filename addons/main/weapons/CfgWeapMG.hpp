class HLC_wp_M134Painless: Rifle_Base_F {
    ACE_Overheating_allowSwapBarrel = 1;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 592;
    };
    class FullAuto: Mode_FullAuto {
        textureType = "fastAuto";
    };
};

class hlc_M60e4_base: Rifle_Base_F {};
class hlc_lmg_m60: hlc_M60e4_base {
    delete nia_magSwitch;
};
class hlc_lmg_M60E4: hlc_M60e4_base {
    delete nia_magSwitch;
};

class hlc_MG42_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_lmg_MG42: hlc_MG42_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 254.5;
    };
};
class hlc_lmg_mg42_bakelite: hlc_lmg_MG42 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 254.5;
    };
};
class hlc_lmg_MG42KWS_t: hlc_lmg_MG42 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 258.5;
    };
};
class hlc_lmg_mg42kws_b: hlc_lmg_MG42KWS_t {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 258.5;
    };
};
class hlc_lmg_mg42kws_g: hlc_lmg_MG42KWS_t {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 258.5;
    };
};
class hlc_lmg_MG3: hlc_MG42_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 253.5;
    };
};
class hlc_lmg_MG3KWS: hlc_lmg_MG3 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 257.5;
    };
};
class hlc_lmg_MG3KWS_b: hlc_lmg_MG3KWS {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 257.5;
    };
};
class hlc_lmg_MG3KWS_g: hlc_lmg_MG3KWS {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 257.5;
    };
};
class hlc_lmg_MG3_optic: hlc_lmg_MG3 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 255.5;
    };
};
