/* Sends a GET request to the specified URL and executes the specified script with the result.
 *
 * The script is passed the URL and the result as parameters, and the optional arguments.
 *
 * Arguments:
 * 0: url <STRING>
 * 1: script <CODE/STRING>
 * 2: args <ANY> (optional)
 *
 * Return Value:
 * None
 *
 * Example:
 * 0 = ["https://uagpmc.com/api", {systemChat format ["%1", _this]}] spawn uag_fnc_fetch;
 */

params ["_url", "_script", "_args"];

if (isNil "_args") then {_args = []};

if (isNil "url_fetch_queue") then {
	url_fetch_queue = [_this];
	{
		_script = _x select 1;
		_args = _x select 2;
		if (isNil "_args") then {_args = []};
		
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
			if (typeName _script == typeName {}) then {
				[_url, _res, _args] spawn _script;
			} else {
				[_url, _res, _args] execVM _script;
			};
		};
	} forEach url_fetch_queue;
	url_fetch_queue = nil;
} else {
	url_fetch_queue set [count url_fetch_queue, _this];
};