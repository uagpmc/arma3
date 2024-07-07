/*
    Description:
	Spawns a dialog to select a loadout from a category.

    Parameter(s):
	Select 0 - STRING: The faction class name to show loadouts for.

    Returns:
	Nothing.

    Examples:
	["UAG"] spawn uag_fnc_showLoadoutDialog;
*/
 
params ["_faction"];

if (isNil "_faction") then {
	if (isClass (configFile >> "CfgPatches" >> "uag_units_core")) then {
		_faction = "UAG";
	} else {
		_faction = "BLU_F";
	};
};

_loadouts = ("(configname _x isKindOf 'Man') && (getText (_x >> 'faction') == '" + _faction + "')" configClasses (configFile >> "CfgVehicles")) apply {configName _x};

_loadoutsPretty = [];

{
	_loadoutsPretty pushBack (getText (configFile >> "CfgVehicles" >> _x >> "displayName"));
} forEach _loadouts;

[
	// title
	"UAG Loadouts System",
	// content
	[
		[
			"LIST",
			"Loadouts",
			[
				_loadouts,
				_loadoutsPretty
			]
		]
	],
	// on confirm
	{
		_loadout = _this select 0 select 0;

		hint format ["Loading %1", _loadout];

		[player, _loadout] spawn uag_fnc_applyLoadout;
	},
	// on cancel
	{
		hint "Cancelled";
	}
] call zen_dialog_fnc_create;