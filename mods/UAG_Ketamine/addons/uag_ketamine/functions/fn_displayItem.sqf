/*
 *	UAG_fnc_displayItem
 *	
 *	Displays the selected item in the listbox.
 *	Mainly for Debug use.
 *	
 *	Parameters:
 *	0: ctrl <CONTROL> = listbox
 *	1: selectedIndex <INT> = index of selected item
 *
 *	Return Value:
 *	None
 *
 *	examples:
 *	_ctrl ctrlSetEventHandler ["LBSelChanged", "_this call uag_fnc_displayItem"];
*/


params ["_ctrl", "_selectedIndex"];

_idc = ctrlIDC _ctrl;
_data = format ["Data\n%1\n",lbData [_idc, _selectedIndex]];
_text = format ["Text\n%1\n",lbText [_idc, _selectedIndex]];
_value = format ["Value\n%1\n",lbValue [_idc, _selectedIndex]];
_pic = format ["Picture\n%1\n",lbPicture [_idc, _selectedIndex]]; 
hint format["Selected Index: %1\n%2%3%4%5",_selectedIndex,_data,_text,_value,_pic];
