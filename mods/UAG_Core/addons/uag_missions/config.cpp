class CfgPatches {
    class uag_missions {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_missions";
        requiredAddons[] = {};
        requiredVersion = 2.16;
        units[] = {};
        weapons[] = {};
    };
};

class CfgMissions {
    class MPMissions {
        class uag_template {
            directory = "\z\UAG_Core\addons\uag_missions\missions\uag_template.vr";
        };
    };
};