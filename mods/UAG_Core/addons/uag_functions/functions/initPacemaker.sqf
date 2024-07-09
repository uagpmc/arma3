/*
    Description:
	Creates a pacemaker that wakes up the player if they are unconscious.

    Parameter(s):
	None.

    Returns:
	Nothing.

    Examples:
	[] spawn uag_fnc_initPacemaker;
*/

[] spawn {
	while {true} do {
		if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
			// if ace is loaded, check if the player is unconscious and wake them up
			if (isPlayer player && alive player && player getVariable ["ace_isUnconscious", false]) then {
				[player, false, 0, true] call ace_medical_fnc_setUnconscious;
			};
		};
		
		sleep ([5, 30] call BIS_fnc_randomInt);
	}
};