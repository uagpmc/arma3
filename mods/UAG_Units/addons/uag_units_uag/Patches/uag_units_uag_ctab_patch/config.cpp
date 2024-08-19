class CfgPatches {
    class uag_units_uag_ctab_patch {
        addonRootClass = "uag_units_uag";
        
        requiredAddons[] = {
            "uag_units_uag",
            "ctab_main"
        };
        units[] = {
            "UAG_Contractor_Black_Splinter"
        };
        
        skipWhenMissingDependencies = 1;
    };
};

#include "Units/_index.hpp"