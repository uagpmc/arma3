/* initServer.sqf
 *
 * Executed only on server when mission is started.
 *
 * More info: https://community.bistudio.com/wiki/Event_Scripts#initServer.sqf
 */

// spawn arsenal at respawn marker logic
0 = [getPosASL respawn_logic] spawn uag_fnc_createArsenal;