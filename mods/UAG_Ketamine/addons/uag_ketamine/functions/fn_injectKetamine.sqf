/*
 *	UAG_fnc_injectKetamine
 *	
 *	Injects the player with Ketamine.
 *	
 *
 *	Parameters:
 *	0: _player <PLAYER> = player
 *
 *	Return Value:
 *	None
 *
 *	examples:
 *	_player call UAG_fnc_injectKetamine;
*/


params ["_player"];

// Amount of Ketamine in System
_ketAmount = _player getVariable ["uag_ketamine_amount", 0];
// Max total Ketamine the Player can have in their system at one time
_maxKetAmount = _player getVariable ["uag_ketamine_max", 1];

player removeItem "UAG_Ketamine";

if (_ketAmount >= _maxKetAmount) then {
	
	hint "Ah Shit I had too much of that. I'm out of it.";
	_player setUnconscious true;

} else {
	
	hint "Oh yeah I feel Good.";
	_ketAmount = _ketAmount + 1;
	_player setVariable ["uag_ketamine_amount", _ketAmount];

	// Actually make the Player Invulnerable for 60 seconds
	[_player] spawn {
		params ["_player"];

		_player allowDamage false;
		_player setStamina ((getStamina _player) / 3);
		sleep 60;
		_player allowDamage true;
	};

	// Just a lil thang that resets the Ketamine Count
	[_player] spawn {
		params ["_player"];
		sleep 3600;
		// Set back to 0
		_ketAmount = _player getVariable ["uag_ketamine_amount"];
		_player setVariable ["uag_ketamine_amount", (_ketAmount - 1)];
	};

};
|||||||
=======
/*
 *	UAG_fnc_injectKetamine
 *	
 *	Injects the player with Ketamine.
 *	
 *
 *	Parameters:
 *	0: _player <PLAYER> = player
 *
 *	Return Value:
 *	None
 *
 *	examples:
 *	_player call UAG_fnc_injectKetamine;
*/


params ["_player"];

// Amount of Ketamine in System
_ketAmount = _player getVariable ["uag_ketamine_amount", 0];
// Max total Ketamine the Player can have in their system at one time
_maxKetAmount = _player getVariable ["uag_ketamine_max", 1];

player removeItem "UAG_Ketamine";

if (_ketAmount >= _maxKetAmount) then {
	
	hint "Ah Shit I had too much of that. I'm out of it.";
	_player setUnconscious true;

} else {
	
	hint "Oh yeah I feel Good.";
	_ketAmount = _ketAmount + 1;
	_player setVariable ["uag_ketamine_amount", _ketAmount];
	
	// Just a lil thang that resets the Ketamine Count
	[] spawn {
		sleep 3600;
		// Set back to 0
		_ketAmount = _player getVariable ["uag_ketamine_amount"];
		_player setVariable ["uag_ketamine_amount", (_ketAmount - 1)];
	};

};
>>>>>>> main
|||||||
=======
/*
 *	UAG_fnc_injectKetamine
 *	
 *	Injects the player with Ketamine.
 *	
 *
 *	Parameters:
 *	0: _player <PLAYER> = player
 *
 *	Return Value:
 *	None
 *
 *	examples:
 *	_player call UAG_fnc_injectKetamine;
*/


params ["_player"];

// Amount of Ketamine in System
_ketAmount = _player getVariable ["uag_ketamine_amount", 0];
// Max total Ketamine the Player can have in their system at one time
_maxKetAmount = _player getVariable ["uag_ketamine_max", 1];

player removeItem "UAG_Ketamine";

if (_ketAmount >= _maxKetAmount) then {
	
	hint "Ah Shit I had too much of that. I'm out of it.";
	_player setUnconscious true;

} else {
	
	hint "Oh yeah I feel Good.";
	_ketAmount = _ketAmount + 1;
	_player setVariable ["uag_ketamine_amount", _ketAmount];
	
	// Just a lil thang that resets the Ketamine Count
	[] spawn {
		sleep 3600;
		// Set back to 0
		_ketAmount = _player getVariable ["uag_ketamine_amount"];
		_player setVariable ["uag_ketamine_amount", (_ketAmount - 1)];
	};

};
>>>>>>> main
