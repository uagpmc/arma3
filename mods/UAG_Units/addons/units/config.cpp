class CfgPatches {
    class units {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "units";
        requiredAddons[] = {
            "A3_Characters_F_Exp_Headgear"
        };
        requiredVersion = 2.16;
        units[] = {};
        weapons[] = {};
    };
};

class CfgWeapons {
    class HitpointsProtectionInfo;
    class Head;
    class Face;

    // UAG Combat Helmet - Heavy
    // Based on: H_HelmetB_TI_tna_F
    // Changes:
    // - Perfect hearing protection
    // - Integrated NVG + TI
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
        subItems[] = {"Integrated_NVG_TI_1_F"};
        hiddenSelectionsTextures[] = {"\rainmans_splinter_camo\data\textures\headgear_helmet_canvas_splinter_urban_co.paa"};

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