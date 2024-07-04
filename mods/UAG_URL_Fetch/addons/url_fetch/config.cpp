class CfgPatches {
    class url_fetch {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "url_fetch";
        requiredAddons[] = {};
        requiredVersion = 2.16;
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions {
    class UAG {
        class UAG {
            class urlFetch {
                file = "\z\UAG_URL_Fetch\addons\url_fetch\functions\urlFetch.sqf";
            };
        };
    };
};