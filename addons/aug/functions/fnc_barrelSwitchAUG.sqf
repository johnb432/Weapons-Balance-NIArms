#include "..\script_component.hpp"
/*
 * Author: Kerc, johnb43
 * Changes the currently held Remington AUG's barrel to another type
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Barrel classname <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 *
 * Example:
 * [player, "hlc_barrel_carbine"] call wb_niarms_aug_fnc_barrelSwitch
 */

params ["_unit", "_replaceBarrel"];

// Check config for compatible classes
private _weapon = currentWeapon _unit;
((uiNamespace getVariable [QEGVAR(main,barrelSwitchCache), createHashMap]) get _weapon) params ["_currentBarrel", "_weaponClasses"];
private _count = count _weaponClasses;

if (_count == 3 && {_replaceBarrel == "hlc_barrel_9mm"}) exitWith {
    hint "You can't put 9mm barrels on civilian variants!";
};

// Find new weapon
private _index = if (_count > 3) then {
    ["hlc_barrel_standard", "hlc_barrel_carbine", "hlc_barrel_hbar", "hlc_barrel_9mm"] findIf {_x == _replaceBarrel};
} else {
    ["hlc_barrel_standard", "hlc_barrel_carbine", "hlc_barrel_hbar"] findIf {_x == _replaceBarrel};
};

if (_index == -1) exitWith {};

[_unit, [_weapon, _weaponClasses select _index, 4.7], {
    (_this select 0) params ["_unit", "", "", "", "_isSuccess"];
    (_this select 1) params ["_replaceBarrel", "_currentBarrel"];

    if (!_isSuccess) exitWith {};

    _unit setVariable [QEGVAR(main,barrelSwitchInProgress), true];

    // Animation for changing barrel
    _unit playActionNow "HLC_GestureSwapBarrelAUG";
    _unit say3D "hlc_barrelswapaug";

    // Remove new barrel and add old barrel
    _unit removeItem _replaceBarrel;
    [_unit, _currentBarrel, true] call CBA_fnc_addItem;

    [{
        _this setVariable [QEGVAR(main,barrelSwitchInProgress), false];
    }, _unit, 4.75] call CBA_fnc_waitAndExecute;

    nil
}, [_replaceBarrel, _currentBarrel], [true, false]] call EFUNC(main,switchWeaponVariant);
