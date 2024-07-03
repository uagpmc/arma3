/* Queries the UAG Loadout API for a loadout and executes it.
 *
 * Arguments:
 * 0: category <STRING> - The category ID of the loadout.
 * 1: loadout <STRING> - The loadout ID of the loadout.
 *
 * Return Value:
 * None
 *
 * Example:
 * 0 = ["uag", "rifleman"] spawn uag_fnc_loadout;
 */

params ["_category", "_loadout"];

0 = [
	"https://uagpmc.com/api/loadouts/" + _category + "/" + _loadout + "/sqf",
	{call (compile (_this select 1))} 
] spawn uag_fnc_fetch;