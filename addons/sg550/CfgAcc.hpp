class CowsSlot;
class gm_slotOptic_base: CowsSlot {
    class compatibleItems {};
};
class gm_slotOptic_StanagSig: gm_slotOptic_base {
    class compatibleItems: compatibleItems {
        hlc_optic_FNSTANAG4X_550 = 1;
        hlc_optic_FNSTANAG4X2d_550 = 1;
        hlc_optic_ZF95 = 1;
        hlc_optic_Kern_550 = 1;
        hlc_optic_Kern2d_550 = 1;
    };
};

class asdg_MuzzleSlot_556;
class UK3CB_MuzzleSlot_556_HK33: asdg_MuzzleSlot_556 {
    class compatibleItems {
        hlc_muzzle_snds_ROTEX3P = 1;
    };
};

class asdg_MuzzleSlot_762;
class UK3CB_MuzzleSlot_762_G3: asdg_MuzzleSlot_762 {
    class compatibleItems {
        hlc_muzzle_snds_ROTEX3P = 1;
    };
};
class UK3CB_MuzzleSlot_762_M14: asdg_MuzzleSlot_762 {
    class compatibleItems {
        hlc_muzzle_snds_ROTEX3P = 1;
    };
};

class MuzzleSlot;
class MuzzleSlot_556: MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_ROTEX3P = 1;
    };
};
class MuzzleSlot_762: MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_ROTEX3P = 1;
    };
};
