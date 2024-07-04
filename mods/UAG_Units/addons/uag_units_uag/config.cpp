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
            "A3_Characters_F_Enoch",
            "A3_Soft_F_Offroad_01",
            "A3_Soft_F_Enoch_Offroad_01"
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
            "UAG_Pointman_Black_Splinter",
            "UAG_Crewman_Black_Splinter",
            "UAG_Pilot_Black_Splinter",
            "UAG_Offroad_Black",
            "UAG_Offroad_Black_Splinter",
            "UAG_Offroad_Comms_Black",
            "UAG_Wiesel_AA_Black",
            "UAG_Wiesel_AT_Black",
            "UAG_Wiesel_Cannon_Black"
        };
        weapons[] = {};
    };
};

#include "\z\UAG_Units\addons\uag_units_core\macros.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "Gear/_index.hpp"
#include "Units/_index.hpp"
#include "Weapons/_index.hpp"
#include "Vehicles/_index.hpp"