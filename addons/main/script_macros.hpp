#include "\x\cba\addons\main\script_macros_common.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PATH_TO_FUNC(func) QUOTE(MAINPREFIX\PREFIX\SUBPREFIX\COMPONENT\functions\func.sqf)

#define MAGAZINE_WELL WB_Magazines

#define MAG_SWITCH(weaponName)\
class nia_magSwitch {\
    30Rnd_556x45_Stanag_Sand_green = weaponName;\
    30Rnd_556x45_Stanag_Sand_red = weaponName;\
    30Rnd_556x45_Stanag_Sand = weaponName;\
    30Rnd_556x45_Stanag_Sand_Tracer_Green = weaponName;\
    30Rnd_556x45_Stanag_Sand_Tracer_Red = weaponName;\
    30Rnd_556x45_Stanag_Sand_Tracer_Yellow = weaponName;\
    150Rnd_556x45_Drum_Green_Mag_F = weaponName;\
    150Rnd_556x45_Drum_Mag_F = weaponName;\
    150Rnd_556x45_Drum_Sand_Mag_F = weaponName;\
    150Rnd_556x45_Drum_Green_Mag_Tracer_F = weaponName;\
    150Rnd_556x45_Drum_Mag_Tracer_F = weaponName;\
    150Rnd_556x45_Drum_Sand_Mag_Tracer_F = weaponName;\
\
    hlc_30rnd_556x45_EPR_SCAR = weaponName;\
    hlc_30rnd_556x45_MDim_SCAR = weaponName;\
    hlc_30rnd_556x45_M_SCAR = weaponName;\
    hlc_30rnd_556x45_TDim_SCAR = weaponName;\
    hlc_30rnd_556x45_SPR_SCAR = weaponName;\
    hlc_30rnd_556x45_SOST_SCAR = weaponName;\
    hlc_30rnd_556x45_S_SCAR = weaponName;\
    hlc_30rnd_556x45_t_SCAR = weaponName;\
\
    rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = weaponName;\
    rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = weaponName;\
    rhs_mag_20Rnd_556x45_M193_Stanag = weaponName;\
    rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = weaponName;\
    rhs_mag_20Rnd_556x45_M200_Stanag = weaponName;\
    rhs_mag_20Rnd_556x45_M855_Stanag = weaponName;\
    rhs_mag_20Rnd_556x45_M855A1_Stanag = weaponName;\
    rhs_mag_20Rnd_556x45_Mk262_Stanag = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_EPM = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = weaponName;\
    rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = weaponName;\
    rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = weaponName;\
    rhs_mag_30Rnd_556x45_Mk318_SCAR = weaponName;\
    rhs_mag_30Rnd_556x45_M855_Stanag_Pull = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = weaponName;\
    rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = weaponName;\
    rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = weaponName;\
    rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = weaponName;\
    rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = weaponName;\
    rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = weaponName;\
    rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = weaponName;\
    rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = weaponName;\
    rhs_mag_30Rnd_556x45_M193_Stanag = weaponName;\
    rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = weaponName;\
    rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange = weaponName;\
    rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green = weaponName;\
    rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange = weaponName;\
    rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow = weaponName;\
\
    UK3CB_M16_20rnd_556x45 = weaponName;\
    UK3CB_M16_20rnd_556x45_G = weaponName;\
    UK3CB_M16_20rnd_556x45_R = weaponName;\
    UK3CB_M16_20rnd_556x45_W = weaponName;\
    UK3CB_M16_20rnd_556x45_Y = weaponName;\
    UK3CB_M16_20rnd_556x45_GT = weaponName;\
    UK3CB_M16_20rnd_556x45_RT = weaponName;\
    UK3CB_M16_20rnd_556x45_WT = weaponName;\
    UK3CB_M16_20rnd_556x45_YT = weaponName;\
    UK3CB_M16_30rnd_556x45 = weaponName;\
    UK3CB_M16_30rnd_556x45_G = weaponName;\
    UK3CB_M16_30rnd_556x45_R = weaponName;\
    UK3CB_M16_30rnd_556x45_W = weaponName;\
    UK3CB_M16_30rnd_556x45_Y = weaponName;\
    UK3CB_M16_30rnd_556x45_GT = weaponName;\
    UK3CB_M16_30rnd_556x45_RT = weaponName;\
    UK3CB_M16_30rnd_556x45_WT = weaponName;\
    UK3CB_M16_30rnd_556x45_YT = weaponName;\
\
    UK3CB_G36_30rnd_556x45_G = weaponName;\
    UK3CB_G36_30rnd_556x45_R = weaponName;\
    UK3CB_G36_30rnd_556x45_W = weaponName;\
    UK3CB_G36_30rnd_556x45_Y = weaponName;\
    UK3CB_G36_30rnd_556x45 = weaponName;\
    UK3CB_G36_30rnd_556x45_GT = weaponName;\
    UK3CB_G36_30rnd_556x45_RT = weaponName;\
    UK3CB_G36_30rnd_556x45_WT = weaponName;\
    UK3CB_G36_30rnd_556x45_YT = weaponName;\
    UK3CB_G36_100rnd_556x45_G = weaponName;\
    UK3CB_G36_100rnd_556x45_R = weaponName;\
    UK3CB_G36_100rnd_556x45_W = weaponName;\
    UK3CB_G36_100rnd_556x45_Y = weaponName;\
    UK3CB_G36_100rnd_556x45 = weaponName;\
    UK3CB_G36_100rnd_556x45_GT = weaponName;\
    UK3CB_G36_100rnd_556x45_RT = weaponName;\
    UK3CB_G36_100rnd_556x45_WT = weaponName;\
    UK3CB_G36_100rnd_556x45_YT = weaponName;\
\
    UK3CB_AUG_30Rnd_556x45_Magazine_G = weaponName;\
    UK3CB_AUG_30Rnd_556x45_Magazine_R = weaponName;\
    UK3CB_AUG_30Rnd_556x45_Magazine_W = weaponName;\
    UK3CB_AUG_30Rnd_556x45_Magazine_Y = weaponName;\
    UK3CB_AUG_30Rnd_556x45_Magazine = weaponName;\
    UK3CB_AUG_30Rnd_556x45_Magazine_GT = weaponName;\
    UK3CB_AUG_30Rnd_556x45_Magazine_RT = weaponName;\
    UK3CB_AUG_30Rnd_556x45_Magazine_WT = weaponName;\
    UK3CB_AUG_30Rnd_556x45_Magazine_YT = weaponName;\
    UK3CB_AUG_42Rnd_556x45_Magazine_G = weaponName;\
    UK3CB_AUG_42Rnd_556x45_Magazine_R = weaponName;\
    UK3CB_AUG_42Rnd_556x45_Magazine_W = weaponName;\
    UK3CB_AUG_42Rnd_556x45_Magazine_Y = weaponName;\
    UK3CB_AUG_42Rnd_556x45_Magazine = weaponName;\
    UK3CB_AUG_42Rnd_556x45_Magazine_GT = weaponName;\
    UK3CB_AUG_42Rnd_556x45_Magazine_RT = weaponName;\
    UK3CB_AUG_42Rnd_556x45_Magazine_WT = weaponName;\
    UK3CB_AUG_42Rnd_556x45_Magazine_YT = weaponName;\
\
    UK3CB_BAF_556_30Rnd_Blank = weaponName;\
    UK3CB_BAF_556_30Rnd = weaponName;\
    UK3CB_BAF_556_30Rnd_T = weaponName;\
\
    ACE_30Rnd_556x45_Stanag_M995_AP_mag = weaponName;\
    ACE_30Rnd_556x45_Stanag_Mk262_mag = weaponName;\
    ACE_30Rnd_556x45_Stanag_Mk318_mag = weaponName;\
    ACE_30Rnd_556x45_Stanag_Tracer_Dim = weaponName;\
\
    qin_30Rnd_556x45_Stanag = weaponName;\
    qin_30Rnd_556x45_Stanag_Tracer_Red = weaponName;\
\
    sfp_30Rnd_556x45_Stanag = weaponName;\
    sfp_30Rnd_556x45_Stanag_plastic = weaponName;\
    sfp_30Rnd_556x45_Stanag_irtracer = weaponName;\
    sfp_30Rnd_556x45_Stanag_irtracer_plastic = weaponName;\
    sfp_30Rnd_556x45_Stanag_tracer = weaponName;\
    sfp_30Rnd_556x45_Stanag_tracer_plastic = weaponName;\
\
    gm_20Rnd_556x45mm_B_T_M196_stanag_gry = weaponName;\
    gm_20Rnd_556x45mm_B_M855_stanag_gry = weaponName;\
    gm_20Rnd_556x45mm_B_T_M856_stanag_gry = weaponName;\
    gm_20Rnd_556x45mm_B_M193_stanag_gry = weaponName;\
    gm_30Rnd_556x45mm_B_T_M196_stanag_gry = weaponName;\
    gm_30Rnd_556x45mm_B_M855_stanag_gry = weaponName;\
    gm_30Rnd_556x45mm_B_T_M856_stanag_gry = weaponName;\
    gm_30Rnd_556x45mm_B_M193_stanag_gry = weaponName;\
\
    US85_30Rnd_556x45 = weaponName;\
}
