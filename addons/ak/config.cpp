#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "hlc_rifle_aek972", "hlc_rifle_aek972_mtk", "hlc_rifle_aek972worn",
            "hlc_rifle_aek973", "hlc_rifle_aek973_mtk", "hlc_rifle_aek973worn",
            "hlc_rifle_ak19", "hlc_rifle_ak19GL", "hlc_rifle_aku19",
            "hlc_rifle_ak19_grip", "hlc_rifle_ak19_grip2", "hlc_rifle_ak19_grip3",
            "hlc_rifle_aku19_grip", "hlc_rifle_aku19_grip2", "hlc_rifle_aku19_grip3",
            "hlc_rifle_RK62_rail"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "hlcweapons_AKs"
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

class WB_rifle_grips_slot;
class asdg_MuzzleSlot_762R;
class asdg_OpticSideRail_AK;

#include "CfgAcc.hpp"

class CfgWeapons {
    class Rifle_Base_F;

    #include "weapons\CfgWeapAK.hpp"
    #include "weapons\CfgWeapAKNew.hpp"
    #include "weapons\CfgWeapMuzzle.hpp"
};

#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
