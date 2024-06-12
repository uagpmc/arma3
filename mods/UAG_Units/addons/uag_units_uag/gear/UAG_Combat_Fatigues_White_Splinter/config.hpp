class CfgWeapons {
    class U_B_CTRG_Soldier_urb_1_F;

    class UAG_Combat_Fatigues_White_Splinter_PARENTPROXY: U_B_CTRG_Soldier_urb_1_F {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Combat_Fatigues_White_Splinter: UAG_Combat_Fatigues_White_Splinter_PARENTPROXY {
        scope = 2;
        displayName = "UAG Combat Fatigues (White Splinter)";
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Fatigues_White_Splinter\clothing1_mtp_urban_co_uag.paa"};
        picture = "z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Fatigues_White_Splinter\icon_U_B_CTRG_Soldier_urb_1_F_ca_uag.paa";

        class ItemInfo: ItemInfo {
            containerClass = "Supply80";
            mass = 0;
            uniformClass = "UAG_Combat_Fatigues_White_Splinter_Soldier";
        };
    };
};

class CfgVehicles {
    class B_CTRG_Soldier_urb_1_F;

    class UAG_Combat_Fatigues_White_Splinter_Soldier: B_CTRG_Soldier_urb_1_F {
        hiddenSelectionsTextures[] = {"z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Fatigues_White_Splinter\clothing1_mtp_urban_co_uag.paa"};
        picture = "z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Fatigues_White_Splinter\icon_U_B_CTRG_Soldier_urb_1_F_ca_uag.paa";
    };
};