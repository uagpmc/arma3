/*
    Description:
	Applies a loadout to a unit using a class name string.

    Parameter(s):
	Select 0 - OBJECT: The unit to apply the loadout to.
	Select 1 - STRING: The loadout class name to apply.

    Returns:
	Nothing.

    Examples:
	[player, "UAG_Contractor_Black_Splinter"] spawn uag_fnc_applyLoadout;
*/

params ["_unit", "_loadout"];

_unit setUnitLoadout _loadout;