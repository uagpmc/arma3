params ["_oldUnit", "_killer", "_respawn", "_respawnDelay"];

// if respawn is type 3 (or "BASE"), tell the player they will respawn in _respawnDelay seconds
_youHaveDied = "YOU HAVE DIED!";
_respawnIn = format ["You will respawn in %1 seconds...", _respawnDelay];

[[
	[_youHaveDied, "<t align = 'center' color='#ff0000'>%1</t><br/>"],
	[_respawnIn, "<t align = 'center'>%1</t>", 60]
]] spawn BIS_fnc_typeText;
