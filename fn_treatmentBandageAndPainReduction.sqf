
params ["_caller", "_target", "_selection", "_className"];

// call ACE's bandage function for selection healing
_this call kat_breathing_fnc_treatmentAdvanced_chestSeal;

// execute local function to manage pain
[_target, _className] remoteExecCall ["F21_fnc_treatmentBandageAndPainReductionLocal", _target];
