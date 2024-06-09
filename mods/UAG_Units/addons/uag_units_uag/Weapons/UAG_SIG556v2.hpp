class CfgWeapons {
    class srifle_DMR_03_F;

    class UAG_SIG556v2: srifle_DMR_03_F {
        displayName = "UAG SIG556v2";
        baseWeapon = "UAG_SIG556v2";
    };
    
    class UAG_SIG556v2_Pitbull: UAG_SIG556v2 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_mrco";
            };
        };
    };
};