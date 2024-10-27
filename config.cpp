
class CfgPatches {
	class medical_21st_Items{
		units[] =
		{

		};
		weapons[] =
		{

			"21st_r_biofoam",
			"21st_r_medigel"

		};
		requiredVersion = 0.100000;
		requiredAddons[] = {"ace_interaction"};
	};
};

class ace_medical_treatment
{
	class Bandaging
	{
		class OPTRE_Biofoam;
		class OPTRE_Medigel;
		class medical_biofoam : OPTRE_Biofoam {};
		class r_medigel : OPTRE_Medigel {};
		class not_medical_biofoam : OPTRE_Biofoam {};
		class nr_medigel : OPTRE_Medigel {};
	};


};

class ace_medical_treatment_actions
{

	class OPTRE_Biofoam;
	class OPTRE_Medigel;

	class medical_biofoam : OPTRE_Biofoam
	{
		displayName = "[R] Biofoam";
		consumeItem = 0;
		medicRequired = "ace_medical_treatment_medicIV";
		callbackSuccess = "F21st_fnc_treatmentBandageAndPainReduction3";
		items[] =
		{
			"medical_21st_biofoam"
		};
	};
	class r_medigel : OPTRE_Medigel
	{
		displayName = "[R] Medigel";
		consumeItem = 0;
		medicRequired = "ace_medical_treatment_medicIV";
		callbackSuccess = "F21st_fnc_treatmentBandageAndPainReduction3";
		items[] =
		{
			"21st_r_medigel"
		};
	};
	class not_medical_biofoam : OPTRE_Biofoam
	{
		displayName = "Biofoam";
		callbackSuccess = "F21st_fnc_treatmentBandageAndPainReduction2";
		items[] =
		{
			"21st_biofoam"
		};
	};
	class nr_medigel : OPTRE_Medigel
	{
		displayName = "Medigel";
		callbackSuccess = "F21st_fnc_treatmentBandageAndPainReduction2";
		items[] =
		{
			"21st_medigel"
		};
	};

};




class cfgWeapons
{

	//medical
	class OPTRE_Medigel;
	class OPTRE_Biofoam;

	class medical_21st_biofoam : OPTRE_Biofoam
	{
		scope = 2;
		author = "21st Aux";
		displayName = "[21st](R) Biofoam";
	};
	class r_medigel_21st : OPTRE_Medigel
	{
		scope = 2;
		author = "21st Aux";
		displayName = "[21st](R) Medigel";
	};
	class biofoam_21st : OPTRE_Biofoam
	{
		scope = 2;
		author = "21st Aux";
		displayName = "[21st] Biofoam";
	};
	class medigel_21st : OPTRE_Medigel
	{
		scope = 2;
		author = "21st Aux";
		displayName = "[21st] Medigel";
	};



};


