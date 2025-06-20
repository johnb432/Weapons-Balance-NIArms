#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "hlcweapons_core"
        };
        author = "johnb43";
        authors[] = {
            "johnb43",
            "ThePointForward",
            "Blutze",
            "Garfield"
        };
        url = "https://github.com/johnb432/Weapons-Balance-NIArms";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgAmmoBelts.hpp"
#include "CfgMagazineWells.hpp"

class CfgFunctions {
    class NIARMS_ALTRELOADS {
        class functions {
            class perFrame {
                file = PATH_TO_FUNC(empty);
            };
            class postInit {
                file = PATH_TO_FUNC(empty);
            };
        };
    };
};

class CfgWeapons {
    class ItemCore;

    #include "weapons\CfgWeapAcc.hpp"
    #include "weapons\CfgWeapMuzzle.hpp"
    #include "weapons\CfgWeapOptic.hpp"
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_50Rnd_45ACP_B_1921;

    #include "magazines\CfgMagFAL.hpp"
    #include "magazines\CfgMagAK545.hpp"
    #include "magazines\CfgMagAK762.hpp"
    #include "magazines\CfgMagMisc.hpp"
    #include "magazines\CfgMagSTANAG.hpp"
    #include "magazines\CfgMag300.hpp"
    #include "magazines\CfgMagAK556.hpp"

    // New additions
    #include "magazines\CfgMag303.hpp"
    #include "magazines\CfgMagAK545New.hpp"
    #include "magazines\CfgMagAK762New.hpp"
    #include "magazines\CfgMagMauser.hpp"
    #include "magazines\CfgMagPKM.hpp"
    #include "magazines\CfgMagMisc2.hpp"
};

class BettIR_Config {
    class CompatibleAttachments {
        class __base_rightSiderailPointer {};
        class hlc_acc_DBALPL_Side: __base_rightSiderailPointer {};
        class hlc_acc_LS321G: __base_rightSiderailPointer {};

        class hlc_acc_AIM1D_Generic: __base_rightSiderailPointer {};
        class hlc_acc_AIM1D_M16: __base_rightSiderailPointer {};

        class hlc_acc_DBALPL: __base_rightSiderailPointer {};
    };
};
