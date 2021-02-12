class CfgPatches {
    class WB_fix_niarms {
        name = "Weapons balance - Fix NIArms";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
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
    };
};

class Extended_PreInit_EventHandlers {
	   class WB_fix_niarms {
		      init = "call compile preprocessFileLineNumbers '\fix_niarms\preInit.sqf'";
	   };
};

//called in postInit because it's overwritten by NIArms if it is done in preInit
class Extended_PostInit_EventHandlers {
	   class WB_fix_niarms {
		      init = "call compile preprocessFileLineNumbers '\fix_niarms\postInit.sqf'";
	   };
};

class CfgFunctions {
    class WB {
        class common {
            class barrelswitch_ACR {
                file = "\fix_niarms\fnc_barrelswitch_ACR.sqf";
            };
        };
    };
};

#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgAmmoBelts.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazineWells.hpp"

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

class nia_rifle_gripod_slot;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };

    class ItemCore;

    #include "CfgWeapMisc.hpp"
    #include "CfgWeapACR.hpp"
    #include "CfgWeapAK.hpp"
    #include "CfgWeapAR15.hpp"
    #include "CfgWeapAUG.hpp"
    #include "CfgWeapAWM.hpp"
    #include "CfgWeapFAL.hpp"
    #include "CfgWeapG3.hpp"
    #include "CfgWeapG36.hpp"
    #include "CfgWeapHK416.hpp"
    #include "CfgWeapM14.hpp"
    #include "CfgWeapMG.hpp"
    #include "CfgWeapMP5.hpp"
    #include "CfgWeapSAW.hpp"
    #include "CfgWeapSG550.hpp"
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_20Rnd_762x51_B_M14;
    class hlc_20rnd_762x51_b_G3;
    class hlc_20rnd_762x51_T_G3;
    class hlc_20Rnd_762x51_B_fal;
    class hlc_50Rnd_45ACP_B_1921;

    #include "CfgMagAK545.hpp"
    #include "CfgMagAK762.hpp"
    #include "CfgMagAUG.hpp"
    #include "CfgMagG36.hpp"
    #include "CfgMagMG3.hpp"
    #include "CfgMagMisc.hpp"
    #include "CfgMagNATO762.hpp"
    #include "CfgMagRifleMisc.hpp"
    #include "CfgMagSG550.hpp"
    #include "CfgMagSTANAG.hpp"

    //New additions
    #include "CfgMag303.hpp"
    #include "CfgMagMauser.hpp"
    #include "CfgMagPKM.hpp"
    #include "CfgMagMisc2.hpp"
};
