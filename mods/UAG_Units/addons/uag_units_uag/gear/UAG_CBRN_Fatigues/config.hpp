/* UAG CBRN Fatigues
 * Based on: U_I_E_CBRN_Suit_01_EAF_F
 * From: A3_Characters_F_Enoch
 * Changes:
 * - Weightless
 */

class CfgWeapons {
    class U_I_E_CBRN_Suit_01_EAF_F;

    class UAG_CBRN_Fatigues_PARENTPROXY: U_I_E_CBRN_Suit_01_EAF_F {
        scope = private;
        class ItemInfo;
    };

    class UAG_CBRN_Fatigues: UAG_CBRN_Fatigues_PARENTPROXY {
        scope = public;
        displayName = "UAG CBRN Fatigues";
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_CBRN_Fatigues\CBRN_Suit_01_EAF_CO_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_CBRN_Fatigues\icon_U_I_E_CBRN_Suit_01_EAF_F_ca_uag.paa";

        class ItemInfo: ItemInfo {
            mass = 0;
            uniformClass = "UAG_CBRN_Fatigues_Soldier";
        };
    };
};

class CfgVehicles {
    class I_E_CBRN_Man_Oversuit_01_EAF_F;

    class UAG_CBRN_Fatigues_Soldier: I_E_CBRN_Man_Oversuit_01_EAF_F {
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_CBRN_Fatigues\CBRN_Suit_01_EAF_CO_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_CBRN_Fatigues\icon_U_I_E_CBRN_Suit_01_EAF_F_ca_uag.paa";
    };
};