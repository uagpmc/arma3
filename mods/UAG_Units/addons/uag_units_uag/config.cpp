class CfgPatches {
    class uag_units_uag {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_units_uag";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Characters_F_Exp",
            "A3_Characters_F_Exp_Headgear",
            "A3_Characters_F_Orange_Headgear",
            "A3_Characters_F_Enoch"
        };
        requiredVersion = 2.16;
        units[] = {
            "UAG_Survivor_Black_Splinter",
            "UAG_Contractor_Black_Splinter",
            "UAG_Grenadier_Black_Splinter",
            "UAG_Marksman_Black_Splinter",
            "UAG_Autorifleman_Black_Splinter",
            "UAG_Machinegunner_Black_Splinter",
            "UAG_Sniper_Black_Splinter",
            "UAG_Raider_Black_Splinter",
            "UAG_Pointman_Black_Splinter"
        };
        weapons[] = {};
    };
};

#include "macros.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "Gear/_index.hpp"
#include "Units/_index.hpp"
#include "Weapons/_index.hpp"