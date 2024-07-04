/* UAG Combat Helmet - Light
 * Based on: H_HelmetB_black
 * From: A3_Characters_F
 * Changes:
 * - Weightless
 */

class CfgWeapons {
    class H_HelmetB_black;

    class UAG_Combat_Helmet_Light_PROXY: H_HelmetB_black {
        scope = private;
        class ItemInfo;
    };

    class UAG_Combat_Helmet_Light: UAG_Combat_Helmet_Light_PROXY {
        _generalMacro = "UAG_Combat_Helmet_Light";
        scope = public;
        displayName = "UAG Combat Helmet - Light";
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Helmet_Light\equip1_black_co_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Helmet_Light\icon_H_HelmetB_black_ca_uag.paa";

        class ItemInfo: ItemInfo {
            mass = 0;
        };
    };
};