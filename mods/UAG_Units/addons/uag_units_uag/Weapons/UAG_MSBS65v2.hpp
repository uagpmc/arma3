class CfgWeapons {
    class arifle_MSBS65_black_f;

    class UAG_MSBS65v2: arifle_MSBS65_black_f {
        displayName = "UAG MSBS65v2";
        baseWeapon = "UAG_MSBS65v2";
    };

    class UAG_MSBS65v2_ModularSight: UAG_MSBS65v2 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_ico_01_black_f";
            };
        };
    };

    class arifle_MSBS65_UBS_black_F;

    class UAG_MSBS65v2_UBS: arifle_MSBS65_UBS_black_F {
        displayName = "UAG MSBS65v2 (UBS)";
        baseWeapon = "UAG_MSBS65v2_UBS";
    };

    class UAG_MSBS65v2_UBS_Holo: UAG_MSBS65v2_UBS {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_holosight_blk_f";
            };
        };
    };

    class arifle_MSBS65_GL_black_F;

    class UAG_MSBS65v2_GL: arifle_MSBS65_GL_black_F {
        displayName = "UAG MSBS65v2 (GL)";
        baseWeapon = "UAG_MSBS65v2_GL";
    };
    
    class UAG_MSBS65v2_GL_ModularSight: UAG_MSBS65v2_GL {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_ico_01_black_f";
            };
        };
    };
};