class CfgPatches {
    class uag_enable_debug_console {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_enable_debug_console";
        requiredAddons[] = {};
        requiredVersion = 2.16;
        units[] = {};
        weapons[] = {};
    };
};

delete enableDebugConsole;
enableDebugConsole[] = { "76561198048656902" };