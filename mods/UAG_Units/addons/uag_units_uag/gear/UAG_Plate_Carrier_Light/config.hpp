/* UAG Plate Carrier - Light
 * Based on: V_PlateCarrier1_blk
 * From: A3_Characters_F
 * Changes:
 * - Double storage
 * - Quarter weight
 * - Double armour hitpoints
 */

class CfgWeapons {
    class HitpointsProtectionInfo;
    class Abdomen;
    class Chest;
    class Diaphragm;

    class V_PlateCarrier1_blk;

    class UAG_Plate_Carrier_Light_PARENTPROXY: V_PlateCarrier1_blk {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Plate_Carrier_Light: UAG_Plate_Carrier_Light_PARENTPROXY {
        scope = 2;
        displayName = "UAG Plate Carrier - Light";
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Plate_Carrier_Light\vests_blk_co_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Plate_Carrier_Light\icon_v_platecarrier1_blk_ca_uag.paa";

        class ItemInfo: ItemInfo {
            containerClass = "UAG_Plate_Carrier_Light_ContainerClass";
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
};

class CfgVehicles {
    class Supply0;
    
    class UAG_Plate_Carrier_Light_ContainerClass: Supply0 {
        maximumLoad = 280;
    };
};