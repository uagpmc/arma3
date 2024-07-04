/* UAG Combat Fatigues (Black Splinter)
 * Based on: U_B_CTRG_Soldier_urb_1_F
 * From: A3_Characters_F
 * Changes:
 * - Double storage
 * - Weightless
 */

class CfgWeapons {
    class U_B_CTRG_Soldier_urb_1_F;

    class UAG_Combat_Fatigues_Black_Splinter_PARENTPROXY: U_B_CTRG_Soldier_urb_1_F {
        scope = private;
        class ItemInfo;
    };

    class UAG_Combat_Fatigues_Black_Splinter: UAG_Combat_Fatigues_Black_Splinter_PARENTPROXY {
        scope = public;
        displayName = "UAG Combat Fatigues (Black Splinter)";
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Fatigues_Black_Splinter\clothing1_mtp_urban_co_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Fatigues_Black_Splinter\icon_U_B_CTRG_Soldier_urb_1_F_ca_uag.paa";

        class ItemInfo: ItemInfo {
            containerClass = "Supply80";
            mass = 0;
            uniformClass = "UAG_Combat_Fatigues_Black_Splinter_Soldier";
        };
    };
};

class CfgVehicles {
    class B_CTRG_Soldier_urb_1_F;

    class UAG_Combat_Fatigues_Black_Splinter_Soldier: B_CTRG_Soldier_urb_1_F {
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Fatigues_Black_Splinter\clothing1_mtp_urban_co_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Fatigues_Black_Splinter\icon_U_B_CTRG_Soldier_urb_1_F_ca_uag.paa";
    };
};