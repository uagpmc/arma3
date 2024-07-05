/*
 *	UAG_fnc_handleItem
 *	
 *	Handles whatever item is double clicked in the listbox.
 *	
 *	Parameters:
 *	0: ctrl <CONTROL> = listbox
 *	1: selectedIndex <INT> = index of selected item
 *
 *	Return Value:
 *	None
 *
 *	examples:
 *	_ctrl ctrlSetEventHandler ["LBDblClick", "_this call uag_fnc_handleItem"];
*/


params ["_ctrl", "_selectedIndex"];

_idc = ctrlIDC _ctrl;
_text = lbData [_idc, _selectedIndex];
if (_text isEqualTo "UAG_Ketamine") then {
	player spawn UAG_fnc_injectKetamine;
};
