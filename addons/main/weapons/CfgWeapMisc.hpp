class InventoryOpticsItem_Base_F;
class bipod_01_F_snd;
class hlc_optic_PVS4base;

class hlc_STGW_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_STGW57: hlc_STGW_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 125.6;
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

class hlc_FN3011_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_FN3011Tactical: hlc_FN3011_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913_long {};
    };
};

class hlc_Springfield_base;
class hlc_rifle_M1903A1: hlc_Springfield_base {
    displayName = "M1903A1 Springfield";
};
class hlc_rifle_M1903A1OMR: hlc_rifle_M1903A1 {
    displayName = "M1903A1 Springfield ""Guthrie""";
};
class hlc_rifle_M1903A1_unertl: hlc_Springfield_base {
    displayName = "M1903A1 Springfield (Sniper)";
};

class hlc_grip_saw_grip1: bipod_01_F_snd {
    inertia = -0.2;
    displayName = "SAW Pistol Grip (Black)";
    rhs_grip_type = "rhs_grip2_change";
    weaponInfoType = "RHS_Gripod4";
};
class hlc_grip_saw_grip2: hlc_grip_saw_grip1 {
    inertia = -0.2;
    displayName = "SAW Pistol Grip (Tan)";
    picture = "\a3\Weapons_F_Mark\Data\UI\icon_bipod_01_F_snd_ca.paa";
    rhs_grip_type = "rhs_grip2_change";
    weaponInfoType = "RHS_Gripod4";
};

class HLC_bipod_UTGShooters: bipod_01_F_snd {
    picture = "\a3\Weapons_F_Mark\Data\UI\icon_bipod_01_F_blk_ca.paa";
};
class hlc_grip_AFG2: HLC_bipod_UTGShooters {
    inertia = -0.2;
    rhs_grip_type = "rhs_grip2_change";
    weaponInfoType = "RHS_Gripod2";
};
class hlc_grip_PMVFG: HLC_bipod_UTGShooters {
    inertia = -0.2;
    rhs_grip_type = "rhs_grip3_change";
    weaponInfoType = "RHS_Gripod3";
};

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
class hlc_optic_ZF95Base: optic_lrps {
    class ItemInfo: ItemInfo {
        class OpticsModes {
            class Snip {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class hlc_optic_ATACR_Offset: hlc_optic_ZF95Base {
    class ItemInfo: ItemInfo {
        class OpticsModes {
            class Snip {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class optic_dms;
class hlc_optic_VOMZ: optic_dms {
    ACE_ScopeAdjust_Vertical[] = {0,0};
    ACE_ScopeAdjust_Horizontal[] = {0,0};
    ACE_ScopeAdjust_VerticalIncrement = 0;
    ACE_ScopeAdjust_HorizontalIncrement = 0;
};

class HLC_Optic_ZFSG1: optic_dms {
    class ItemInfo: InventoryOpticsItem_Base_F {
        class OpticsModes {
            class Snip {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};
class hlc_optic_accupoint_g3: HLC_Optic_ZFSG1 {
    class ItemInfo: InventoryOpticsItem_Base_F {
        class OpticsModes {
            class Snip {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class optic_hamr;
class hlc_optic_angschutz: optic_hamr {
    ACE_ScopeAdjust_Vertical[] = {0,0};
    ACE_ScopeAdjust_Horizontal[] = {0,0};
    ACE_ScopeAdjust_VerticalIncrement = 0;
    ACE_ScopeAdjust_HorizontalIncrement = 0;
};
