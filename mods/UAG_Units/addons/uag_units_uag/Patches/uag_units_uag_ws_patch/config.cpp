class CfgPatches {
    class uag_units_uag_ws_patch {
        addonRootClass = "uag_units_uag";
        
        requiredAddons[] = {
            "uag_units_uag",
            "Air_F_lxWS_Heli_Light_02"
        };
        units[] = {
            "UAG_Orca_UP"
        };
        
        skipWhenMissingDependencies = 1;
    };
};

#include "macros.hpp"
#include "Vehicles/_index.hpp"