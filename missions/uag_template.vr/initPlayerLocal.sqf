/* initPlayerLocal.sqf
 *
 * Executed locally when player joins mission (includes both mission start and JIP).
 *
 * More info: https://community.bistudio.com/wiki/Event_Scripts#initPlayerLocal.sqf
 */

params ["_player", "_didJIP"];

// default player traits
_player setUnitTrait ["Engineer", true];
_player setUnitTrait ["ExplosiveSpecialist", true];
_player setUnitTrait ["Medic", true];
_player setUnitTrait ["UAVHacker", true];

#include "includes\uag_pacemaker_init.sqf"