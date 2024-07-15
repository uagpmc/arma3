/*
 *	UAG_fnc_inventoryHandler
 *	
 *	This puts an Event handler on each Container of the Player Inventory
 *	when the player opens the Interface.
 *
 *	Parameters:
 *	None
 *
 *	Return Value:
 *	None
 *
 *	examples:
 *	0 = [] spawn UAG_fnc_inventoryHandler;
*/

// Handle
uag_inventory = [] spawn {
	while {true} do {
		waituntil {!(isnull (finddisplay 602))};
		//hint "Inventory has been opened\nAdding event to uniform listbox";
		{
			((findDisplay 602) displayCtrl _x) ctrlseteventhandler ["lbdblclick", "_this spawn UAG_fnc_handleItem"];
		} forEach [633, 638, 619];
		waituntil {isnull (finddisplay 602)};
	}
};




// Larrow Example

//terminate handle;
//handle = [] spawn {
//   fnc_test = { 
//	   _idc = ctrlIDC (_this select 0);
//	   _selectedIndex = _this select 1;
//	   _data = format ["Data\n%1\n",lbData [_idc, _selectedIndex]];
//	   _text = format ["Text\n%1\n",lbText [_idc, _selectedIndex]];
//	   _value = format ["Value\n%1\n",lbValue [_idc, _selectedIndex]];
//	   _pic = format ["Picture\n%1\n",lbPicture [_idc, _selectedIndex]]; 
//	   hint format["Selected Uniform Index: %1\n%2%3%4%5",_selectedIndex,_data,_text,_value,_pic];
//	   false
//   };
//   while {true} do {
//	   waituntil {!(isnull (finddisplay 602))};
//	   hint "Inventory has been opened\nAdding event to uniform listbox";
//	   ((findDisplay 602) displayCtrl 619) ctrlSetEventHandler ["LBSelChanged", "_this call fnc_test"];
//	   waituntil {isnull (finddisplay 602)};
//   };
//};
