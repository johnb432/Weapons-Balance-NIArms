class CfgWeapons {
    class Rifle_Base_F;
    class hlc_ar15_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class hlc_rifle_Bushmaster300: hlc_ar15_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 78.6;
        };
    };
    class hlc_rifle_honeybase: hlc_rifle_Bushmaster300 {
        class WeaponSlotsInfo {
            mass = 61;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };
    class hlc_rifle_vendimus: hlc_rifle_Bushmaster300 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77;
        };
    };

    class hlc_rifle_SAMR: hlc_ar15_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87;
        };
    };
    class hlc_rifle_samr2: hlc_rifle_SAMR {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87;
        };
    };

    class hlc_rifle_bcmjack: hlc_ar15_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 71;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };
    class hlc_rifle_bcmblackjack: hlc_rifle_bcmjack {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 71;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };

    class hlc_rifle_M4: hlc_ar15_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 63.8;
        };
    };
    class hlc_rifle_M4a1carryhandle: hlc_rifle_M4 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 63.8;
        };
    };
    class hlc_rifle_m4m203: hlc_rifle_M4 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 96.8;
        };
    };
    class hlc_rifle_RU556: hlc_ar15_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57;
        };
    };
    class hlc_rifle_RU5562: hlc_rifle_RU556 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57;
        };
    };
    class hlc_rifle_CQBR: hlc_rifle_RU556 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 60;
        };
    };
    class hlc_rifle_mk18mod0: hlc_rifle_CQBR {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 60;
        };
    };


    class hlc_M16Base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class hlc_wp_M16A1: hlc_M16Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.5;
        };
    };
    class hlc_rifle_M16A1_m203: hlc_wp_M16A1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 101.5;
        };
    };

    class hlc_wp_m16a2: hlc_M16Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77;
        };
    };
    class hlc_rifle_m203: hlc_wp_m16a2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };
    class hlc_wp_m16a2_Early_M203: hlc_wp_m16a2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };
    class hlc_wp_mod727: hlc_M16Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 59;
        };
    };
    class hlc_wp_mod727_M203: hlc_wp_mod727 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 92;
        };
    };
    class hlc_wp_mod727_SF: hlc_wp_mod727 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 59;
        };
    };

    class hlc_wp_XM177E2: hlc_M16Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 65;
        };
    };
    class hlc_wp_XM177E2_M203: hlc_wp_XM177E2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 98;
        };
    };
    class hlc_wp_mod653: hlc_wp_XM177E2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 59;
        };
    };
    class hlc_wp_mod723: hlc_wp_mod653 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 59;
        };
    };
    class hlc_wp_mod723_delta: hlc_wp_mod723 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 59;
        };
    };
    class hlc_wp_mod733: hlc_wp_mod653 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57;
        };
    };
    class hlc_wp_mod733_Late: hlc_wp_mod733 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57;
        };
    };

    class hlc_wp_M4: hlc_M16Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 73;
        };
    };
    class hlc_wp_M4_M203: hlc_wp_M4 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 106;
        };
    };

    class hlc_wp_C7: hlc_wp_m16a2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 73;
        };
    };
    class HLC_wp_C7_M203: hlc_wp_C7 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 106;
        };
    };

    class hlc_wp_C8: hlc_wp_mod723 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 59;
        };
    };
    class hlc_wp_C8_M203: hlc_wp_C8 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 92;
        };
    };

    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class muzzle_snds_H: ItemCore {
        class ItemInfo: InventoryMuzzleItem_Base_F {
            class AmmoCoef;
        };
    };
    class hlc_muzzle_Gunfighter_comp: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class AmmoCoef: AmmoCoef {
                audibleFire = 1;
                visibleFire = 0.5;
            };
        };
    };
    class muzzle_snds_M: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class AmmoCoef;
        };
    };
    class hlc_muzzle_E1_FlashHider: muzzle_snds_M {
        class ItemInfo: ItemInfo {
            class AmmoCoef: AmmoCoef {
                audibleFire = 1;
                visibleFire = 0.5;
            };
        };
    };
};
