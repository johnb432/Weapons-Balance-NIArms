#include "..\script_component.hpp"
/*
 * Author: Kerc, johnb43
 * Changes the currently held Remington ACR's barrel to another type
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Barrel classname <STRING>
 *
 * Return Value::
 * None
 *
 * Public: No
 *
 * Example:
 * [player, "hlc_barrel_compact_ACR_556"] call wb_niarms_main_fnc_barrelSwitch;
 */

params ["_unit", "_replaceBarrel"];

// Check config for compatible classes
private _weapon = currentWeapon _unit;
private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;
private _weaponClasses = getArray (_weaponConfig >> "HLC_CompatibleBarrels_Classes");

if (count _weaponClasses == 6 && {toLower _replaceBarrel in ["hlc_barrel_full_acr_556", "hlc_barrel_full_acr_68"]}) exitWith {
    hint "You can't put long barrels on grenade launcher variants!";
};

// Find new weapon
private _index = if (count _weaponClasses > 6) then {
    ["hlc_barrel_compact_ACR_556","hlc_barrel_carbine_ACR_556","hlc_barrel_mid_ACR_556","hlc_barrel_full_ACR_556","hlc_barrel_compact_ACR_68","hlc_barrel_carbine_ACR_68","hlc_barrel_mid_ACR_68","hlc_barrel_full_ACR_68"] findIf {_x == _replaceBarrel};
} else {
    ["hlc_barrel_compact_ACR_556","hlc_barrel_carbine_ACR_556","hlc_barrel_mid_ACR_556","hlc_barrel_compact_ACR_68","hlc_barrel_carbine_ACR_68","hlc_barrel_mid_ACR_68"] findIf {_x == _replaceBarrel};
};

if (_index == -1) exitWith {};

[_unit, [_weapon, _weaponClasses select _index, 4.7], {
    (_this select 0) params ["_unit", "", "", "", "_isSuccess"];
    (_this select 1) params ["_replaceBarrel", "_weaponConfig"];

    if (!_isSuccess) exitWith {};

    // Animation for changing barrel
    _unit playActionNow "HLC_GestureSwapBarrelAUG";
    _unit say3D "hlc_barrelswapaug";

    // Remove new barrel and add old barrel
    _unit removeItem _replaceBarrel;
    [_unit, getText (_weaponConfig >> "HLC_CurrentBarrel"), true] call CBA_fnc_addItem;

    nil
}, [_replaceBarrel, _weaponConfig], [true, false]] call FUNC(switchWeaponVariant);
