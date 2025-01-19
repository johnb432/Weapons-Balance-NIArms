class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class HLC_wp_M134Painless: Rifle_Base_F {
        ACE_Overheating_allowSwapBarrel = 1;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 592;
            class CowsSlot {};
            class PointerSlot {};
        };
        class FullAuto: Mode_FullAuto {
            textureType = "fastAuto";
        };
    };
};
