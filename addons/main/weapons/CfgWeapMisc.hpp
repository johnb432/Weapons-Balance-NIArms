class hlc_STGW_base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class hlc_rifle_STGW57: hlc_STGW_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 125.6;
        delete CowsSlot;
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

class sp_fwa_sig510_base;
class sp_fwa_sig510: sp_fwa_sig510_base {
    displayName = "SIG 510";
    magazineWell[] += {"CBA_75x55_STGW57"};
    class WeaponSlotsInfo {
        mass = 125.6;
    };
};

class hlc_FN3011_base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class hlc_rifle_FN3011Tactical: hlc_FN3011_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Charmslot {};
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

class bipod_01_F_snd;
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
