/*
 * Function to create an arsenal box and add the UAG Loadouts action to it
 *
 * Arguments:
 * 0: position <ARRAY> - The position to create the arsenal box at
 * 1: boxClass <STRING> - The class name of the box to create
 *
 * Return Value:
 * None
 *
 * Example:
 * 0 = [position player] spawn uag_fnc_createArsenal;
 */

params ["_position", "_boxClass"];

if (isNil "_boxClass") then {
	_boxClass = "C_IDAP_supplyCrate_F";
};

_arsenal = _boxClass createVehicle _position;

[_arsenal, true] call ace_arsenal_fnc_initBox;

// prep loadouts action
uag_loadouts_ace_action = [
	"UAGLoadoutsSystem",
	"UAG Loadouts System",
	"",
	{
		params ["_target", "_player", "_params"];

		0 = ["uag"] spawn uag_fnc_loadoutDialog;
	},
	{true},
	{}
] call ace_interact_menu_fnc_createAction;

// add loadouts action to our box
[_arsenal, 0, ["ACE_MainActions"], uag_loadouts_ace_action] call ace_interact_menu_fnc_addActionToClass;