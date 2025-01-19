#pragma hemtt flag pe23_ignore_has_include

class hlc_30rnd_556x45_EPR: 30Rnd_556x45_Stanag {
    mass = 9.35;

    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
    #endif
};
class hlc_30rnd_556x45_M: hlc_30rnd_556x45_EPR {
    mass = 9.35;

    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
    #endif
};
class hlc_30rnd_556x45_SOST: hlc_30rnd_556x45_EPR {
    mass = 9.35;

    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
    #endif
};
class hlc_30rnd_556x45_SPR: hlc_30rnd_556x45_EPR {
    mass = 9.35;

    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
    #endif
};
class hlc_30rnd_556x45_t: hlc_30rnd_556x45_EPR {
    mass = 9.35;

    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
    #endif
};
class hlc_30rnd_556x45_MDim: hlc_30rnd_556x45_EPR {
    mass = 9.35;

    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
    #endif
};
class hlc_30rnd_556x45_TDim: hlc_30rnd_556x45_EPR {
    mass = 9.35;

    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
    #endif
};
class hlc_30rnd_556x45_S: hlc_30rnd_556x45_EPR {
    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
    #endif
};

class hlc_30rnd_Paracord_556x45_EPR: hlc_30rnd_556x45_EPR {
    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG_Magpull.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
        hiddenSelectionsMaterials[] = {"hlc_core\mat\308bullet.rvmat","hlc_core\mat\308bullet.rvmat","hlc_core\mat\magazines\magazone_stanag_30rnd.rvmat"};
        hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_greentip_co.paa","hlc_core\tex\magazines\308_greentip_co.paa"};
    #endif
};
class hlc_30rnd_Paracord_556x45_M: hlc_30rnd_556x45_M {
    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG_Magpull.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
        hiddenSelectionsMaterials[] = {"hlc_core\mat\308bullet.rvmat","hlc_core\mat\308bullet.rvmat","hlc_core\mat\magazines\magazone_stanag_30rnd.rvmat"};
        hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_co.paa","hlc_core\tex\magazines\308_redtip_co.paa"};
    #endif
};
class hlc_30rnd_Paracord_556x45_MDim: hlc_30rnd_556x45_MDim {
    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG_Magpull.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
        hiddenSelectionsMaterials[] = {"hlc_core\mat\308bullet.rvmat","hlc_core\mat\308bullet.rvmat","hlc_core\mat\magazines\magazone_stanag_30rnd.rvmat"};
        hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_co.paa","hlc_core\tex\magazines\308_redtip_co.paa"};
    #endif
};
class hlc_30rnd_Paracord_556x45_S: hlc_30rnd_556x45_S {
    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG_Magpull.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
        hiddenSelectionsMaterials[] = {"hlc_core\mat\308bullet.rvmat","hlc_core\mat\308bullet.rvmat","hlc_core\mat\magazines\magazone_stanag_30rnd.rvmat"};
        hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_co.paa","hlc_core\tex\magazines\308_co.paa"};
    #endif
};
class hlc_30rnd_Paracord_556x45_SOST: hlc_30rnd_556x45_SOST {
    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG_Magpull.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
        hiddenSelectionsMaterials[] = {"hlc_core\mat\308bullet.rvmat","hlc_core\mat\308bullet.rvmat","hlc_core\mat\magazines\magazone_stanag_30rnd.rvmat"};
        hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_co.paa","hlc_core\tex\magazines\308_co.paa"};
    #endif
};
class hlc_30rnd_Paracord_556x45_SPR: hlc_30rnd_556x45_SPR {
    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG_Magpull.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
        hiddenSelectionsMaterials[] = {"hlc_core\mat\308bullet.rvmat","hlc_core\mat\308bullet.rvmat","hlc_core\mat\magazines\magazone_stanag_30rnd.rvmat"};
        hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_co.paa","hlc_core\tex\magazines\308_co.paa"};
    #endif
};
class hlc_30rnd_Paracord_556x45_t: hlc_30rnd_556x45_t {
    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG_Magpull.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
        hiddenSelectionsMaterials[] = {"hlc_core\mat\308bullet.rvmat","hlc_core\mat\308bullet.rvmat","hlc_core\mat\magazines\magazone_stanag_30rnd.rvmat"};
        hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_redtip_co.paa","hlc_core\tex\magazines\308_redtip_co.paa"};
    #endif
};
class hlc_30rnd_Paracord_556x45_TDim: hlc_30rnd_556x45_TDim {
    #if __has_include("\hlc_wp_M16A2\mesh\Mag\proxy\30rnd_556NATO_STANAG_Magpull.p3d") == 0
        modelSpecial = "\hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD.p3d";
        hiddenSelectionsMaterials[] = {"hlc_core\mat\308bullet.rvmat","hlc_core\mat\308bullet.rvmat","hlc_core\mat\magazines\magazone_stanag_30rnd.rvmat"};
        hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_redtip_co.paa","hlc_core\tex\magazines\308_redtip_co.paa"};
    #endif
};

class hlc_30rnd_556x45_EPR_EMAG: hlc_30rnd_556x45_EPR {
    mass = 9.35;
};
class hlc_30rnd_556x45_M_EMAG: hlc_30rnd_556x45_EPR_EMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_SOST_EMAG: hlc_30rnd_556x45_EPR_EMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_SPR_EMAG: hlc_30rnd_556x45_EPR_EMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_t_EMAG: hlc_30rnd_556x45_EPR_EMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_MDim_EMAG: hlc_30rnd_556x45_EPR_EMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_TDim_EMAG: hlc_30rnd_556x45_EPR_EMAG {
    mass = 9.35;
};

class hlc_30rnd_556x45_EPR_PMAG: hlc_30rnd_556x45_EPR {
    mass = 9.35;
};
class hlc_30rnd_556x45_M_PMAG: hlc_30rnd_556x45_EPR_PMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_SOST_PMAG: hlc_30rnd_556x45_EPR_PMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_SPR_PMAG: hlc_30rnd_556x45_EPR_PMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_t_PMAG: hlc_30rnd_556x45_EPR_PMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_MDim_PMAG: hlc_30rnd_556x45_EPR_PMAG {
    mass = 9.35;
};
class hlc_30rnd_556x45_TDim_PMAG: hlc_30rnd_556x45_EPR_PMAG {
    mass = 9.35;
};

class hlc_30rnd_556x45_EPR_STANAGHD: hlc_30rnd_556x45_EPR {
    mass = 9.35;
};
class hlc_30rnd_556x45_M_STANAGHD: hlc_30rnd_556x45_EPR_STANAGHD {
    mass = 9.35;
};
class hlc_30rnd_556x45_SOST_STANAGHD: hlc_30rnd_556x45_EPR_STANAGHD {
    mass = 9.35;
};
class hlc_30rnd_556x45_SPR_STANAGHD: hlc_30rnd_556x45_EPR_STANAGHD {
    mass = 9.35;
};
class hlc_30rnd_556x45_t_STANAGHD: hlc_30rnd_556x45_EPR_STANAGHD {
    mass = 9.35;
};
class hlc_30rnd_556x45_MDim_STANAGHD: hlc_30rnd_556x45_EPR_STANAGHD {
    mass = 9.35;
};
class hlc_30rnd_556x45_TDim_STANAGHD: hlc_30rnd_556x45_EPR_STANAGHD {
    mass = 9.35;
};

class hlc_30rnd_556x45_EPR_L5: 30Rnd_556x45_Stanag {
    mass = 9.35;
};
class hlc_30rnd_556x45_M_L5: hlc_30rnd_556x45_EPR_L5 {
    mass = 9.35;
};
class hlc_30rnd_556x45_SOST_L5: hlc_30rnd_556x45_EPR_L5 {
    mass = 9.35;
};
class hlc_30rnd_556x45_SPR_L5: hlc_30rnd_556x45_EPR_L5 {
    mass = 9.35;
};
class hlc_30rnd_556x45_t_L5: hlc_30rnd_556x45_EPR_L5 {
    mass = 9.35;
};
class hlc_30rnd_556x45_MDim_L5: hlc_30rnd_556x45_EPR_L5 {
    mass = 9.35;
};
class hlc_30rnd_556x45_TDim_L5: hlc_30rnd_556x45_EPR_L5 {
    mass = 9.35;
};

class hlc_30rnd_556x45_EPR_SCAR: hlc_30rnd_556x45_EPR {
    mass = 9.35;
};
class hlc_30rnd_556x45_MDim_SCAR: hlc_30rnd_556x45_EPR_SCAR {
    mass = 9.35;
};
class hlc_30rnd_556x45_M_SCAR: hlc_30rnd_556x45_EPR_SCAR {
    mass = 9.35;
};
class hlc_30rnd_556x45_TDim_SCAR: hlc_30rnd_556x45_EPR_SCAR {
    mass = 9.35;
};
class hlc_30rnd_556x45_SPR_SCAR: hlc_30rnd_556x45_EPR_SCAR {
    mass = 9.35;
};
class hlc_30rnd_556x45_SOST_SCAR: hlc_30rnd_556x45_EPR_SCAR {
    mass = 9.35;
};
class hlc_30rnd_556x45_S_SCAR: hlc_30rnd_556x45_EPR_SCAR {
    mass = 9.35;
};
class hlc_30rnd_556x45_t_SCAR: hlc_30rnd_556x45_EPR_SCAR {
    mass = 9.35;
};

class hlc_50rnd_556x45_EPR: hlc_30rnd_556x45_EPR {
    mass = 22.5;
};
class hlc_50rnd_556x45_M: hlc_50rnd_556x45_EPR {
    mass = 22.5;
};
class hlc_50rnd_556x45_MDim: hlc_50rnd_556x45_EPR {
    mass = 22.5;
};
class hlc_50rnd_556x45_SOST: hlc_50rnd_556x45_EPR {
    mass = 22.5;
};
class hlc_50rnd_556x45_SPR: hlc_50rnd_556x45_EPR {
    mass = 22.5;
};
