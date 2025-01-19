#pragma hemtt flag pe23_ignore_has_include

class bipod_01_F_snd;
class HLC_bipod_UTGShooters: bipod_01_F_snd {
    picture = "\a3\Weapons_F_Mark\Data\UI\icon_bipod_01_F_blk_ca.paa";
};
class hlc_grip_AFG: HLC_bipod_UTGShooters {
    inertia = -0.2;

    #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
        NIA_grip_type = "";
        rhs_grip_type = "rhs_grip2_change";
        weaponInfoType = "RHS_Gripod2";
    #endif
};
class hlc_grip_AFG2: HLC_bipod_UTGShooters {
    inertia = -0.2;

    #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
        NIA_grip_type = "";
        rhs_grip_type = "rhs_grip2_change";
        weaponInfoType = "RHS_Gripod2";
    #endif
};
class hlc_grip_PMVFG: HLC_bipod_UTGShooters {
    inertia = -0.2;

    #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
        NIA_grip_type = "";
        rhs_grip_type = "rhs_grip3_change";
        weaponInfoType = "RHS_Gripod3";
    #endif
};
