/* Spawns a dialog to select a loadout from a category
 *
 * Arguments:
 * 0: 
 *
 * Return Value:
 * None
 *
 * Example:
 * 0 = ["UAG"] spawn uag_fnc_showLoadoutDialog;
 */
 
params ["_faction"];

if (isNil "_faction") then {_faction = "UAG";};

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