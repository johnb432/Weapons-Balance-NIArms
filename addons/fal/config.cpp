#include "script_component.hpp"

class CfgPatches {
    class ADDON {
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

class asdg_OpticRail1913_long;

class asdg_OpticRail;
class asdg_OpticRailL1A1: asdg_OpticRail {
    class compatibleItems {
        hlc_optic_pvs4fal = 1;
        hlc_optic_suit = 1;
    };
};

class asdg_OpticRail1913;
class UK3CB_OpticRail1913_FNFAL: asdg_OpticRail1913 {
    class compatibleItems {
        hlc_optic_pvs4fal = 1;
        hlc_optic_suit = 1;
    };
};

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
