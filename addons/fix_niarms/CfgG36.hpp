class hlc_G36_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_G36A1: hlc_G36_base {
    displayName = "HK G36A1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};
class hlc_rifle_G36A1AG36: hlc_rifle_G36A1 {
    displayName = "HK G36A1 (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 113;
    };
};
class hlc_rifle_G36E1: hlc_rifle_G36A1 {
    displayName = "HK G36E";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79;
    };
};
class hlc_rifle_G36E1AG36: hlc_rifle_G36A1AG36 {
    displayName = "HK G36E (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 112;
    };
};
class hlc_rifle_G36E1AG36_Romi: hlc_rifle_G36E1AG36 {
    displayName = "HK G36E 'Romi' (GL)";
};
class hlc_rifle_G36KA1: hlc_rifle_G36A1 {
    displayName = "HK G36KA1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72.1;
    };
};
class hlc_rifle_G36KE1: hlc_rifle_G36KA1 {
    displayName = "HK G36KE";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 71.4;
    };
};
class hlc_rifle_G36C: hlc_G36_base {
    displayName = "HK G36C";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65.7;
    };
};
class hlc_rifle_G36V: hlc_G36_base {
    displayName = "HK G36V";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};
class hlc_rifle_G36CV: hlc_rifle_G36V {
    displayName = "HK G36CV";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65.7;
    };
};
class hlc_rifle_G36CTac: hlc_rifle_G36CV {
    displayName = "HK G36CV (TAC)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 67.7;
    };
};
class hlc_rifle_G36TAC: hlc_rifle_G36V {
    displayName = "HK G36V (TAC)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82;
    };
};
class hlc_rifle_G36VAG36: hlc_rifle_G36V {
    displayName = "HK G36V (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 113;
    };
};
class hlc_rifle_G36KV: hlc_rifle_G36V {
    displayName = "HK G36KV";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72.1;
    };
};
class hlc_rifle_G36KA1KSK: hlc_rifle_G36KV {
    displayName = "HK G36K-KSK";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 74.6;
    };
};
class HLC_Rifle_G36KSKAG36: hlc_rifle_G36KA1KSK {
    baseWeapon = "HLC_Rifle_G36KSKAG36";
    displayName = "HK G36K-KSK (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 107.6;
        class GripodSlot {};
    };
};
class hlc_rifle_g36KTac: hlc_rifle_G36KV {
    displayName = "HK G36KV (TAC)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 74.1;
    };
};
class hlc_rifle_G36MLIC: hlc_G36_base {
    displayName = "HK G36-MLI(C)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84.2;
    };
};
class hlc_rifle_G36KMLIC: hlc_rifle_G36MLIC {
    displayName = "HK G36K-MLI(C)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.5;
    };
};
class hlc_rifle_G36CMLIC: hlc_rifle_G36MLIC {
    displayName = "HK G36C-MLI(C)";
};
class hlc_rifle_G36MLIAG36: hlc_rifle_G36MLIC {
    displayName = "HK G36-MLI(C) (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 117.2;
    };
};
class hlc_rifle_MG36: hlc_G36_base {
    displayName = "HK MG36";
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84;
    };
};
