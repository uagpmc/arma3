// get them functions
uag_fnc_libUrlFetch = {
    if (isNil "url_fetch_queue") then {
        url_fetch_queue = [_this];
        {
            _url = _x select 0;
            _scr = _x select 1;
            waitUntil {
                if ("url_fetch" callExtension format [
                    "%1",
                    _url
                ] == "OK") exitWith {true};
                false
            };
            private "_res";
            waitUntil {
                _res = "url_fetch" callExtension "OK";
                if (_res != "WAIT") exitWith {true};
                false
            };
            if (_res == "ERROR") then {
                0 = [
                    _url,
                    "url_fetch" callExtension "ERROR"
                ] spawn url_fetch_error;
            } else {
                if (typeName _scr == typeName {}) then {
                    [_url, _res] spawn _scr;
                } else {
                    [_url, _res] execVM _scr;
                };
            };
        } forEach url_fetch_queue;
        url_fetch_queue = nil;
    } else {
        url_fetch_queue set [count url_fetch_queue, _this];
    };
};

uag_fnc_getLoadout = {
    params ["_category_id", "_loadout_id"];

    0 = [
        "https://api.uagpmc.com/loadouts/" + _category_id + "/" + _loadout_id + ".sqf",
        {call (compile (_this select 1))} 
    ] spawn uag_fnc_libUrlFetch;
};

// our main interval loop every 10 seconds
0 = [] spawn {
  while {true} do {
    // get our loadouts from the api
    0 = [
        "https://api.uagpmc.com/loadouts/uag.txt",
        {uag_public_loadouts = (_this select 1) splitString ",";} 
    ] spawn uag_fnc_libUrlFetch;

    sleep 10;
  }
};

// add arsenal to arsenal box
[arsenal_box, true] call ace_arsenal_fnc_initBox;

// prep loadouts action
uag_loadouts_ace_action = [
    "UAGLoadouts",
    "UAG Loadouts",
    "",
    {},
    {true},
    {
        params ["_target", "_player", "_params"];

        private _actions = [];

        {
            _name = _x;

            private _action = [
                _x,
                _x,
                "",
                {
                    ["uag", _this select 2] spawn uag_fnc_getLoadout;
                },
                {true},
                {},
                _x
            ] call ace_interact_menu_fnc_createAction;

            _actions pushBack [_action, [], _target];
        } forEach uag_public_loadouts;

        _customLoadoutAction = [
            "custom",
            "custom",
            "",
            {
                [
                    "Custom Loadout",
                    [
                        [
                            "EDIT",
                            "Loadout",
                            [
                                "uag/rifleman"
                            ],
                            true
                        ]
                    ],
                    {
                        _diagResult = _this select 0 select 0;
                        
                        (_diagResult splitString "/") spawn uag_fnc_getLoadout;
                    }
                ] call zen_dialog_fnc_create;
            },
            {true},
            {},
            "custom"
        ] call ace_interact_menu_fnc_createAction;

        _actions pushBack [_customLoadoutAction, [], _target];

        _actions;
    }
] call ace_interact_menu_fnc_createAction;

// add loadouts action to arsenal box
[arsenal_box, 0, ["ACE_MainActions"], uag_loadouts_ace_action] call ace_interact_menu_fnc_addActionToObject;