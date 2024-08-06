/* onPlayerRespawn.sqf
 *
 * Executed when player is killed in singleplayer or in multiplayer mission.
 *
 * More info: https://community.bistudio.com/wiki/Event_Scripts#onPlayerRespawn.sqf
 */
 
params ["_newUnit", "_oldUnit", "_respawn", "_respawnDelay"];

// player is spawning for the first time
if (isNil "_oldUnit") then {};

// set the unit's position randomly within a radius of the respawn logic
_newUnit setPosASL ((getPosASL respawn_logic) getPos [5 * sqrt random 1, random 360]);
_newUnit setPosASL [getPosASL _newUnit select 0, getPosASL _newUnit select 1, getPosASL respawn_logic select 2];
