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
        class uag_zeus_altis {
            directory = "\z\UAG_Core\addons\uag_missions\missions\uag_zeus.altis";
        };
        class uag_zeus_yulakia {
            directory = "\z\UAG_Core\addons\uag_missions\missions\uag_zeus.yulakia";
        };
    };
};