/* UAG Pacemaker
 *
 * Counteracts the negative side of ACE Medical unconsciousness by making the player wake up after a random amount of time.
 *
 * This is a temporary fix until UAG's ACE3 Medical module is released.
 */

0 = [] spawn {
	while {true} do {
		if (isPlayer player && alive player && player getVariable ["ace_isUnconscious", false]) then {
			[player, false, 0, true] call ace_medical_fnc_setUnconscious;
		};
		
		sleep ([5, 30] call BIS_fnc_randomInt);
	}
};