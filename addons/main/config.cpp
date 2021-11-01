#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
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
            "niaweapons_226",
            "niarms_416",
            "niaweapons_C96"
        };
        authors[] = {
            "johnb43",
            "ThePointForward",
            "Blutze"
        };
        url = "https://github.com/johnb432/Weapons-Balance-NIArms";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - NIArms";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - NIArms";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-NIArms";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_niarms\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_niarms\addons\main\ui\logo_weapons_balance.paa";
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

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };

    class ItemCore;

    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapACR.hpp"
    #include "weapons\CfgWeapAK.hpp"
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
    #include "weapons\CfgWeapSAW.hpp"
    #include "weapons\CfgWeapSG550.hpp"
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

    //New additions
    #include "magazines\CfgMag303.hpp"
    #include "magazines\CfgMagMauser.hpp"
    #include "magazines\CfgMagPKM.hpp"
    #include "magazines\CfgMagMisc2.hpp"
};
