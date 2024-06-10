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
        units[] = {};
        weapons[] = {};
    };
};

#include "Vehicles/_index.hpp"