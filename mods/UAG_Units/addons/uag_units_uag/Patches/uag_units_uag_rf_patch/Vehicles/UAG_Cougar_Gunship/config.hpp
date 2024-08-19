/* UAG Cougar Gunship
 * Based on: I_E_EC_02_RF
 * From: RF_Air_heli_medium_ec
 * Changes:
 * - ???
 */

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;

class CfgVehicles {
    class I_E_EC_02_RF;

    class UAG_Cougar_Gunship_PARENTPROXY: I_E_EC_02_RF {
        scope = private;
        
        class EventHandlers;
        class Components;
    };

    class UAG_Cougar_Gunship: UAG_Cougar_Gunship_PARENTPROXY {
        scope = public;
        displayName = "Cougar Gunship";
        hiddenSelectionsTextures[] = {
            "\z\UAG_Units\addons\uag_units_uag\Patches\uag_units_uag_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa",
            "\z\UAG_Units\addons\uag_units_uag\Patches\uag_units_uag_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa",
            "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
            "\z\UAG_Units\addons\uag_units_uag\Patches\uag_units_uag_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_adds_03_ldf_co_uag.paa",
            "\z\UAG_Units\addons\uag_units_uag\Patches\uag_units_uag_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa",
            "\z\UAG_Units\addons\uag_units_uag\Patches\uag_units_uag_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa"
        };
        textureList[] = {};
        crew = "UAG_Pilot_Black_Splinter";
        faction = "UAG";
        side = 1;

        class EventHandlers: EventHandlers {
            init = "(_this select 0) setWaterLeakiness 0;";
        };

        class Components: Components {
            class TransportPylonsComponent {
                uiPicture = "\lxRF\air_rf\heli_medium_ec\data\UI\heli_medium_ec_02_3DEN_CA.paa";

                class Presets {
                    class HAT {
                        displayName = "Default";
                        attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonWeapon_860Rnd_127x99mm_shells_black_RF","PylonWeapon_860Rnd_127x99mm_shells_black_RF","PylonRack_4Rnd_LG_scalpel"};
                    };
                };
                class Pylons {
                    class PylonLeft1 {
                        attachment = "PylonRack_4Rnd_LG_scalpel";
                        hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON","WEAPON_PODS_RF"};
                        priority = 5;
                        turret[] = {0};
                        UIposition[] = {0.06,0.4};
                    };
                    class PylonLeft2: PylonLeft1 {
                        attachment = "PylonWeapon_860Rnd_127x99mm_shells_black_RF";
                        priority = 4;
                        UIposition[] = {0.08,0.35};
                    };
                    class PylonRight1: PylonLeft1 {
                        attachment = "PylonWeapon_860Rnd_127x99mm_shells_black_RF";
                        mirroredMissilePos = 1;
                        UIposition[] = {0.59,0.4};
                    };
                    class PylonRight2: PylonLeft2 {
                        attachment = "PylonRack_4Rnd_LG_scalpel";
                        mirroredMissilePos = 2;
                        UIposition[] = {0.57,0.35};
                    };
                };
            };

            class SensorsManagerComponent {
                class Components {
                    // allow all sensor types
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        animDirection = "";
                        aimDown = 0;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 360;
                        typeRecognitionDistance = 6000;
                    };
                    class IRSensorComponent: SensorTemplateIR {};
                    class LaserSensorComponent: SensorTemplateLaser {};
                    class NVSensorComponent: SensorTemplateNV {};
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                    class VisualSensorComponent: SensorTemplateVisual {};
                    class DataLinkSensorComponent: SensorTemplateDataLink {};
                    class ManSensorComponent: SensorTemplateMan {};
                    class AntiRadiationSensorComponent: SensorTemplateAntiRadiation {};
                };
            };
        };
    };
};