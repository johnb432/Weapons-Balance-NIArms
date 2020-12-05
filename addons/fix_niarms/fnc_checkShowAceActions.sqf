/*
    Author: Kerc, johnb43

   	Description:
   	Checks if the the "Change Barrel" Ace self-interaction should be shown

   	Example:
   		[player] call WB_fnc_checkShowAceActions;

   	Returns:
   	Boolean
*/
params ["_unit"];

private _return = false;

if (HLC_ShowBarrelAceActions && {!(_unit getVariable ["barrelSwitchInProgress", false])}) then {
    private _barrels = [
       "hlc_barrel_standard",
       "hlc_barrel_carbine",
       "hlc_barrel_hbar",
       "hlc_barrel_9mm",
       "hlc_barrel_compact_ACR_556",
       "hlc_barrel_carbine_ACR_556",
       "hlc_barrel_mid_ACR_556",
       "hlc_barrel_full_ACR_556",
       "hlc_barrel_compact_ACR_68",
       "hlc_barrel_carbine_ACR_68",
       "hlc_barrel_mid_ACR_68",
       "hlc_barrel_full_ACR_68"
    ];

    {
        if (_x in _barrels) exitWith {
            _return = true;
        };
    } forEach (items _unit);
};

_return
