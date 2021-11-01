#include "script_component.hpp"
/*
*   Author: Kerc, johnb43
*
*   Description:
*   Changes the currently held Remington ACR's barrel to another type
*
*   Parameters:
*  	0: Unit <OBJECT>
*   1: Barrel classname <STRING>
*
*  	Example:
*  	[player, "hlc_barrel_compact_ACR_556"] call wb_niarms_main_fnc_barrelSwitch;
*
*  	Returns:
*  	Nothing
*/

params ["_unit", "_replaceBarrel"];

// Check config for compatible classes
private _weaponState = weaponState _unit;
private _weapon = _weaponState select 0;
private _weaponClasses = getArray (configFile >> "CfgWeapons" >> _weapon >> "HLC_CompatibleBarrels_Classes");

if (count _weaponClasses isEqualTo 6 && {_replaceBarrel == "hlc_barrel_full_ACR_68" || _replaceBarrel == "hlc_barrel_full_ACR_556"}) exitWith {
    hint "You can't put long barrels on grenade launcher variants!";
};

// Find new weapon
private _index = if (count _weaponClasses > 6) then {
    ["hlc_barrel_compact_ACR_556","hlc_barrel_carbine_ACR_556","hlc_barrel_mid_ACR_556","hlc_barrel_full_ACR_556","hlc_barrel_compact_ACR_68","hlc_barrel_carbine_ACR_68","hlc_barrel_mid_ACR_68","hlc_barrel_full_ACR_68"] findIf {_x == _replaceBarrel};
} else {
    ["hlc_barrel_compact_ACR_556","hlc_barrel_carbine_ACR_556","hlc_barrel_mid_ACR_556","hlc_barrel_compact_ACR_68","hlc_barrel_carbine_ACR_68","hlc_barrel_mid_ACR_68"] findIf {_x == _replaceBarrel};
};

if (_index isEqualTo -1) exitWith {};

// Need to check if UGL ammo is empty, otherwise it will give extra one
private _magazineUGL = primaryWeaponMagazine _unit param [1, ""];
private _muzzleUGL = ((_weapon call CBA_fnc_getMuzzles) select {_x != _weapon && {_x != "SAFE"} && {_x != "FOLD"}}) select 0;

// If the UGL is currently selected, get information on the main muzzle
if (!isNil "_muzzleUGL" && {currentMuzzle _unit == _muzzleUGL}) then {
    // This syntax does not get the firemode correctly
    _weaponState = _unit weaponState _weapon;
};

// Animation for changing barrel
_unit playActionNow "HLC_GestureSwapBarrelAUG";
_unit say3D "hlc_barrelswapaug";
_unit setVariable [QGVAR(barrelSwitchInProgress), true];

[{
    params ["_unit", "_newWeapon", "_replaceBarrel", "_weaponState", "_muzzleUGL", "_magazineUGL", "_ammoCountUGL", "_items"];

    // Remove old barrel and add current barrel
    _unit removeItem _replaceBarrel;
    [_unit, (getText (configFile >> "CfgWeapons" >> _weaponState select 0 >> "HLC_CurrentBarrel")), true] call CBA_fnc_addItem;

    // Add new weapon with nothing, so it avoids eating mags
    [_unit, _newWeapon] call CBA_fnc_addWeaponWithoutItems;

    // Apply saved firemode
    [_unit, _newWeapon, _weaponState select 2] call CBA_fnc_selectWeapon;

    /*
    2.08
    _unit selectWeapon [_newWeapon, _newWeapon, _weaponState select 2];
    */

    // Give old mags back if possible
    private _magazine = _weaponState select 3;

    if ((_newWeapon call CBA_fnc_compatibleMagazines) findIf {_x == _magazine} isNotEqualTo -1) then {
        _unit addWeaponItem [_newWeapon, [_magazine, _weaponState select 4], true];
    } else {
        if (_magazine isNotEqualTo "") then {
            _unit addMagazine [_magazine, _weaponState select 4];
        };
    };

    if (!isNil "_muzzleUGL" && {_magazineUGL isNotEqualTo ""}) then {
        _unit addWeaponItem [_newWeapon, [_magazineUGL, _ammoCountUGL], true];
    };

    // Give old attachments back
    private _compatItems = _newWeapon call CBA_fnc_compatibleItems;

    {
        if (_x isNotEqualTo "") then {
            if (_x in _compatItems) then {
                _unit addPrimaryWeaponItem _x;
            } else {
                // Drop on ground if inventory is full
                [_unit, _x, true] call CBA_fnc_addItem;
            };
      	 };
    } foreach _items;

    _unit setVariable [QGVAR(barrelSwitchInProgress), false];
}, [_unit, _weaponClasses select _index, _replaceBarrel, _weaponState, _muzzleUGL, _magazineUGL, [_unit ammo _muzzleUGL, 0] select (_magazineUGL isEqualTo ""), primaryWeaponItems _unit], 4.7] call CBA_fnc_waitAndExecute; //4.7s is the time for the animation to complete
