class CfgPatches {
    class uagservers {
        name = "uagservers";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.02;
        requiredAddons[] = {"ace_common"};
        author = "zuedev";
    };
};

class RscControlsGroupNoScrollbars;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
			h = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";
            class Controls: Controls {
                class ServerBrowser;
                class JoinMainServer: ServerBrowser {
                    idc = -1;
                    text = "UAG: LiberationPlus";
                    tooltip = "Connect to UAG LiberationPlus Server";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['198.244.229.201', 2312, '']";
                };
                // class JoinOtherServer: ServerBrowser {
                //     idc = -1;
                //     text = "Other Server";
                //     tooltip = "Connect to Other Server";
                //     y = "(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                //     onbuttonclick = "connectToServer ['127.0.0.1', 2312, '']";
                // };
            };
        };
    };
};