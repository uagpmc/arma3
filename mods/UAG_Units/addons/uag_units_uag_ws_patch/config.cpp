class CfgPatches {
    class uag_units_uag_ws_patch {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_units_uag_ws_patch";
        requiredAddons[] = {
            "uag_units_uag",
            "Air_F_lxWS_Heli_Light_02"
        };
        requiredVersion = 2.16;
        units[] = {
            "UAG_Orca_UP"
        };
        weapons[] = {};
        skipWhenMissingDependencies = 1;
    };
};

#include "macros.hpp"
#include "Vehicles/_index.hpp"