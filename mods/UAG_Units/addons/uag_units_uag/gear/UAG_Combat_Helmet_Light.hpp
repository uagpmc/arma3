/* UAG Combat Helmet - Light
 * Based on: H_HelmetB_black
 * From: A3_Characters_F
 * Changes:
 * - Weightless
 */

class CfgWeapons {
    class H_HelmetB_black;

    class UAG_Combat_Helmet_Light_PROXY: H_HelmetB_black {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Combat_Helmet_Light: UAG_Combat_Helmet_Light_PROXY {
        _generalMacro = "UAG_Combat_Helmet_Light";
        scope = 2;
        displayName = "UAG Combat Helmet - Light";
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\uag_units_uag\data\equip1_black_co_uag.paa"};
        picture = "z\UAG_Units\addons\uag_units_uag\data\icon_H_HelmetB_black_ca_uag.paa";

        class ItemInfo: ItemInfo {
            mass = 0;
        };
    };
};