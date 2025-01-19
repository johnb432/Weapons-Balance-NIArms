class CfgWeapons {
    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class muzzle_snds_H: ItemCore {
        class ItemInfo: InventoryMuzzleItem_Base_F {
            class AmmoCoef;
        };
    };
    class hlc_muzzle_snds_ArsenalComp: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class AmmoCoef: AmmoCoef {
                audibleFire = 1;
                visibleFire = 0.5;
            };
        };
    };
};
