/*
 * Applies a loadout to a unit using a class name string
 *
 * Arguments:
 * 0: unit <OBJECT> - The unit to apply the loadout to
 * 1: loadout <STRING> - The loadout class name to apply
 *
 * Return Value:
 * None
 *
 * Example:
 * 0 = [player, "UAG_Contractor_Black_Splinter"] spawn uag_fnc_applyLoadout;
 */

params ["_unit", "_loadout"];

_unit setUnitLoadout _loadout;