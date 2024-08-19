class CfgPatches {
    class uag_units_uag_acre_patch {
        addonRootClass = "uag_units_uag";
        
        requiredAddons[] = {
            "uag_units_uag",
            "acre_main"
        };
        units[] = {
            "UAG_Contractor_Black_Splinter"
        };
        
        skipWhenMissingDependencies = 1;
    };
};

#include "macros.hpp"
#include "Units/_index.hpp"