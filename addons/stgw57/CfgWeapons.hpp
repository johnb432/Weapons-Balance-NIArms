class CfgWeapons {
    class Rifle_Base_F;
    class hlc_STGW_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class hlc_rifle_STGW57: hlc_STGW_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 125.6;
            class CowsSlot: UK3CB_OpticRail1913_STGW57 {};
        };
    };
    class hlc_rifle_stgw57_RIS: hlc_STGW_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 127.6;
        };
    };
    class hlc_rifle_stgw57_commando: hlc_rifle_stgw57_RIS {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };
    class hlc_rifle_sig5104: hlc_STGW_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 96.3;
        };
    };
    class hlc_rifle_amt: hlc_rifle_sig5104 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 90;
        };
    };
};
