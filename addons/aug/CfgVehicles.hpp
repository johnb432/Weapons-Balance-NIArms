class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(switchBarrelAUG) {
                    condition = QUOTE(HLC_ShowBarrelAceActions && {!(_player getVariable [ARR_2(QQGVAR(barrelSwitchInProgress),false)])});
                    displayName = "Switch Barrel";
                    icon = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
                    insertChildren = QUOTE(_player call FUNC(barrelSwitchMenusAUG));
                };
            };
        };
    };
};
