class CfgWeapons {
    class Rifle_Base_F;
    class hlc_FN3011_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class hlc_rifle_FN3011Tactical: hlc_FN3011_base {
        class WeaponSlotsInfo {
            class Charmslot {};
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };

    class optic_hamr;
    class hlc_optic_ANGSCHUTZ: optic_hamr {
        ACE_ScopeAdjust_Vertical[] = {0,0};
        ACE_ScopeAdjust_Horizontal[] = {0,0};
    };
};
