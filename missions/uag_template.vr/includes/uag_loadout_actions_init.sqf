/* UAG Loadouts
 *
 * This script is used to fetch loadouts from the UAG website and apply them to the player.
 */

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

// add loadouts action to all supply crates (with inheritance)
["B_supplyCrate_F", 0, ["ACE_MainActions"], uag_loadouts_ace_action, true] call ace_interact_menu_fnc_addActionToClass;