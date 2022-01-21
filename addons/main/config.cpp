#include "script_component.hpp"

// TODO: redo existing NIArms ace barrel stats

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
            "hlcweapons_core",
            "hlcweapons_ACR",
            "hlcweapons_AKs",
            "hlcweapons_AR15",
            "hlcweapons_AUG",
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
            "hlcweapons_SG550",
            "hlcweapons_Springfield1903",
            "hlcweapons_stgw57",
            "hlcweapons_XM8",
            "niaweapons_226",
            "niarms_416",
            "niaweapons_C96",
            "sp_fwa_mas"
        };
        authors[] = {
            "johnb43",
            "ThePointForward",
            "Blutze",
            "Garfield0003"
        };
        url = "https://github.com/johnb432/Weapons-Balance-NIArms";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        name = "Weapons Balance - NIArms (New)";
        author = "johnb43";
        tooltip = "Weapons Balance - NIArms (New)";
        tooltipOwned = "Weapons Balance - NIArms (New)";
        hideName = 0;
        hidePicture = 0;
        dir = "@wb_niarms";
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-NIArms";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_niarms\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_niarms\addons\main\ui\logo_weapons_balance.paa";
        logoOver = "\z\wb_niarms\addons\main\ui\logo_weapons_balance.paa";
        logoSmall = "\z\wb_niarms\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_niarms\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgAmmoBelts.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazineWells.hpp"

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class nia_rifle_gripod_slot;
class asdg_MuzzleSlot_762R;
class asdg_OpticSideRail_AK;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };

    class ItemCore;

    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapACR.hpp"
    #include "weapons\CfgWeapAK.hpp"
    #include "weapons\CfgWeapAKNew.hpp"
    #include "weapons\CfgWeapAR15.hpp"
    #include "weapons\CfgWeapAUG.hpp"
    #include "weapons\CfgWeapAWM.hpp"
    #include "weapons\CfgWeapFAL.hpp"
    #include "weapons\CfgWeapG3.hpp"
    #include "weapons\CfgWeapG36.hpp"
    #include "weapons\CfgWeapHK416.hpp"
    #include "weapons\CfgWeapM14.hpp"
    #include "weapons\CfgWeapMG.hpp"
    #include "weapons\CfgWeapMP5.hpp"
    #include "weapons\CfgWeapMuzzle.hpp"
    #include "weapons\CfgWeapOptic.hpp"
    #include "weapons\CfgWeapSAW.hpp"
    #include "weapons\CfgWeapSG550.hpp"
    #include "weapons\CfgWeapXM8.hpp"
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_50Rnd_45ACP_B_1921;

    #include "magazines\CfgMagFAL.hpp"
    #include "magazines\CfgMagAK545.hpp"
    #include "magazines\CfgMagAK762.hpp"
    #include "magazines\CfgMagAUG.hpp"
    #include "magazines\CfgMagG36.hpp"
    #include "magazines\CfgMagMG3.hpp"
    #include "magazines\CfgMagMisc.hpp"
    #include "magazines\CfgMagNATO762.hpp"
    #include "magazines\CfgMagRifleMisc.hpp"
    #include "magazines\CfgMagSG550.hpp"
    #include "magazines\CfgMagSTANAG.hpp"
    #include "magazines\CfgMagAK556.hpp"

    //New additions
    #include "magazines\CfgMag303.hpp"
    #include "magazines\CfgMagAK545New.hpp"
    #include "magazines\CfgMagAK762New.hpp"
    #include "magazines\CfgMagMauser.hpp"
    #include "magazines\CfgMagPKM.hpp"
    #include "magazines\CfgMagMisc2.hpp"
};
