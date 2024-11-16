class hlc_MP5_base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class hlc_smg_mp5a2: hlc_MP5_base {
    displayName = "HK MP5A2";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 63.8;
    };
};
class hlc_smg_mp5A2_Sfire: hlc_smg_mp5a2 {
    scopeArsenal = 0;
};
class hlc_smg_mp5a2_tac: hlc_smg_mp5a2 {
    displayName = "HK MP5A2 (TAC)";
    class WeaponSlotsInfo {
        mass = 64.8;
    };
};
class hlc_smg_mp5a3: hlc_smg_mp5a2 {
    displayName = "HK MP5A3";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.3;
    };
};
class hlc_smg_mp5a3_tac: hlc_smg_mp5a2 {
    displayName = "HK MP5A3 (TAC)";
    class WeaponSlotsInfo {
        mass = 69.3;
    };
};
class hlc_smg_mp5a4: hlc_MP5_base {
    displayName = "HK MP5A4";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 63.8;
    };
};
class hlc_smg_mp5a4_tac: hlc_smg_mp5a4 {
    displayName = "HK MP5A4 (TAC)";
    class WeaponSlotsInfo {
        mass = 64.8;
    };
};
class hlc_smg_MP5N: hlc_MP5_base {
    displayName = "HK MP5A5";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.3;
    };
};
class hlc_smg_mp5N_tac: hlc_smg_MP5N {
    displayName = "HK MP5A5 (TAC)";
    class WeaponSlotsInfo {
        mass = 69.3;
    };
};
class hlc_smg_mp5k_PDW: hlc_MP5_base {
    ACE_barrelLength = 148;
    displayName = "HK MP5K-PDW";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 56;
    };
};
class hlc_smg_mp5k: hlc_smg_mp5k_PDW {
    ACE_barrelLength = 115;
    displayName = "HK MP5K";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 44;
    };
};
class hlc_smg_mp5sd5: hlc_MP5_base {
    ACE_barrelLength = 146;
    displayName = "HK MP5SD5";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.5;
    };
};
class hlc_smg_mp5sd6: hlc_smg_mp5sd5 {
    ACE_barrelLength = 146;
    displayName = "HK MP5SD6";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75;
    };
};
class hlc_smg_mp510: hlc_smg_MP5N {
    displayName = "HK MP5/10A4";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 64.4;
    };
};
class hlc_mp510_tac: hlc_smg_mp510 {
    displayName = "HK MP5/10A4 (TAC)";
    class WeaponSlotsInfo {
        mass = 65.4;
    };
};

class hlc_smg_9mmar: hlc_smg_MP5N {
    displayName = "HK MP5A5 (GL)";
    class WeaponSlotsInfo {
        mass = 98.3;
    };
    class Single: Mode_SemiAuto {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            delete soundBegin;
            soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType {
            delete soundBegin;
            soundSetShot[] = {"mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            delete soundBegin;
            soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType {
            delete soundBegin;
            soundSetShot[] = {"mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet"};
        };
    };
    class Burst: Mode_Burst {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            delete soundBegin;
            soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType {
            delete soundBegin;
            soundSetShot[] = {"mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet"};
        };
    };
};
