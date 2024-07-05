/* 
 * Counteracts the negative side of ACE Medical unconsciousness by making the player wake up after a random amount of time.
 *
 * This is a temporary fix until UAG's ACE3 Medical module is released.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * 0 = [] spawn uag_fnc_initPacemaker;
 */

[] spawn {
	while {true} do {
		if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
			// if ace is loaded, check if the player is unconscious and wake them up
			if (isPlayer player && alive player && player getVariable ["ace_isUnconscious", false]) then {
				[player, false, 0, true] call ace_medical_fnc_setUnconscious;

				// reset the player's animation
				[player, false] call ace_medical_engine_fnc_setUnconsciousAnim;
			};
		};
		
		sleep ([5, 30] call BIS_fnc_randomInt);
	}
};