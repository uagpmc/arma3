/*
    Description:
	Creates an arsenal box and adds the UAG Loadouts action to it.

    Parameter(s):
	Select 0 - ARRAY: The position to create the arsenal box at.
	Select 1 - STRING: The class name of the box to create.

    Returns:
	Nothing.

    Examples:
	[position player] spawn uag_fnc_createArsenal;
*/

params ["_position", "_boxClass"];

if (isNil "_boxClass") then {
	_boxClass = "C_IDAP_supplyCrate_F";
};

_arsenal = _boxClass createVehicle _position;

// does ACE exist?
if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
	// init arsenal box
	[_arsenal, true] call ace_arsenal_fnc_initBox;

	// prep loadouts action
	uag_loadouts_ace_action = [
		"UAGLoadoutsSystem",
		"UAG Loadouts System",
		"",
		{
			params ["_target", "_player", "_params"];

			["UAG"] spawn uag_fnc_showLoadoutDialog;
		},
		{true},
		{}
	] call ace_interact_menu_fnc_createAction;

	// add loadouts action to our box
	[_arsenal, 0, ["ACE_MainActions"], uag_loadouts_ace_action] call ace_interact_menu_fnc_addActionToObject;
} else {
	// use vanilla arsenal
	["AmmoboxInit", [_arsenal, true]] call BIS_fnc_arsenal;
};