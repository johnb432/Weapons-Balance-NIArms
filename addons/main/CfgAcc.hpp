class asdg_SlotInfo;

class UnderBarrelSlot;
class UnderBarrelSlot_rail: UnderBarrelSlot {
    class compatibleItems {
        HLC_ISOPOD = 1;
        HLC_bipod_UTGShooters = 1;
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

class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        HLC_bipod_UTGShooters = 1;
        HLC_ISOPOD = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        HLC_optic_DocterR = 1;
        hlc_optic_HensoldtZO_Lo = 1;
        hlc_optic_HensoldtZO_Lo_2D = 1;
        hlc_optic_HensoldtZO_lo_Docter = 1;
        hlc_optic_HensoldtZO_lo_Docter_2D = 1;
        hlc_optic_HensoldtZO_Hi = 1;
        hlc_optic_HensoldtZO_Hi_2D = 1;
        hlc_optic_HensoldtZO_Hi_Docter = 1;
        hlc_optic_HensoldtZO_Hi_Docter_2D = 1;
        hlc_optic_ZF95Base = 1;
        hlc_optic_LeupoldM3A = 1;
        hlc_optic_ATACR = 1;
        hlc_optic_ATACR_Offset = 1;
        hlc_optic_VOMZ3d = 1;
        hlc_optic_VOMZ = 1;
    };
};

class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems;
};

class asdg_MuzzleSlot_556;
class UK3CB_MuzzleSlot_556_HK33: asdg_MuzzleSlot_556 {
    class compatibleItems {
        hlc_muzzle_556nato_m42000 = 1;
        hlc_muzzle_556NATO_rotexiiic_grey = 1;
        hlc_muzzle_556NATO_rotexiiic_tan = 1;
        hlc_muzzle_556NATO_KAC = 1;
        hlc_muzzle_KX3_comp = 1;
        hlc_muzzle_OEMDevice_556 = 1;
    };
};

class asdg_MuzzleSlot_762;
class UK3CB_MuzzleSlot_762_G3: asdg_MuzzleSlot_762 {
    class compatibleItems {
        hlc_muzzle_MAG58_Brake = 1;
        hlc_muzzle_KX3_comp = 1;
        hlc_muzzle_300blk_KAC = 1;
        hlc_muzzle_AAC_762SDN6 = 1;
        hlc_muzzle_Miter18T = 1;
        hlc_muzzle_AAC_SCARH = 1;
        hlc_muzzle_Brevis = 1;
        hlc_muzzle_17SBrake = 1;
        hlc_muzzle_OEMDevice = 1;
        hlc_muzzle_FSC30 = 1;
        hlc_muzzle_Cherrybomb = 1;
        hlc_muzzle_ThunderChicken = 1;
    };
};
class UK3CB_MuzzleSlot_762_M14: asdg_MuzzleSlot_762 {
    class compatibleItems {
        hlc_muzzle_MAG58_Brake = 1;
        hlc_muzzle_KX3_comp = 1;
        hlc_muzzle_300blk_KAC = 1;
        hlc_muzzle_AAC_762SDN6 = 1;
        hlc_muzzle_Miter18T = 1;
        hlc_muzzle_AAC_SCARH = 1;
        hlc_muzzle_Brevis = 1;
        hlc_muzzle_17SBrake = 1;
        hlc_muzzle_OEMDevice = 1;
        hlc_muzzle_FSC30 = 1;
        hlc_muzzle_Cherrybomb = 1;
        hlc_muzzle_ThunderChicken = 1;
    };
};

class MuzzleSlot;
class MuzzleSlot_556: MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_556nato_m42000 = 1;
        hlc_muzzle_556NATO_rotexiiic_grey = 1;
        hlc_muzzle_556NATO_rotexiiic_tan = 1;
        hlc_muzzle_556NATO_KAC = 1;
        hlc_muzzle_KX3_comp = 1;
        hlc_muzzle_OEMDevice_556 = 1;
    };
};
class MuzzleSlot_762: MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_MAG58_Brake = 1;
        hlc_muzzle_KX3_comp = 1;
        hlc_muzzle_300blk_KAC = 1;
        hlc_muzzle_AAC_762SDN6 = 1;
        hlc_muzzle_Miter18T = 1;
        hlc_muzzle_AAC_SCARH = 1;
        hlc_muzzle_Brevis = 1;
        hlc_muzzle_17SBrake = 1;
        hlc_muzzle_OEMDevice = 1;
        hlc_muzzle_FSC30 = 1;
        hlc_muzzle_Cherrybomb = 1;
        hlc_muzzle_ThunderChicken = 1;
    };
};
