#include "..\script_component.hpp"
/*
 * Author: johnb43
 * Makes all interaction menus for ACR barrel switching for a unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Modified interaction menu <ARRAY>
 *
 * Example:
 * player call wb_niarms_acr_fnc_barrelSwitchMenusACR
 *
 * Public: No
 */

params ["_unit"];

private _cache = (uiNamespace getVariable [QEGVAR(main,barrelSwitchCache), createHashMap]) get (currentWeapon _unit);

if (isNil "_cache") exitWith {[]};

private _weaponConfig = configFile >> "CfgWeapons";

private _barrels = [
    "hlc_barrel_compact_ACR_556",
    "hlc_barrel_carbine_ACR_556",
    "hlc_barrel_mid_ACR_556",
    "hlc_barrel_full_ACR_556",
    "hlc_barrel_compact_ACR_68",
    "hlc_barrel_carbine_ACR_68",
    "hlc_barrel_mid_ACR_68",
    "hlc_barrel_full_ACR_68"
];

private _currentBarrel = _cache select 0;

if !(_currentBarrel in _barrels) exitWith {[]};

_barrels = (_barrels arrayIntersect (items _unit)) - [_currentBarrel];

if (_barrels isEqualTo []) exitWith {[]};

_barrels apply {
    [
        [
            format [QGVAR(barrelSwitch_%1), _x], // Action name
            getText (_weaponConfig >> _x >> "displayName"), // Name of action shown in menu
            getText (_weaponConfig >> _x >> "picture"), // Icon
            {(_this select 2) call FUNC(barrelSwitchACR)}, // Statement
            {true}, // Condition
            nil,
            [_unit, _x] // Action parameters
        ] call ace_interact_menu_fnc_createAction,
        [],
        _unit
    ]
}
