/* init.sqf
 *
 * Executed when mission is started (before briefing screen).
 *
 * More info: https://community.bistudio.com/wiki/Event_Scripts#init.sqf
 */

// end mission if not multiplayer
if (!isMultiplayer) exitWith {
	["singleplayer", false, 0, false, true] call BIS_fnc_endMission;
};

[] execVM "uag.sqf";

// setup respawn logic
createMarker ["respawn", respawn_logic];