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
_newUnit setPosASL ((getPosASL respawn_logic) getPos [10 * sqrt random 1, random 360]);
