#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "hlcweapons_g3"
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
    class hlc_g3_base;
    class hlc_rifle_psg1: hlc_g3_base {
        class WeaponSlotsInfo;
    };
    class hlc_rifle_psg1A1: hlc_rifle_psg1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete Cowsslot;
        };
    };
};
