/* UAG Combat Helmet - Medium + Neckshield
 * Based on: H_PASGT_neckprot_blue_press_F
 * From: A3_Characters_F_Orange_Headgear
 * Changes:
 * - ???
 */

class CfgWeapons {
    class H_PASGT_neckprot_blue_press_F;

    class UAG_Combat_Helmet_Medium_Neckshield_PROXY: H_PASGT_neckprot_blue_press_F {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Combat_Helmet_Medium_Neckshield: UAG_Combat_Helmet_Medium_Neckshield_PROXY {
        _generalMacro = "UAG_Combat_Helmet_Medium_Neckshield";
        scope = 2;
        displayName = "UAG Combat Helmet - Medium + Neckshield";
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Helmet_Medium_Neckshield\H_PASGT_blue_press_CO_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Helmet_Medium_Neckshield\icon_H_PASGT_neckprot_blue_press_CA_uag.paa";
    };
};