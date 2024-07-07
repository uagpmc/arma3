if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
	_faction = "BLU_F";

	if (isClass (configFile >> "CfgPatches" >> "uag_units_core")) then {
		_faction = "UAG";
	};

	_loadouts = ("(configname _x isKindOf 'Man') && (getText (_x >> 'faction') == '" + _faction + "')" configClasses (configFile >> "CfgVehicles")) apply {configName _x};

	{
		_loadoutName = getText (configFile >> "CfgVehicles" >> _x >> "displayName");
		_loadoutData = getUnitLoadout _x;
		_globallyApply = false;

		[_loadoutName, _loadoutData, _globallyApply] call ace_arsenal_fnc_addDefaultLoadout;
	} forEach _loadouts;
};