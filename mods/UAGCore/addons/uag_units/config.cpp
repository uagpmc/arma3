class CfgPatches {
    class uag_units {
        authors[] = {"uagpmc.com", "zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_units";
        requiredAddons[] = {
            "A3_Characters_F_Exp_Headgear",
            "A3_weapons_f_exp",
            "Splinter_camo_addon"
        };
        units[] = {};
        weapons[] = {
            "UAG_Combat_Fatigues",
            "UAG_Combat_Fatigues_2",
            "UAG_Plate_Carrier_Light",
            "UAG_Plate_Carrier_Medium",
            "UAG_Plate_Carrier_Heavy",
            "UAG_Combat_Helmet_Light",
            "UAG_Combat_Helmet_Medium",
            "UAG_Combat_Helmet_Heavy",
        };
    };
};

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

    // UAG Combat Fatigues
    // Based on: Rainman_Combat_Fatigues_Splinter_Urban
    // Changes:
    // - Double storage
    // - Weightless
    class Rainman_Combat_Fatigues_Splinter_Urban;
    class Rainman_Combat_Fatigues_Splinter_Urban_PROXY: Rainman_Combat_Fatigues_Splinter_Urban {
        scope = 0;
        class ItemInfo;
    };
    class UAG_Combat_Fatigues: Rainman_Combat_Fatigues_Splinter_Urban_PROXY {
        scope = 2;
        displayName = "UAG Combat Fatigues";

        class ItemInfo: ItemInfo {
            containerClass = "Supply80";
            mass = 0;
        };
    };

    // UAG Combat Fatigues 2
    // Based on: Rainman_Combat_Fatigues_Splinter_Urban_2
    // Changes:
    // - Double storage
    // - Weightless
    class Rainman_Combat_Fatigues_Splinter_Urban_2;
    class Rainman_Combat_Fatigues_Splinter_Urban_2_PROXY: Rainman_Combat_Fatigues_Splinter_Urban_2 {
        scope = 0;
        class ItemInfo;
    };
    class UAG_Combat_Fatigues_2: Rainman_Combat_Fatigues_Splinter_Urban_2_PROXY {
        scope = 2;
        displayName = "UAG Combat Fatigues 2";

        class ItemInfo: ItemInfo {
            containerClass = "Supply80";
            mass = 0;
        };
    };

    // UAG Plate Carrier - Light
    // Based on: V_PlateCarrier1_blk
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

    // UAG Plate Carrier - Medium
    // Based on: V_PlateCarrier2_blk
    // Changes:
    // - Double storage
    // - Half weight
    // - Double armour hitpoints
    // - 15% pass-through
    class V_PlateCarrier2_blk;
    class V_PlateCarrier2_blk_PROXY: V_PlateCarrier2_blk {
        scope = 0;
        class ItemInfo;
    };
    class UAG_Plate_Carrier_Medium: V_PlateCarrier2_blk_PROXY {
        scope = 2;
        displayName = "UAG Plate Carrier - Medium";

        class ItemInfo: ItemInfo {
            containerClass = "Supply280";
            mass = 50;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Abdomen: Abdomen {
                    armor = 40;
                    passThrough = 0.15;
                };
                class Body: Body {
                    passThrough = 0.15;
                };
                class Chest: Chest {
                    armor = 40;
                    passThrough = 0.15;
                };
                class Diaphragm: Diaphragm {
                    armor = 40;
                    passThrough = 0.15;
                };
            };
        };
    };

    // UAG Plate Carrier - Heavy
    // Based on: V_PlateCarrierSpec_blk
    // Changes:
    // - Double storage
    // - Half weight
    // - Double armour hitpoints
    // - 5% pass-through
    class V_PlateCarrierSpec_blk;
    class V_PlateCarrierSpec_blk_PROXY: V_PlateCarrierSpec_blk {
        scope = 0;
        class ItemInfo;
    };
    class UAG_Plate_Carrier_Heavy: V_PlateCarrierSpec_blk_PROXY {
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
                    passThrough = 0.05;
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
                    passThrough = 0.05;
                };
            };
        };
    };

    // UAG Combat Helmet - Light
    // Based on: Rainman_HelmetB_Light_Splinter_Urban
    // Changes:
    // - Perfect hearing protection
    // - Integrated NVG + TI
    // - Half weight
    // - Double armour hitpoints
    // - 20% pass-through
    class Rainman_HelmetB_Light_Splinter_Urban;
    class Rainman_HelmetB_Light_Splinter_Urban_PROXY: Rainman_HelmetB_Light_Splinter_Urban {
        scope = 0;
        scopeArsenal = 0;
        class ItemInfo;
    };
    class UAG_Combat_Helmet_Light: Rainman_HelmetB_Light_Splinter_Urban_PROXY {
        scope = 2;
        displayName = "UAG Combat Helmet - Light";
        subItems[] = {"Integrated_NVG_TI_1_F"};

        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;

        class ItemInfo: ItemInfo {
            mass = 10;
            passThrough = 0.2;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 8;
                    passThrough = 0.2;
                };
            };
        };
    };

    // UAG Combat Helmet - Medium
    // Based on: Rainman_HelmetIA_Splinter_Urban
    // Changes:
    // - Perfect hearing protection
    // - Integrated NVG + TI
    // - Half weight
    // - Double armour hitpoints
    // - 15% pass-through
    class Rainman_HelmetIA_Splinter_Urban;
    class Rainman_HelmetIA_Splinter_Urban_PROXY: Rainman_HelmetIA_Splinter_Urban {
        scope = 0;
        scopeArsenal = 0;
        class ItemInfo;
    };
    class UAG_Combat_Helmet_Medium: Rainman_HelmetIA_Splinter_Urban_PROXY {
        scope = 2;
        displayName = "UAG Combat Helmet - Medium";
        subItems[] = {"Integrated_NVG_TI_1_F"};

        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;

        class ItemInfo: ItemInfo {
            mass = 15;
            passThrough = 0.15;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 12;
                    passThrough = 0.15;
                };
            };
        };
    };

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

class CfgGlasses {
	class G_Balaclava_TI_G_blk_F;

	class UAG_Balaclava_Goggles: G_Balaclava_TI_G_blk_F {
		displayName = "UAG Balaclava w/ Goggles";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa"};
	};
};

class CfgVehicles {
    class Supply0;
    class Supply280: Supply0 {
        maximumLoad = 280;
    };
};