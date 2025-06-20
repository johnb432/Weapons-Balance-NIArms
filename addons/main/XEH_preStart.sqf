#include "script_component.hpp"

#include "XEH_PREP.hpp"

private _cache = createHashMap;

{
    _cache set [configName _x, [configName ((getText (_x >> "HLC_CurrentBarrel")) call CBA_fnc_getItemConfig), (getArray (_x >> 'HLC_CompatibleBarrels_Classes')) apply {configName (_x call CBA_fnc_getItemConfig)}]];
} forEach configProperties [configFile >> "CfgWeapons", "isClass _x && {getText (_x >> 'HLC_CurrentBarrel') != ''}", true];

uiNamespace setVariable [QGVAR(barrelSwitchCache), compileFinal _cache];
