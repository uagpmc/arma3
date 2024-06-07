class CfgWeapons {
    class HitpointsProtectionInfo;
    class Abdomen;
    class Arms;
    class Body;
    class Chest;
    class Diaphragm;
    class Neck;
    class Pelvis;
    class Head;
    class Face;

    class Rainman_Combat_Fatigues_Splinter_Urban;
    class Rainman_Combat_Fatigues_Splinter_Urban_PROXY: Rainman_Combat_Fatigues_Splinter_Urban {
        scope = 0;
        class ItemInfo;
    };
    class UAGPMC_Combat_Fatigues: Rainman_Combat_Fatigues_Splinter_Urban_PROXY {
        scope = 2;
        displayName = "UAG Combat Fatigues";

        class ItemInfo: ItemInfo {
            containerClass = "Supply80";
            mass = 20;
        };
    };

    class Rainman_Combat_Fatigues_Splinter_Urban_2;
    class Rainman_Combat_Fatigues_Splinter_Urban_2_PROXY: Rainman_Combat_Fatigues_Splinter_Urban_2 {
        scope = 0;
        class ItemInfo;
    };
    class UAGPMC_Combat_Fatigues_2: Rainman_Combat_Fatigues_Splinter_Urban_2_PROXY {
        scope = 2;
        displayName = "UAG Combat Fatigues 2";

        class ItemInfo: ItemInfo {
            containerClass = "Supply80";
            mass = 20;
        };
    };

    class V_PlateCarrier1_blk;
    class V_PlateCarrier1_blk_PROXY: V_PlateCarrier1_blk {
        scope = 0;
        class ItemInfo;
    };
    class UAGPMC_Plate_Carrier_Light: V_PlateCarrier1_blk_PROXY {
        scope = 2;
        displayName = "UAG Plate Carrier - Light";

        class ItemInfo: ItemInfo {
            containerClass = "Supply280";
            mass = 40;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Abdomen: Abdomen {
                    armor = 32;
                    passThrough = 0.15;
                };
                class Body: Body {
                    passThrough = 0.15;
                };
                class Chest: Chest {
                    armor = 32;
                    passThrough = 0.15;
                };
                class Diaphragm: Diaphragm {
                    armor = 32;
                    passThrough = 0.15;
                };
            };
        };
    };

    class V_PlateCarrier2_blk;
    class V_PlateCarrier2_blk_PROXY: V_PlateCarrier2_blk {
        scope = 0;
        class ItemInfo;
    };
    class UAGPMC_Plate_Carrier_Medium: V_PlateCarrier2_blk_PROXY {
        scope = 2;
        displayName = "UAG Plate Carrier - Medium";

        class ItemInfo: ItemInfo {
            containerClass = "Supply280";
            mass = 50;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Abdomen: Abdomen {
                    armor = 40;
                    passThrough = 0.1;
                };
                class Body: Body {
                    passThrough = 0.1;
                };
                class Chest: Chest {
                    armor = 40;
                    passThrough = 0.1;
                };
                class Diaphragm: Diaphragm {
                    armor = 40;
                    passThrough = 0.1;
                };
            };
        };
    };

    class V_PlateCarrierSpec_blk;
    class V_PlateCarrierSpec_blk_PROXY: V_PlateCarrierSpec_blk {
        scope = 0;
        class ItemInfo;
    };
    class UAGPMC_Plate_Carrier_Heavy: V_PlateCarrierSpec_blk_PROXY {
        scope = 2;
        displayName = "UAG Plate Carrier - Heavy";

        class ItemInfo: ItemInfo {
            containerClass = "Supply200";
            mass = 60;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Abdomen: Abdomen {
                    armor = 48;
                    passThrough = 0.05;
                };
                class Arms: Arms {
                    armor = 16;
                    passThrough = 0.25;
                };
                class Body: Body {
                    passThrough = 0.05;
                };
                class Chest: Chest {
                    armor = 48;
                    passThrough = 0.05;
                };
                class Diaphragm: Diaphragm {
                    armor = 48;
                    passThrough = 0.05;
                };
                class Neck: Neck {
                    armor = 16;
                    passThrough = 0.25;
                };
            };
        };
    };

    class Rainman_HelmetB_Light_Splinter_Urban;
    class Rainman_HelmetB_Light_Splinter_Urban_PROXY: Rainman_HelmetB_Light_Splinter_Urban {
        scope = 0;
        class ItemInfo;
    };
    class UAGPMC_Combat_Helmet_Light: Rainman_HelmetB_Light_Splinter_Urban_PROXY {
        scope = 2;
        displayName = "UAG Combat Helmet - Light";
        subItems[] = { "Integrated_NVG_F" };

        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;

        class ItemInfo: ItemInfo {
            mass = 10;
            passThrough = 0.25;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 8;
                    passThrough = 0.25;
                };
            };
        };
    };

    class Rainman_HelmetIA_Splinter_Urban;
    class Rainman_HelmetIA_Splinter_Urban_PROXY: Rainman_HelmetIA_Splinter_Urban {
        scope = 0;
        class ItemInfo;
    };
    class UAGPMC_Combat_Helmet_Medium: Rainman_HelmetIA_Splinter_Urban_PROXY {
        scope = 2;
        displayName = "UAG Combat Helmet - Medium";
        subItems[] = { "Integrated_NVG_F" };

        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;

        class ItemInfo: ItemInfo {
            mass = 15;
            passThrough = 0.25;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 12;
                    passThrough = 0.25;
                };
            };
        };
    };

    class H_HelmetB_TI_tna_F;
    class H_HelmetB_TI_tna_F_PROXY: H_HelmetB_TI_tna_F {
        scope = 0;
        class ItemInfo;
    };
    class UAGPMC_Combat_Helmet_Heavy: H_HelmetB_TI_tna_F_PROXY {
        scope = 2;
        displayName = "UAG Combat Helmet - Heavy";
        subItems[] = { "Integrated_NVG_F" };
        hiddenSelectionsTextures[] = {"\rainmans_splinter_camo\data\textures\headgear_helmet_canvas_splinter_urban_co.paa"};

        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;

        class ItemInfo: ItemInfo {
            mass = 15;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 12;
                    passThrough = 0.25;
                };
                class Face: Face {
                    armor = 8;
                    passThrough = 0.25;
                };
            };
        };
    };

    class arifle_MSBS65_black_f;
    class UAGPMC_MSBS65v2: arifle_MSBS65_black_f {
        displayName = "UAG MSBS65v2";
        baseWeapon = "UAGPMC_MSBS65v2";
    };

    class UAGPMC_MSBS65v2_ModularSight: UAGPMC_MSBS65v2 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_ico_01_black_f";
            };
        };
    };

    class arifle_MSBS65_UBS_black_F;
    class UAGPMC_MSBS65v2_UBS: arifle_MSBS65_UBS_black_F {
        displayName = "UAG MSBS65v2 (UBS)";
        baseWeapon = "UAGPMC_MSBS65v2_UBS";
    };

    class UAGPMC_MSBS65v2_UBS_Holo: UAGPMC_MSBS65v2_UBS {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_holosight_blk_f";
            };
        };
    };

    class arifle_MSBS65_GL_black_F;
    class UAGPMC_MSBS65v2_GL: arifle_MSBS65_GL_black_F {
        displayName = "UAG MSBS65v2 (GL)";
        baseWeapon = "UAGPMC_MSBS65v2_GL";
    };
    
    class UAGPMC_MSBS65v2_GL_ModularSight: UAGPMC_MSBS65v2_GL {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_ico_01_black_f";
            };
        };
    };

    class srifle_DMR_03_F;
    class UAGPMC_SIG556: srifle_DMR_03_F {
        displayName = "UAG SIG556";
        baseWeapon = "UAGPMC_SIG556";
    };
    
    class UAGPMC_SIG556_Pitbull: UAGPMC_SIG556 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_mrco";
            };
        };
    };

    class srifle_LRR_F;
    class UAGPMC_M200: srifle_LRR_F {
        displayName = "UAG SIG556";
        baseWeapon = "UAGPMC_SIG556";
    };
    
    class UAGPMC_M200_LRPS: UAGPMC_M200 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_lrps";
            };
        };
    };
};
