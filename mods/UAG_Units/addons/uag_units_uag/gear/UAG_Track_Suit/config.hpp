/* UAG Track Suit
 * Based on: U_O_R_Gorka_01_F
 * From: A3_Characters_F_Enoch
 * Changes:
 * - Weightless
 */

class CfgWeapons {
    class U_I_E_CBRN_Suit_01_EAF_F;

    class UAG_Track_Suit_PARENTPROXY: U_I_E_CBRN_Suit_01_EAF_F {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Track_Suit: UAG_Track_Suit_PARENTPROXY {
        scope = 2;
        displayName = "UAG Track Suit";
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\uag_units_uag\Gear\UAG_Track_Suit\Gorka_01_Khaki_CO_uag.paa"};
        picture = "z\UAG_Units\addons\uag_units_uag\Gear\UAG_Track_Suit\icon_U_O_R_Gorka_01_F_ca_uag.paa";

        class ItemInfo: ItemInfo {
            mass = 0;
            uniformClass = "UAG_Track_Suit_Soldier";
        };
    };
};

class CfgVehicles {
    class O_R_Gorka_F;

    class UAG_Track_Suit_Soldier: O_R_Gorka_F {
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\uag_units_uag\Gear\UAG_Track_Suit\Gorka_01_Khaki_CO_uag.paa"};
        picture = "z\UAG_Units\addons\uag_units_uag\Gear\UAG_Track_Suit\icon_U_O_R_Gorka_01_F_ca_uag.paa";
    };
};