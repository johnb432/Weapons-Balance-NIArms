class InventoryOpticsItem_Base_F;
class hlc_optic_PVS4base;
class hlc_optic_PVS4FAL: hlc_optic_PVS4base {
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 36;
    };
};
class hlc_optic_PVS4G3: hlc_optic_PVS4base {
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 36;
    };
};
class hlc_optic_PVS4M14: hlc_optic_PVS4base {
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 36;
    };
};

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

class optic_dms;
class HLC_Optic_ZFSG1: optic_dms {
    class ItemInfo: InventoryOpticsItem_Base_F {
        class OpticsModes {
            class Snip {
                discreteDistance[] = {300};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};
class hlc_optic_accupoint_g3: HLC_Optic_ZFSG1 {
    class ItemInfo: InventoryOpticsItem_Base_F {
        class OpticsModes {
            class Snip {
                discreteDistance[] = {300};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class optic_hamr;
class hlc_optic_ANGSCHUTZ: optic_hamr {
    ACE_ScopeAdjust_Vertical[] = {0,0};
    ACE_ScopeAdjust_Horizontal[] = {0,0};
};
