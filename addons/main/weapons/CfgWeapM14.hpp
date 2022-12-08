class hlc_M14_base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class hlc_rifle_M14: hlc_M14_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90.2;
    };
};
class hlc_rifle_M14_Bipod: hlc_rifle_M14 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92.2;
    };
};
class hlc_rifle_M14_Bipod_Rail: hlc_rifle_M14 {
    displayName = "M14 (Bipod/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94.2;
    };
};
class hlc_rifle_M14_Rail: hlc_rifle_M14 {
    displayName = "M14 (Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92.2;
    };
};

class hlc_rifle_M21: hlc_M14_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 116;
    };
};
class hlc_rifle_M21_Rail: hlc_rifle_M21 {
    displayName = "M21 (Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 118;
    };
};
class hlc_rifle_m14dmr: hlc_rifle_M21 {
    displayName = "M14 DMR";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.2;
    };
};
class hlc_rifle_M14dmr_Rail: hlc_rifle_m14dmr {
    displayName = "M14 DMR (Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 99.2;
    };
};
