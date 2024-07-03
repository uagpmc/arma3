// run on dedicated server or player host
if (isServer) then {};

// run on all player clients incl. headless clients but not player host
if (!isServer) then {};

// run on all player clients incl. player host
if (hasInterface) then {
    #include "includes\uag_pacemaker_init.sqf"
};

// run on dedicated server only
if (isDedicated) then {};

// run on all player clients incl. player host and headless clients
if (!isDedicated) then {};

// run on headless clients and dedicated server
if (!hasInterface) then {};

// run on headless clients only
if (!hasInterface && !isDedicated) then {};