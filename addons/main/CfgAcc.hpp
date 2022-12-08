class asdg_SlotInfo;

class UnderBarrelSlot;
class UnderBarrelSlot_rail: UnderBarrelSlot {
    class compatibleItems {
        hlc_isopod = 1;
        hlc_bipod_utgshooters = 1;
    };
};
class nia_rifle_grips_slot: UnderBarrelSlot {
    displayName = "Gripod slot";
    class compatibleItems {
        hlc_grip_AFG = 1;
        hlc_grip_AFG2 = 1;
        hlc_grip_PMVFG = 1;
        hlc_grip_PMVFG_Black = 1;
        hlc_grip_PMVFG_Tan = 1;
        HLC_bipod_UTGShooters = 1;
    };
};

class WB_rifle_grips_slot: asdg_SlotInfo {
    iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
    iconPinpoint = "Bottom";
    linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
    class compatibleItems {
        hlc_grip_AFG = 1;
        hlc_grip_AFG2 = 1;
        hlc_grip_PMVFG = 1;
        hlc_grip_PMVFG_Black = 1;
        hlc_grip_PMVFG_Tan = 1;
        hlc_grip_saw_grip1 = 1;
        hlc_grip_saw_grip2 = 1;
    };
};

class rhs_rifle_gripod_slot: UnderBarrelSlot {
    class compatibleItems {
        hlc_grip_AFG = 1;
        hlc_grip_AFG2 = 1;
        hlc_grip_PMVFG = 1;
        hlc_grip_PMVFG_Black = 1;
        hlc_grip_PMVFG_Tan = 1;
    };
};

class rhs_western_rifle_gripod_slot : rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        HLC_bipod_UTGShooters = 1;
        HLC_ISOPOD = 1;
        hlc_grip_saw_grip1 = 1;
        hlc_grip_saw_grip2 = 1;
    };
};

class rhs_western_mg_gripod_slot: rhs_western_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        hlc_grip_saw_grip1 = 1;
        hlc_grip_saw_grip2 = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        hlc_optic_docterr = 1;
        hlc_optic_hensoldtzo_lo = 1;
        hlc_optic_hensoldtzo_lo_2d = 1;
        hlc_optic_hensoldtzo_lo_docter = 1;
        hlc_optic_hensoldtzo_lo_docter_2d = 1;
        hlc_optic_hensoldtzo_hi = 1;
        hlc_optic_hensoldtzo_hi_2d = 1;
        hlc_optic_hensoldtzo_hi_docter = 1;
        hlc_optic_hensoldtzo_hi_docter_2d = 1;
        hlc_optic_zf95base = 1;
        hlc_optic_leupoldm3a = 1;
        hlc_optic_atacr = 1;
        hlc_optic_atacr_offset = 1;
        hlc_optic_vomz3d = 1;
        hlc_optic_vomz = 1;
    };
};

class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems;
};

class UK3CB_OpticRail1913_FNFAL: asdg_OpticRail {
    class compatibleItems {
        hlc_optic_pvs4fal = 1;
        hlc_optic_suit = 1;
    };
};
class UK3CB_OpticRail1913_G3: asdg_OpticRail {
    class compatibleItems {
        hlc_optic_pvs4g3 = 1;
        hlc_optic_stanagzf_g3 = 1;
        hlc_optic_stanagzf2d_g3 = 1;
        hlc_optic_zf95_g3 = 1;
        hlc_optic_leupoldm3a_g3 = 1;
        hlc_optic_accupoint_g3 = 1;
        hlc_optic_zfsg1 = 1;
    };
};
class UK3CB_OpticRail1913_M14: asdg_OpticRail {
    class compatibleItems {
        hlc_optic_pvs4m14 = 1;
        hlc_optic_lrt_m14 = 1;
        hlc_optic_artel_m14 = 1;
    };
};

class asdg_OpticRail1913;
class UK3CB_OpticRail1913_STGW57: asdg_OpticRail1913 {
    class compatibleItems {
        hlc_optic_kern = 1;
        hlc_optic_kern2d = 1;
    };
};

class asdg_OpticRailL1A1: asdg_OpticRail {
    class compatibleItems: compatibleItems {
        hlc_optic_pvs4fal = 1;
        hlc_optic_suit = 1;
    };
};

class asdg_OpticSideRail_SVD;
class rhs_russian_svd_scopes_slot: asdg_OpticSideRail_SVD {
    class compatibleItems {
        hlc_optic_pso1 = 1;
        hlc_optic_goshawk = 1;
    };
};

class asdg_MuzzleSlot: asdg_SlotInfo {
    class compatibleItems;
};
class UK3CB_MuzzleSlot_556_HK33: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_556nato_m42000 = 1;
        hlc_muzzle_snds_rotex3p = 1;
        hlc_muzzle_556nato_rotexiiic_grey = 1;
        hlc_muzzle_556nato_rotexiiic_tan = 1;
        hlc_muzzle_gunfighter_comp = 1;
        hlc_muzzle_556nato_kac = 1;
        hlc_muzzle_kx3_comp = 1;
        hlc_muzzle_sf3p_556 = 1;
        hlc_muzzle_oemdevice_556 = 1;
    };
};

class UK3CB_MuzzleSlot_762_G3: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_rotex3p = 1;
        hlc_muzzle_gunfighter_comp = 1;
        hlc_muzzle_mag58_brake = 1;
        hlc_muzzle_kx3_comp = 1;
        hlc_muzzle_300blk_kac = 1;
        hlc_muzzle_sf3p_762r = 1;
        hlc_muzzle_aac_762sdn6 = 1;
        hlc_muzzle_miter18t = 1;
        hlc_muzzle_aac_scarh = 1;
        hlc_muzzle_brevis = 1;
        hlc_muzzle_17sbrake = 1;
        hlc_muzzle_oemdevice = 1;
        hlc_muzzle_fsc30 = 1;
        hlc_muzzle_cherrybomb = 1;
        hlc_muzzle_thunderchicken = 1;
    };
};

class UK3CB_MuzzleSlot_762_M14: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_rotex3p = 1;
        hlc_muzzle_gunfighter_comp = 1;
        hlc_muzzle_mag58_brake = 1;
        hlc_muzzle_kx3_comp = 1;
        hlc_muzzle_300blk_kac = 1;
        hlc_muzzle_sf3p_762r = 1;
        hlc_muzzle_aac_762sdn6 = 1;
        hlc_muzzle_miter18t = 1;
        hlc_muzzle_aac_scarh = 1;
        hlc_muzzle_brevis = 1;
        hlc_muzzle_17sbrake = 1;
        hlc_muzzle_oemdevice = 1;
        hlc_muzzle_fsc30 = 1;
        hlc_muzzle_cherrybomb = 1;
        hlc_muzzle_thunderchicken = 1;
    };
};

class asdg_MuzzleSlot_900_3CB: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_agendasix = 1;
    };
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_agendasix = 1;
    };
};

class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_agendasix10mm = 1;
    };
};

class MuzzleSlot;
class MuzzleSlot_545R: MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_arsenalcomp = 1;
        hlc_muzzle_545sup_ak = 1;
        hlc_muzzle_sf3p_762r = 1;
    };
};

class MuzzleSlot_556: MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_556nato_m42000 = 1;
        hlc_muzzle_snds_rotex3p = 1;
        hlc_muzzle_556nato_rotexiiic_grey = 1;
        hlc_muzzle_556nato_rotexiiic_tan = 1;
        hlc_muzzle_gunfighter_comp = 1;
        hlc_muzzle_556nato_kac = 1;
        hlc_muzzle_kx3_comp = 1;
        hlc_muzzle_sf3p_556 = 1;
        hlc_muzzle_oemdevice_556 = 1;
    };
};

class MuzzleSlot_762: MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_rotex3p = 1;
        hlc_muzzle_gunfighter_comp = 1;
        hlc_muzzle_mag58_brake = 1;
        hlc_muzzle_kx3_comp = 1;
        hlc_muzzle_300blk_kac = 1;
        hlc_muzzle_sf3p_762r = 1;
        hlc_muzzle_aac_762sdn6 = 1;
        hlc_muzzle_miter18t = 1;
        hlc_muzzle_aac_scarh = 1;
        hlc_muzzle_brevis = 1;
        hlc_muzzle_17sbrake = 1;
        hlc_muzzle_oemdevice = 1;
        hlc_muzzle_fsc30 = 1;
        hlc_muzzle_cherrybomb = 1;
        hlc_muzzle_thunderchicken = 1;
    };
};

class MuzzleSlot_762R: MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_arsenalcomp = 1;
        hlc_muzzle_762sup_ak = 1;
        hlc_muzzle_sf3p_762 = 1;
    };
};
