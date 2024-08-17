class CfgPatches {
    class uag_units_uag_ctab_patch {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_units_uag_ctab_patch";
        requiredAddons[] = {
            "uag_units_uag",
            "ctab_main"
        };
        requiredVersion = 2.16;
        units[] = {
            "UAG_Contractor_Black_Splinter"
        };
        weapons[] = {};
        skipWhenMissingDependencies = 1;
    };
};

#include "Units/_index.hpp"