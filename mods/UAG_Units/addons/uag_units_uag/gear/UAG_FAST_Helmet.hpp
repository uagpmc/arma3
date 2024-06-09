/* UAG FAST Helmet
 * Based on: H_HelmetB_light_black
 * From: A3_Characters_F
 * Changes:
 * - Weightless
 */

class CfgWeapons {
    class H_HelmetB_light_black;

    class UAG_FAST_Helmet_PROXY: H_HelmetB_light_black {
        scope = 0;
        class ItemInfo;
    };

    class UAG_FAST_Helmet: UAG_FAST_Helmet_PROXY {
        _generalMacro = "UAG_FAST_Helmet";
        scope = 2;
        displayName = "UAG FAST Helmet";
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\uag_units_uag\data\equip1_black_co_uag.paa"};
        picture = "z\UAG_Units\addons\uag_units_uag\data\icon_H_HelmetB_light_black_ca_uag.paa";

        class ItemInfo: ItemInfo {
            mass = 0;
        };
    };
};