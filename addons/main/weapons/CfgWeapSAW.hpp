class hlc_saw_base: Rifle_Base_F {
    class WeaponSlotsInfo;
    ace_overheating_closedBolt = 0;
};
class hlc_lmg_minimipara: hlc_saw_base {
    magazineWell[] += {"CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 155.5;
    };
    MAG_SWITCH("hlc_lmg_minimipara_30Rnd");
};
class hlc_lmg_minimipara_railed: hlc_lmg_minimipara {
    displayName = "FN Minimi Para (Short/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 157.5;
    };
    MAG_SWITCH("hlc_lmg_minimipara_railed_30Rnd");
};
class hlc_lmg_minimi: hlc_lmg_minimipara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 164;
    };
    MAG_SWITCH("hlc_lmg_minimi_30Rnd");
};
class hlc_lmg_minimi_railed: hlc_lmg_minimipara {
    displayName = "FN Minimi (Long/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 166;
    };
    MAG_SWITCH("hlc_lmg_minimi_railed_30Rnd");
};
class hlc_lmg_minimipara_long: hlc_lmg_minimipara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 160.5;
    };
    MAG_SWITCH("hlc_lmg_minimipara_long_30Rnd");
};
class hlc_lmg_minimipara_long_railed: hlc_lmg_minimipara {
    displayName = "FN Minimi Para (Long/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 162.5;
    };
    MAG_SWITCH("hlc_lmg_minimipara_long_railed_30Rnd");
};

class hlc_lmg_M249E1: hlc_lmg_minimipara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 165;
    };
    MAG_SWITCH("hlc_lmg_M249E1_30Rnd");
};
class hlc_lmg_M249E2: hlc_lmg_minimipara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 166;
    };
    MAG_SWITCH("hlc_lmg_M249E2_30Rnd");
};
class hlc_lmg_m249para: hlc_lmg_minimipara {
    displayName = "M249E2 (Short/Para)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 157.5;
    };
    MAG_SWITCH("hlc_lmg_m249para_30Rnd");
};
class hlc_m249_pip1: hlc_lmg_minimi_railed {
    displayName = "M249 PIP (Long/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 168;
    };
    MAG_SWITCH("hlc_m249_pip1_30Rnd");
};
class hlc_m249_pip2: hlc_lmg_minimi_railed {
    displayName = "M249E2 (Short/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 163.5;
    };
    MAG_SWITCH("hlc_m249_pip2_30Rnd");
};
class hlc_m249_pip3: hlc_lmg_minimi_railed {
    displayName = "M249 PIP (Short/Savit/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 160.5;
    };
    MAG_SWITCH("hlc_m249_pip3_30Rnd");
};
class hlc_m249_pip4: hlc_lmg_minimi_railed {
    displayName = "M249 PIP (Long/Savit)";
    class WeaponSlotsInfo {
        mass = 167.5;
    };
    MAG_SWITCH("hlc_m249_pip4_30Rnd");
};
class hlc_m249_pip4_grip: hlc_m249_pip4 {
    MAG_SWITCH("hlc_m249_pip4_30Rnd_grip");
};
class hlc_m249_pip4_grip2: hlc_m249_pip4 {
    MAG_SWITCH("hlc_m249_pip4_30Rnd_grip2");
};
class hlc_m249_pip4_grip3: hlc_m249_pip4 {
    MAG_SWITCH("hlc_m249_pip4_30Rnd_grip3");
};

class hlc_m249_SQuantoon: hlc_m249_pip4 {
    displayName = "M249 PIP (Long/Savit/'Squantoon')";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 167.5;
    };
    MAG_SWITCH("hlc_m249_SQuantoon_30Rnd");
};
class hlc_m249_SQuantoon_grip: hlc_m249_SQuantoon {
    MAG_SWITCH("hlc_m249_SQuantoon_30Rnd_grip");
};
class hlc_m249_SQuantoon_grip2: hlc_m249_SQuantoon {
    MAG_SWITCH("hlc_m249_SQuantoon_30Rnd_grip2");
};
class hlc_m249_SQuantoon_grip3: hlc_m249_SQuantoon {
    MAG_SWITCH("hlc_m249_SQuantoon_30Rnd_grip3");
};

class hlc_lmg_mk46: hlc_lmg_minimi_railed {
    ACE_barrelTwist = 177.8;
    class FullAuto: FullAuto {
      dispersion = 0.0009;
    };
    class WeaponSlotsInfo {
        mass = 154.4;
        class CowsSlot: asdg_OpticRail1913_long {};
        class GripodSlot: nia_rifle_gripod_slot {};
        class UnderBarrelSlot: WB_rifle_grips_slot {};
    };
};
class hlc_lmg_mk46mod1: hlc_lmg_mk46 {
    ACE_barrelTwist = 177.8;
    class FullAuto: FullAuto {
      dispersion = 0.0009;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 152.4;
        class CowsSlot: asdg_OpticRail1913 {};
        class GripodSlot: nia_rifle_gripod_slot {};
        class UnderBarrelSlot: WB_rifle_grips_slot {};
    };
};

class hlc_lmg_mk48: hlc_saw_base {
    ACE_barrelLength = 502;
    class WeaponSlotsInfo {
        mass = 182.6;
        class CowsSlot: asdg_OpticRail1913_long {};
    };
    class FullAuto: FullAuto
    {
      dispersion = 0.0009;
    };
};
class hlc_lmg_mk48mod1: hlc_lmg_mk48 {
    ACE_barrelLength = 502;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 186.6;
        class CowsSlot: asdg_OpticRail1913 {};
        class GripodSlot: nia_rifle_gripod_slot {};
        class UnderBarrelSlot: WB_rifle_grips_slot {};
    };
    class FullAuto: FullAuto
    {
      dispersion = 0.0009;
    };
};
