#define BIOFOAM_PAIN_REDUCTION -0.4
#define MEDIGEL_PAIN_REDUCTION -0

params ["_target", "_className"];

private _painReduction = if (_className == "not_medical_biofoam" or _className == "medical_biofoam") then {
    BIOFOAM_PAIN_REDUCTION
} else {
    MEDIGEL_PAIN_REDUCTION
};

//private _pain = ((_target getVariable ["ace_medical_pain", 0]) - _painReduction) max 0;
//_target setVariable ["ace_medical_pain", _pain, true];

[_target, _painReduction] call ace_medical_fnc_adjustPainLevel;
