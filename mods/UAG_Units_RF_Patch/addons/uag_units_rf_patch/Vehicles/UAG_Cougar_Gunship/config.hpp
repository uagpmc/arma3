/* UAG Cougar Gunship
 * Based on: I_E_EC_02_RF
 * From: RF_Air_heli_medium_ec
 * Changes:
 * - ???
 */

class CfgVehicles {
    class I_E_EC_02_RF;

    class UAG_Cougar_Gunship_PARENTPROXY: I_E_EC_02_RF {
        scope = 0;
        class EventHandlers;
        class Components;
    };

    class UAG_Cougar_Gunship: UAG_Cougar_Gunship_PARENTPROXY {
        scope = 2;
        displayName = "UAG Cougar Gunship";
        hiddenSelectionsTextures[] = {
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa",
            "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_adds_03_ldf_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa"
        };
        crew = "UAG_Contractor";
        faction = "UAG";
        side = 1;

        class EventHandlers: EventHandlers {
            // this is a hack to get around issues with the vehicle textures not loading properly
            postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle; (_this select 0) setObjectTextureGlobal [0, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa']; (_this select 0) setObjectTextureGlobal [1, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa']; (_this select 0) setObjectTextureGlobal [3, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_adds_03_ldf_co_uag.paa']; (_this select 0) setObjectTextureGlobal [4, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa']; (_this select 0) setObjectTextureGlobal [5, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa'];};";
        };

        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class Presets: Presets {
                    class Default: Default {
                        attachment[] = {
                            "PylonRack_19Rnd_missiles_black_RF",
                            "PylonRack_19Rnd_PG_missiles_black_RF",
                            "PylonRack_19Rnd_PG_missiles_black_RF",
                            "PylonRack_19Rnd_missiles_black_RF"
                        };
                    };
                };
                class Pylons: Pylons {
                    class PylonLeft1: PylonLeft1 {
                        attachment = "PylonRack_19Rnd_missiles_black_RF";
                    };
                    class PylonLeft2: PylonLeft2 {
                        attachment = "PylonRack_19Rnd_PG_missiles_black_RF";
                    };
                    class PylonRight1: PylonRight1 {
                        attachment = "PylonRack_19Rnd_missiles_black_RF";
                    };
                    class PylonRight2: PylonRight2 {
                        attachment = "PylonRack_19Rnd_PG_missiles_black_RF";
                    };
                };
            };
        };
    };
};