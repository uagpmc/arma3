class CfgPatches {
    class uag_functions {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_functions";
        requiredAddons[] = {};
        requiredVersion = 2.16;
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions {
    class UAG {
        class UAG {
            class createArsenal {
                file = "\z\UAG_Core\addons\uag_functions\functions\createArsenal.sqf";
            };
            class applyLoadout {
                file = "\z\UAG_Core\addons\uag_functions\functions\applyLoadout.sqf";
            };
            class showLoadoutDialog {
                file = "\z\UAG_Core\addons\uag_functions\functions\showLoadoutDialog.sqf";
            };
            class initPacemaker {
                file = "\z\UAG_Core\addons\uag_functions\functions\initPacemaker.sqf";
                postInit = 1;
            };
        };
    };
};
