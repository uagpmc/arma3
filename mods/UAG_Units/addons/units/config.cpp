class CfgPatches {
    class units {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "units";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Characters_F_Exp",
            "A3_Characters_F_Exp_Headgear"
        };
        requiredVersion = 2.16;
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    class B_CTRG_Soldier_urb_1_F;

    class UAG_Combat_Fatigues_Soldier: B_CTRG_Soldier_urb_1_F {
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\units\data\clothing1_mtp_urban_co_uag.paa"};
        picture = "z\UAG_Units\addons\units\data\icon_U_B_CTRG_Soldier_urb_1_F_ca_uag.paa";
    };

    class Supply0;
    
    class Supply280: Supply0 {
        maximumLoad = 280;
    };
};

class CfgWeapons {
    class HitpointsProtectionInfo;
    class Head;
    class Face;

    // UAG Combat Fatigues
    // Based on: U_B_CTRG_Soldier_urb_1_F
    // From: A3_Characters_F
    // Changes:
    // - Double storage
    // - Weightless
    class U_B_CTRG_Soldier_urb_1_F;

    class U_B_CTRG_Soldier_urb_1_F_PROXY: U_B_CTRG_Soldier_urb_1_F {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Combat_Fatigues: U_B_CTRG_Soldier_urb_1_F_PROXY {
        scope = 2;
        displayName = "UAG Combat Fatigues";
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\units\data\clothing1_mtp_urban_co_uag.paa"};
        picture = "z\UAG_Units\addons\units\data\icon_U_B_CTRG_Soldier_urb_1_F_ca_uag.paa";

        class ItemInfo: ItemInfo {
            containerClass = "Supply80";
            mass = 0;
            uniformClass = "UAG_Combat_Fatigues_Soldier";
        };
    };

    // UAG Plate Carrier - Light
    // Based on: V_PlateCarrier1_blk
    // From: A3_Characters_F
    // Changes:
    // - Double storage
    // - Quarter weight
    // - Double armour hitpoints
    class V_PlateCarrier1_blk;

    class V_PlateCarrier1_blk_PROXY: V_PlateCarrier1_blk {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Plate_Carrier_Light: V_PlateCarrier1_blk_PROXY {
        scope = 2;
        displayName = "UAG Plate Carrier - Light";
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\units\data\vests_blk_co_uag.paa"};
        picture = "z\UAG_Units\addons\units\data\icon_v_platecarrier1_blk_ca_uag.paa";

        class ItemInfo: ItemInfo {
            containerClass = "Supply280";
            mass = 20;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Abdomen: Abdomen {
                    armor = 32;
                };
                class Chest: Chest {
                    armor = 32;
                };
                class Diaphragm: Diaphragm {
                    armor = 32;
                };
            };
        };
    };

    // UAG Combat Helmet - Heavy
    // Based on: H_HelmetB_TI_tna_F
    // From: A3_Characters_F_Exp_Headgear
    // Changes:
    // - Perfect hearing protection
    // - Half weight
    // - Double armour hitpoints
    // - 5% pass-through
    class H_HelmetB_TI_tna_F;

    class H_HelmetB_TI_tna_F_PROXY: H_HelmetB_TI_tna_F {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Combat_Helmet_Heavy: H_HelmetB_TI_tna_F_PROXY {
        _generalMacro = "UAG_Combat_Helmet_Heavy";
        scope = 2;
        displayName = "UAG Combat Helmet - Heavy";
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\units\data\h_helmetb_ti_tna_f_co_uag.paa"};
        picture = "z\UAG_Units\addons\units\data\icon_h_helmetb_ti_tna_f_ca_uag.paa";

        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;

        class ItemInfo: ItemInfo {
            mass = 15;
            modelSides[] = {3,2,1,0};

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 12;
                    passThrough = 0.05;
                };
                class Face: Face {
                    armor = 8;
                    passThrough = 0.05;
                };
            };
        };
    };
};