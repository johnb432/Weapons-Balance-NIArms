#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "hlcweapons_falpocalypse"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-NIArms";
        skipWhenMissingDependencies = 1;
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
};
