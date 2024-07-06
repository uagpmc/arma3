_loadouts = ("(configname _x isKindOf 'Man') && (getText (_x >> 'faction') == '" + _faction + "')" configClasses (configFile >> "CfgVehicles")) apply {configName _x};

{
	_loadoutName = getText (configFile >> "CfgVehicles" >> _x >> "displayName");
	_loadoutClass = _x;
	_globallyApply = false;

	[_loadoutName, _loadoutClass, _globallyApply] call ace_arsenal_fnc_addDefaultLoadout;
} forEach _loadouts;