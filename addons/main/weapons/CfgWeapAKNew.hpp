#define WEAPON(type)\
    baseWeapon = QUOTE(type);\
    magazines[] = {"hlc_30Rnd_556x45_EPR_AK"};\
    magazineWell[] = {"CBA_556x45_AK"};\
    rhs_grip1_change = QUOTE(DOUBLES(type,grip));\
    rhs_grip2_change = QUOTE(DOUBLES(type,grip2));\
    rhs_grip3_change = QUOTE(DOUBLES(type,grip3))

class hlc_rifle_ak19_grip;
class hlc_rifle_ak12_grip2;
class hlc_rifle_ak12_grip3;
class hlc_rifle_ak19: hlc_rifle_ak12 {
    descriptionShort = "Infantry Rifle<br/>Caliber:5.56x45mm";
    displayName = "AK-19";
    WEAPON(hlc_rifle_ak19);
};
class hlc_rifle_ak19_grip: hlc_rifle_ak12_grip {
    descriptionShort = "Infantry Rifle<br/>Caliber:5.56x45mm";
    displayName = "AK-19";
    WEAPON(hlc_rifle_ak19);
};
class hlc_rifle_ak19_grip2: hlc_rifle_ak12_grip2 {
    descriptionShort = "Infantry Rifle<br/>Caliber:5.56x45mm";
    displayName = "AK-19";
    WEAPON(hlc_rifle_ak19);
};
class hlc_rifle_ak19_grip3: hlc_rifle_ak12_grip3 {
    descriptionShort = "Infantry Rifle<br/>Caliber:5.56x45mm";
    displayName = "AK-19";
    WEAPON(hlc_rifle_ak19);
};

class hlc_rifle_ak19GL: hlc_rifle_ak12GL {
    baseWeapon = "hlc_rifle_ak19GL";
    descriptionShort = "Infantry Rifle<br/>Caliber:5.56x45mm";
    displayName = "AK-19 (GP-34)";
    magazines[] = {"hlc_30Rnd_556x45_EPR_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
};

class hlc_rifle_aku12_grip;
class hlc_rifle_aku12_grip2;
class hlc_rifle_aku12_grip3;
class hlc_rifle_aku19: hlc_rifle_aku12 {
    descriptionShort = "SMG<br/>Caliber:5.56x45mm";
    displayName = "AK-19K";
    WEAPON(hlc_rifle_aku19);
};
class hlc_rifle_aku19_grip: hlc_rifle_aku12_grip {
    descriptionShort = "SMG<br/>Caliber:5.56x45mm";
    displayName = "AK-19K";
    WEAPON(hlc_rifle_aku19);
};
class hlc_rifle_aku19_grip2: hlc_rifle_aku12_grip2 {
    descriptionShort = "SMG<br/>Caliber:5.56x45mm";
    displayName = "AK-19K";
    WEAPON(hlc_rifle_aku19);
};
class hlc_rifle_aku19_grip3: hlc_rifle_aku12_grip3 {
    descriptionShort = "SMG<br/>Caliber:5.56x45mm";
    displayName = "AK-19K";
    WEAPON(hlc_rifle_aku19);
};

class hlc_rifle_aek972: hlc_rifle_aek971 {
    displayName = "AEK-972";
    magazines[] = {"hlc_30Rnd_556x45_EPR_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
};
class hlc_rifle_aek972_mtk: hlc_rifle_aek971_mtk {
    displayName = "AEK-972 (MTK)";
    magazines[] = {"hlc_30Rnd_556x45_EPR_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
};
class hlc_rifle_aek972worn: hlc_rifle_aek971worn {
    displayName = "AEK-972 (Worn)";
    magazines[] = {"hlc_30Rnd_556x45_EPR_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
};

class hlc_rifle_aek973: hlc_rifle_aek971 {
    displayName = "AEK-973";
    magazines[] = {"hlc_30Rnd_762x39_b_ak_PMAG"};
    magazineWell[] = {"CBA_762x39_AK","CBA_762x39_RPK","AK_762x39"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_762R {};
    };
};
class hlc_rifle_aek973_mtk: hlc_rifle_aek971_mtk {
    displayName = "AEK-973 (MTK)";
    magazines[] = {"hlc_30Rnd_762x39_b_ak_PMAG"};
    magazineWell[] = {"CBA_762x39_AK","CBA_762x39_RPK","AK_762x39"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_762R {};
    };
};
class hlc_rifle_aek973worn: hlc_rifle_aek971worn {
    displayName = "AEK-973 (Worn)";
    magazines[] = {"hlc_30Rnd_762x39_b_ak_PMAG"};
    magazineWell[] = {"CBA_762x39_AK","CBA_762x39_RPK","AK_762x39"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_762R {};
    };
};

class hlc_rifle_RK62_rail: hlc_rifle_RK62 {
    baseWeapon = "hlc_rifle_RK62_rail";
    displayName = "RK 62 (Rail)";
    rhs_1p29_type = "rhs_acc_1p29";
    rhs_pgo7v_type = "rhs_acc_pgo7v_pkp";
    rhs_pgo7v2_type = "rhs_acc_pgo7v2_pkp";
    rhs_pgo7v3_type = "rhs_acc_pgo7v3_pkp";
    rhs_pkas_type = "rhs_acc_pkas_pkp";
    rhs_pso1m2_type = "rhs_acc_pso1m2";
    rhs_pso1m21_type = "rhs_acc_pso1m21";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78;
        class CowsSlot: asdg_OpticSideRail_AK {};
    };
};
