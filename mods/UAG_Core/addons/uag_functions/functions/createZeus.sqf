/*
    Description:
	Creates a zeus module and sets the owner to the provided player.

    Parameter(s):
	Select 0 - OBJECT: The player to set as the owner of the zeus module.

    Returns:
	OBJECT: The created zeus module.

    Examples:
	[player] spawn UAG_fnc_createZeus;
*/

params ["_unit"];

// check if the unit is a valid player
if (!isPlayer _unit) exitWith { diag_log format ["ERROR: UAG_fnc_createZeus - %1 is not a valid player", _unit] };

private _group = createGroup sideLogic;
private _zeus = _group createUnit ["ModuleCurator_F", [0,0,0], [], 0, "NONE"];

missionNamespace setVariable [_zeusVarName, _zeus];

_zeus setVariable ["owner", _unit, true];
_zeus setVariable ["Addons", 3, true];
_zeus setVariable ["BIS_fnc_initModules_disableAutoActivation", false];
_zeus setCuratorCoef ["Place", 0];
_zeus setCuratorCoef ["Delete", 0];

_group deleteGroupWhenEmpty true;

if (!isMultiplayer && {!isNull findDisplay IDD_DISPLAY3DEN}) then {
	private _addons = ('true' configClasses (configFile >> "CfgPatches")) apply {configName _x};
	activateAddons _addons;
	removeAllCuratorAddons _zeus;
	_zeus addCuratorAddons _addons;
};

addMissionEventHandler ["HandleDisconnect", {
	private _zeus = missionNamespace getVariable _zeusVarName;
	if (!isNil "_zeus") then {
		if (!isNull _zeus) then {deleteVehicle _zeus};
		missionNamespace setVariable [_zeusVarName, nil];
	};
}];

_zeus