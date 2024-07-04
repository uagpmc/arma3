class CfgPatches {
    class uag_reaction_forces_patch {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_reaction_forces_patch";
        requiredAddons[] = {
            "RF_Air_heli_medium_ec",
            "RF_Vehicles_Pickup_01",
            "uag_units_uag"
        };
        requiredVersion = 2.16;
        units[] = {
            "UAG_Cougar_Gunship",
            "UAG_Moose_Pickup_AAT_Black",
            "UAG_Moose_Pickup_AAT_Black_Armoured",
            "UAG_Moose_Pickup_Black",
            "UAG_Moose_Pickup_Black_Armoured",
            "UAG_Moose_Pickup_Black_Splinter",
            "UAG_Moose_Pickup_Black_Splinter_Armoured",
            "UAG_Moose_Pickup_Comms_Black",
            "UAG_Moose_Pickup_Comms_Black_Armoured",
            "UAG_Moose_Pickup_HMG_Black",
            "UAG_Moose_Pickup_HMG_Black_Armoured",
            "UAG_Moose_Pickup_MMG_Black",
            "UAG_Moose_Pickup_MMG_Black_Armoured",
            "UAG_Moose_Pickup_MRL_Black",
            "UAG_Moose_Pickup_MRL_Black_Armoured"
        };
        weapons[] = {};
    };
};

#include "\z\UAG_Units\addons\uag_units_core\macros.hpp"
#include "Vehicles/_index.hpp"