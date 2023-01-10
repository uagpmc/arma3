url_fetch_callback = {
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

uag_loadout = {
    _loadout_id = _this;

    0 = [
        "https://api.uagpmc.com/loadouts/uag/" + _loadout_id + ".sqf",
        {call (compile (_this select 1))} 
    ] spawn url_fetch_callback;
};

0 = [
    "https://api.uagpmc.com/loadouts/uag.txt",
    {uag_public_loadouts = (_this select 1) splitString ",";} 
] spawn url_fetch_callback;

[arsenal_box, true] call ace_arsenal_fnc_initBox;

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
                    _this select 2 spawn uag_loadout;
                },
                {true},
                {},
                _x
            ] call ace_interact_menu_fnc_createAction;

            _actions pushBack [_action, [], _target];
        } forEach uag_public_loadouts;

        _actions;
    }
] call ace_interact_menu_fnc_createAction;

[arsenal_box, 0, ["ACE_MainActions"], uag_loadouts_ace_action] call ace_interact_menu_fnc_addActionToObject;