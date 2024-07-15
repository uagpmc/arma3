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

// Actually make the Player Invulnerable for 60 seconds
[_player] spawn {
	params ["_player"];

	_player allowDamage false;
	_player setStamina ((getStamina _player) / 3);
	sleep 60;
	_player allowDamage true;
};
