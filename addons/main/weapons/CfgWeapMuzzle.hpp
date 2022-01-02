class InventoryMuzzleItem_Base_F;
class muzzle_snds_H: ItemCore {
    class ItemInfo: InventoryMuzzleItem_Base_F {
        class AmmoCoef {};
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
class hlc_muzzle_Gunfighter_comp: muzzle_snds_H {
    class ItemInfo: ItemInfo {
        class AmmoCoef: AmmoCoef {
            audibleFire = 1;
            visibleFire = 0.5;
        };
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
class hlc_muzzle_SF3P_556: muzzle_snds_H {
    class ItemInfo: ItemInfo {
        class AmmoCoef: AmmoCoef {
            audibleFire = 1;
            visibleFire = 0.5;
        };
    };
};
class hlc_muzzle_SF3P_68: muzzle_snds_H {
    class ItemInfo: ItemInfo {
        class AmmoCoef: AmmoCoef {
            audibleFire = 1;
            visibleFire = 0.5;
        };
    };
};
class hlc_muzzle_SF3P_762: muzzle_snds_H {
    class ItemInfo: ItemInfo {
        class AmmoCoef: AmmoCoef {
            audibleFire = 1;
            visibleFire = 0.5;
        };
    };
};

class muzzle_snds_M: muzzle_snds_H {
    class ItemInfo: ItemInfo {
        class AmmoCoef {}
    };
};
class hlc_muzzle_KX3_comp: muzzle_snds_M {
    class ItemInfo: ItemInfo {
        class AmmoCoef: AmmoCoef {
            audibleFire = 1;
            visibleFire = 0.5;
        };
    };
};
class hlc_muzzle_MAG58_Brake: muzzle_snds_M {
    class ItemInfo: ItemInfo {
        class AmmoCoef: AmmoCoef {
            audibleFire = 1;
            visibleFire = 0.5;
        };
    };
};
