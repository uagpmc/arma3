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
            "UAG_Survivor",
            "UAG_Contractor",
            "UAG_Grenadier",
            "UAG_Marksman",
            "UAG_Autorifleman",
            "UAG_Machinegunner",
            "UAG_Sniper",
            "UAG_Raider",
            "UAG_Pointman"
        };
        weapons[] = {};
    };
};

#include "macros.hpp"
#include "Gear/_index.hpp"
#include "Units/_index.hpp"
#include "Weapons/_index.hpp"