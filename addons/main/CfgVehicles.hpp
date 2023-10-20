class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class Change_Barrel {
                    displayName = "Change Barrel";
                    condition = QUOTE(HLC_ShowBarrelAceActions && {!(_player getVariable [ARR_2(QQGVAR(barrelSwitchInProgress),false)])});

                    class hlc_switch_barrel_standard {
                        displayName = "Change Barrel (Standard)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_standard_compatible_weapons} && {'hlc_barrel_standard' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_standard')] spawn hlc_fnc_barrelswitch);
                    };

                    class hlc_switch_barrel_carbine {
                        displayName = "Change Barrel (Carbine)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_carbine_compatible_weapons} && {'hlc_barrel_carbine' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_carbine')] spawn hlc_fnc_barrelswitch);
                    };

                    class hlc_switch_barrel_hbar {
                        displayName = "Change Barrel (HBAR)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_hbar_compatible_weapons} && {'hlc_barrel_hbar' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_hbar')] spawn hlc_fnc_barrelswitch);
                    };

                    class hlc_switch_barrel_9mm {
                        displayName = "Change Barrel (Para)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_9mm_compatible_weapons} && {'hlc_barrel_9mm' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_9mm')] spawn hlc_fnc_barrelswitch);
                    };



                    class hlc_switch_barrel_compact_ACR_556 {
                        displayName = "Change Barrel (Compact/5.56)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_compact_ACR_556_compatible_weapons} && {'hlc_barrel_compact_ACR_556' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_compact_ACR_556')] call FUNC(barrelSwitch));
                    };

                    class hlc_switch_barrel_carbine_ACR_556 {
                        displayName = "Change Barrel (Carbine/5.56)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_carbine_ACR_556_compatible_weapons} && {'hlc_barrel_carbine_ACR_556' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_carbine_ACR_556')] call FUNC(barrelSwitch));
                    };

                    class hlc_switch_barrel_mid_ACR_556 {
                        displayName = "Change Barrel (Mid/5.56)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_mid_ACR_556_compatible_weapons} && {'hlc_barrel_mid_ACR_556' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_mid_ACR_556')] call FUNC(barrelSwitch));
                    };

                    class hlc_switch_barrel_full_ACR_556 {
                        displayName = "Change Barrel (Long/5.56)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_full_ACR_556_compatible_weapons} && {'hlc_barrel_full_ACR_556' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_full_ACR_556')] call FUNC(barrelSwitch));
                    };



                    class hlc_switch_barrel_compact_ACR_68 {
                        displayName = "Change Barrel (Compact/6.8)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_compact_ACR_68_compatible_weapons} && {'hlc_barrel_compact_ACR_68' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_compact_ACR_68')] call FUNC(barrelSwitch));
                    };

                    class hlc_switch_barrel_carbine_ACR_68 {
                        displayName = "Change Barrel (Carbine/6.8)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_carbine_ACR_68_compatible_weapons} && {'hlc_barrel_carbine_ACR_68' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_carbine_ACR_68')] call FUNC(barrelSwitch));
                    };

                    class hlc_switch_barrel_mid_ACR_68 {
                        displayName = "Change Barrel (Mid/6.8)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_mid_ACR_68_compatible_weapons} && {'hlc_barrel_mid_ACR_68' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_mid_ACR_68')] call FUNC(barrelSwitch));
                    };

                    class hlc_switch_barrel_full_ACR_68 {
                        displayName = "Change Barrel (Long/6.8)";
                        condition = QUOTE(((currentWeapon _player) == (primaryWeapon _player)) && {primaryWeapon _player in hlc_barrel_full_ACR_68_compatible_weapons} && {'hlc_barrel_full_ACR_68' in items _player});
                        statement = QUOTE([ARR_2(_player,'hlc_barrel_full_ACR_68')] call FUNC(barrelSwitch));
                    };
                };
            };
        };
    };
};
