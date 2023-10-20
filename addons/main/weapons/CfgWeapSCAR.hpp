class hlc_SCARH_Base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class hlc_wp_SCARH_STD: hlc_SCARH_Base {
    mass = 78.8;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};
class hlc_WP_SCARH_CQC: hlc_wp_SCARH_STD {
    mass = 76.8;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};
class hlc_WP_SCARH_DMR: hlc_wp_SCARH_STD {
    mass = 81.8;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.8;
    };
};

class hlc_wp_MK17IUR_762R;
class hlc_wp_MK17IUR_762R_camo: hlc_wp_MK17IUR_762R {
    class nia_magSwitch {
        default = "hlc_wp_MK17IUR_762R_camo";
    };
};
