class asdg_SlotInfo;
class WB_rifle_grips_slot: asdg_SlotInfo {
    class compatibleItems {
        hlc_grip_saw_grip1 = 1;
        hlc_grip_saw_grip2 = 1;
    };
};

class UnderBarrelSlot;
class rhs_rifle_gripod_slot: UnderBarrelSlot {
    class compatibleItems;
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        hlc_grip_saw_grip1 = 1;
        hlc_grip_saw_grip2 = 1;
    };
};

class rhs_western_mg_gripod_slot: rhs_western_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        hlc_grip_saw_grip1 = 1;
        hlc_grip_saw_grip2 = 1;
    };
};
