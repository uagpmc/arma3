params ["_position", "_boxClass"];

if (isNil "_boxClass") then {
	_boxClass = "C_IDAP_supplyCrate_F";
};

_arsenal = _boxClass createVehicle _position;

[_arsenal, true] call ace_arsenal_fnc_initBox;