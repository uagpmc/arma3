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
        class uag_carrier_ops_altis {
            directory = "z\UAG_Core\addons\uag_missions\missions\uag_carrier_ops_altis.altis";
        };
        class uag_destroyer_ops_altis {
            directory = "z\UAG_Core\addons\uag_missions\missions\uag_destroyer_ops_altis.altis";
        };
    };
};