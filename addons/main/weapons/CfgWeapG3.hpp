class hlc_g3_base: Rifle_Base_F {
    magazineWell[] += {"CBA_762x51_G3_L","CBA_762x51_G3_XL"};
    class WeaponSlotsInfo;
};
class hlc_rifle_psg1: hlc_g3_base {
    displayName = "HK PSG1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762 {};
    };
};
class hlc_rifle_psg1A1: hlc_rifle_psg1 {
    displayName = "HK PSG1A1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        delete Cowsslot;
        class Cowsslot: UK3CB_OpticRail1913_G3 {};
    };
};
class hlc_rifle_PSG1A1_RIS: hlc_rifle_psg1A1 {
    displayName = "HK PSG1A1 (RIS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 143;
    };
};

class hlc_rifle_g3sg1: hlc_g3_base {
    displayName = "HK G3/SG1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 113;
        class Cowsslot: UK3CB_OpticRail1913_G3 {};
    };
};
class hlc_rifle_g3sg1ris: hlc_rifle_g3sg1 {
    displayName = "HK G3/SG1 (RIS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 115;
    };
};
class hlc_rifle_hk51: hlc_rifle_g3sg1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.3;
    };
};
class hlc_rifle_g3a3: hlc_rifle_g3sg1 {
    displayName = "HK G3A3";
    class WeaponSlotsInfo;
};
class hlc_rifle_g3a3ris: hlc_rifle_g3a3 {
    displayName = "HK G3A3 (RIS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98.9;
    };
};
class hlc_rifle_g3a3v: hlc_rifle_g3a3 {
    displayName = "HK G3A3 (Widegrip)";
};
class hlc_rifle_g3a3vris: hlc_rifle_g3a3 {
    displayName = "HK G3A3 (Widegrip/RIS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98.9;
    };
};
class hlc_rifle_g3ka4: hlc_rifle_g3a3 {
    displayName = "HK G3KA4 (RAS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.9;
        class CharmSlot {};
    };
};
class HLC_Rifle_g3ka4_GL: hlc_rifle_g3ka4 {
    displayName = "HK G3KA4 (RAS/GL)";
    class WeaponSlotsInfo {
        mass = 129.9;
        class PointerSlot: asdg_FrontSideRail {};
    };
};

class hlc_rifle_hk53: hlc_g3_base {
    displayName = "HK53";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: UK3CB_OpticRail1913_G3 {};
    };
};
class hlc_rifle_hk53RAS : hlc_rifle_hk53 {
    displayName = "HK53 (RAS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72;
    };
};
class hlc_rifle_hk33a2: hlc_g3_base {
    displayName = "HK33A2";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: UK3CB_OpticRail1913_G3 {};
    };
};
class hlc_rifle_hk33a2RIS: hlc_rifle_hk33a2 {
    displayName = "HK33A2 (RIS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85.5;
        class CharmSlot {};
    };
};
class hlc_rifle_hk33a2RIS_GL: hlc_rifle_hk33a2RIS {
    displayName = "HK33A2 (RIS/GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 118.5;
        class GripodSlot {};
        class UnderBarrelSlot {};
    };
};
class hlc_rifle_hk33ka3: hlc_rifle_hk33a2 {
    displayName = "HK33KA3";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};
