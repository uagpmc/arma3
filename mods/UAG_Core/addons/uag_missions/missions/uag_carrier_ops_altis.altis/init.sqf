/* init.sqf
 *
 * Executed when mission is started (before briefing screen).
 *
 * More info: https://community.bistudio.com/wiki/Event_Scripts#init.sqf
 */

// setup respawn logic
createMarker ["respawn", respawn_logic];