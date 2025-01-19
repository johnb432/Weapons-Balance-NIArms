#include "script_component.hpp"

if (!hasInterface) exitWith {};

NIArms_altReloads_isReloading = false;

HLC_ShowBarrelAceActions = isClass (configFile >> "CfgPatches" >> "ace_interaction");
HLC_ShowBarrelActions = !HLC_ShowBarrelAceActions;
