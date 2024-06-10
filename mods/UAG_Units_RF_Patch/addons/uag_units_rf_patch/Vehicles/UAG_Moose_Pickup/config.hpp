/* UAG Moose Pickup
 * Based on: I_E_Pickup_rf
 * From: RF_Vehicles_Pickup_01
 * Changes:
 * - ???
 */

class CfgVehicles {
    class I_E_Pickup_rf;

    class UAG_Moose_Pickup: I_E_Pickup_rf {
        displayName = "Moose Pickup";
        hiddenSelectionsTextures[] = {
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Moose_Pickup\pickup_01_ext_black_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Moose_Pickup\pickup_01_adds_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Moose_Pickup\pickup_01_ext2_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Moose_Pickup\pickup_01_aat_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Moose_Pickup\pickup_01_launcher_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Moose_Pickup\pickup_01_service_black_co_uag.paa"
        };
        crew = "UAG_Contractor";
        faction = "UAG";
        side = 1;
    };
};