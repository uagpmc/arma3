/* Spawns a dialog to select a loadout from a category
 *
 * Arguments:
 * 0: unit <OBJECT> - The unit to show the dialog and apply the loadout to
 * 1: category <STRING> - The category to show the loadouts from
 *
 * Return Value:
 * None
 *
 * Example:
 * 0 = ["uag"] spawn uag_fnc_loadoutDialog;
 */
 
params ["_category"];

if (isNil "_category") then {_category = "uag";};

// throw error if unit is not a player
0 = [
	"https://uagpmc.com/api/loadouts/" + _category + "/txt",
	{
		params ["_url", "_data", "_args"];

		_loadouts = _data splitString ",";
		_category = _args select 0;

		[
			"UAG Loadouts System",
			[
				[
					"LIST",
					"Loadouts",
					[
						_loadouts
					]
				]
			],
			{
				_loadout = _this select 0 select 0;
				_category = _this select 1 select 0;

				hint format ["Loading %1", _loadout];

				0 = [_category, _loadout] spawn uag_fnc_loadout;
			},
			{
				hint "Cancelled";
			},
			[_category]
		] call zen_dialog_fnc_create;
	},
	[_category]
] spawn uag_fnc_fetch;
