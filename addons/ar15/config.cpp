#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "hlcweapons_ar15",
            "hlcweapons_M16A2"
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

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
