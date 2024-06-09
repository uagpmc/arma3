class CfgWeapons {
    class srifle_LRR_F;

    class UAG_M200v2: srifle_LRR_F {
        displayName = "UAG M200v2";
        baseWeapon = "UAG_M200v2";
    };
    
    class UAG_M200v2_LRPS: UAG_M200 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_lrps";
            };
        };
    };
};