class InventoryOpticsItem_Base_F;
class optic_lrps: ItemCore {
    class ItemInfo: InventoryOpticsItem_Base_F {};
};
class hlc_optic_VOMZ: optic_lrps {
    ACE_ScopeAdjust_Vertical[] = {0,0};
    ACE_ScopeAdjust_Horizontal[] = {0,0};
};
class hlc_optic_ZF95Base: optic_lrps {
    class ItemInfo: ItemInfo {
        class OpticsModes {
            class Snip {
                discreteDistance[] = {300};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};
class hlc_optic_leupoldm3a: optic_lrps {
    class ItemInfo: ItemInfo {
        class OpticsModes {
            class Snip {
                discreteDistance[] = {300};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class hlc_optic_ATACR_Offset: ItemCore {
    class ItemInfo: InventoryOpticsItem_Base_F {
        class OpticsModes {
            class ATACR {
                discreteDistance[] = {300};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};
