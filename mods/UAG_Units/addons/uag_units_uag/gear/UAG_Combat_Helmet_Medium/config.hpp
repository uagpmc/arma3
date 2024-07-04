/* UAG Combat Helmet - Medium
 * Based on: H_PASGT_basic_blue_press_F
 * From: A3_Characters_F_Orange_Headgear
 * Changes:
 * - ???
 */

class CfgWeapons {
    class H_PASGT_basic_blue_press_F;

    class UAG_Combat_Helmet_Medium_PROXY: H_PASGT_basic_blue_press_F {
        scope = private;
        class ItemInfo;
    };

    class UAG_Combat_Helmet_Medium: UAG_Combat_Helmet_Medium_PROXY {
        _generalMacro = "UAG_Combat_Helmet_Medium";
        scope = public;
        displayName = "UAG Combat Helmet - Medium";
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Helmet_Medium\H_PASGT_blue_press_CO_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Helmet_Medium\icon_H_PASGT_basic_blue_press_CA_uag.paa";
    };
};