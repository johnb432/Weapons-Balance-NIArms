class hlc_fal_base: Rifle_Base_F {
    magazineWell[] += {"CBA_762x51_FAL_L"};
    class WeaponSlotsInfo;
};

class hlc_rifle_SLR: hlc_fal_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRailL1A1 {};
    };
};
class hlc_rifle_L1A1SLR: hlc_rifle_SLR {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRailL1A1 {};
    };
};
class hlc_rifle_c1A1: hlc_rifle_SLR {
    displayName = "C1A1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRailL1A1 {};
    };
};

class hlc_rifle_C2A1: hlc_fal_base {
    baseWeapon = "hlc_rifle_C2A1";
    displayName = "C2A1";
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 135;
        class CowsSlot: asdg_OpticRailL1A1 {};
    };
};

class hlc_rifle_FAL5061: hlc_fal_base {
    ACE_barrelTwist = 304.8;
    ACE_barrelLength = 458;
    displayName = "FN FAL 50.62";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 95;
        class CowsSlot: asdg_OpticRailL1A1 {};
    };
};
class hlc_rifle_LAR: hlc_rifle_FAL5061 {
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
        class CowsSlot: asdg_OpticRailL1A1 {};
    };
};
class hlc_rifle_FAL5000: hlc_rifle_FAL5061 {
    ACE_barrelTwist = 304.8;
    ACE_barrelLength = 533;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94;
        class CowsSlot: asdg_OpticRailL1A1 {};
    };
};
class hlc_rifle_FAL5000_RH: hlc_rifle_FAL5000 {
    ACE_barrelTwist = 304.8;
    ACE_barrelLength = 533;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94;
        class CowsSlot: asdg_OpticRailL1A1 {};
    };
};
class hlc_rifle_FAL5061Rail: hlc_fal_base {
    ACE_barrelTwist = 304.8;
    ACE_barrelLength = 458;
    displayName = "FN FAL 50.62 (RIS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 97;
    };
};
class hlc_rifle_FAL5000Rail: hlc_rifle_FAL5061Rail {
    ACE_barrelTwist = 304.8;
    ACE_barrelLength = 533;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96;
    };
};

class hlc_rifle_SLRchopmod: hlc_rifle_FAL5061 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92;
        class CowsSlot: asdg_OpticRailL1A1 {};
    };
};

class hlc_rifle_STG58F: hlc_fal_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98.1;
    };
};

class hlc_rifle_falosw: hlc_fal_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 89;
        class CowsSlot: asdg_OpticRail1913_long {};
    };
};
class hlc_rifle_osw_GL: hlc_rifle_falosw {
    class WeaponSlotsInfo {
        mass = 122;
        class CowsSlot: asdg_OpticRail1913_long {};
    };
};
