#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "hlcweapons_core",
            "hlcweapons_ACR",
            "hlcweapons_AKs",
            "hlcweapons_AR15",
            "hlcweapons_AUG",
            "hlcweapons_Bren",
            "hlcweapons_falpocalypse",
            "hlcweapons_FHAWCovert",
            "hlcweapons_FN3011",
            "hlcweapons_g3",
            "hlcweapons_G36",
            "hlcweapons_M134",
            "hlcweapons_M14",
            "hlcweapons_M16A2",
            "hlcweapons_M60E4",
            "hlcweapons_MG3s",
            "hlcweapons_MP5",
            "hlcweapons_saw",
            "hlcweapons_SCAR",
            "hlcweapons_SG550",
            "hlcweapons_Springfield1903",
            "hlcweapons_stgw57",
            "hlcweapons_XM8",
            "niaweapons_226",
            "niarms_416",
            "niaweapons_C96",
            "sp_fwa_mas"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-NIArms";
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class Rifle_Base_F;

    class hlc_fal_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class hlc_rifle_SLR: hlc_fal_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };
    class hlc_rifle_FAL5061: hlc_fal_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };
    class hlc_rifle_C2A1: hlc_fal_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };

    class hlc_g3_base;
    class hlc_rifle_psg1: hlc_g3_base {
        class WeaponSlotsInfo;
    };
    class hlc_rifle_psg1A1: hlc_rifle_psg1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete Cowsslot;
        };
    };

    class hlc_STGW_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class hlc_rifle_STGW57: hlc_STGW_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };
};
