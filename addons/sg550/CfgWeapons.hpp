class CfgWeapons {
    class Rifle_Base_F;
    class hlc_sg550_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class hlc_rifle_SG550: hlc_sg550_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 90;
        };
    };
    class hlc_rifle_SG550_GL: hlc_rifle_SG550 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 123;
        };
    };
    class hlc_rifle_SG550_TAC: hlc_rifle_SG550 {
        class WeaponSlotsInfo {
            mass = 94;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };
    class hlc_rifle_SG550_TAC_GL: hlc_rifle_SG550 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };

    class hlc_rifle_SG551SB: hlc_sg550_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
    };
    class hlc_rifle_SG551SB_RIS: hlc_rifle_SG551SB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82;
        };
    };
    class hlc_rifle_SG551SB_TAC: hlc_rifle_SG551SB {
        class WeaponSlotsInfo {
            mass = 84;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };
    class hlc_rifle_SG551SB_TAC_GL: hlc_rifle_SG551SB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 117;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };
    class hlc_rifle_SG551LB: hlc_rifle_SG551SB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 83;
        };
    };
    class hlc_rifle_SG551LB_RIS: hlc_rifle_SG551LB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 85;
        };
    };
    class hlc_rifle_SG551LB_TAC: hlc_rifle_SG551LB {
        class WeaponSlotsInfo {
            mass = 87;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };
    class hlc_rifle_SG551LB_TAC_GL: hlc_rifle_SG551LB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 120;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };

    class hlc_rifle_SG553LB: hlc_rifle_SG551SB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 67.5;
        };
    };
    class hlc_rifle_SG553LB_RIS: hlc_rifle_SG553LB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 69.5;
        };
    };
    class hlc_rifle_SG553LB_TAC: hlc_rifle_SG553LB {
        class WeaponSlotsInfo {
            mass = 71.5;
        };
    };

    class hlc_rifle_SG553SB: hlc_sg550_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 64.5;
        };
    };
    class hlc_rifle_SG553SB_RIS: hlc_rifle_SG553SB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 66.5;
        };
    };
    class hlc_rifle_SG553SB_TAC: hlc_rifle_SG553SB {
        class WeaponSlotsInfo {
            mass = 68.5;
        };
    };

    class hlc_rifle_sg553RSB: hlc_rifle_SG553SB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 67.5;
        };
    };
    class hlc_rifle_sg553RSB_TAC: hlc_rifle_sg553RSB {
        class WeaponSlotsInfo {
            mass = 69.5;
        };
    };
    class hlc_rifle_sg553RLB: hlc_rifle_sg553RSB {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 70.5;
        };
    };
    class hlc_rifle_sg553RLB_TAC: hlc_rifle_sg553RLB {
        class WeaponSlotsInfo {
            mass = 72.5;
        };
    };

    class hlc_rifle_SG550Sniper: hlc_sg550_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 155;
        };
    };
    class hlc_rifle_SG550Sniper_RIS: hlc_rifle_SG550Sniper {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 157;
        };
    };

    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class muzzle_snds_H: ItemCore {
        class ItemInfo: InventoryMuzzleItem_Base_F {
            class AmmoCoef;
        };
    };
    class hlc_muzzle_snds_ROTEX3P: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class AmmoCoef: AmmoCoef {
                audibleFire = 1;
                visibleFire = 0.5;
            };
        };
    };
};
