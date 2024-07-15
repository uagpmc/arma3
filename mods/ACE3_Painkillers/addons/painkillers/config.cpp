class CfgPatches
{
    class painkillers
    {
        authors[] = {"zuedev","fluffy"};
        authorUrl = "https://uagpmc.com";
        name = "painkillers";
        units[] = {};
        weapons[] = {};
        requireAddons[] = {"ace_medical_treatment"};
    };
};

class CfgWeapons 
{
    class CBA_MiscItem_ItemInfo;
    class ACE_morphine;

    class UAGPMC_Painkiller: ACE_morphine 
    {
        displayName = "Painkiller";
        author = "Fluffy";
        model = "\z\ACE3_Painkillers\addons\painkillers\data\Painkiller.p3d";
        picture = "\z\ACE3_Painkillers\addons\painkillers\data\PainkillerIcon_ca.paa";
        descriptionShort = "Used to Treat Pain";
        descriptionUse = "Tablets used to cure Slight Pain, 1 out of 10 Operators Recommend!";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\z\ACE3_Painkillers\addons\painkillers\data\painkiller_ca.paa"};
        
        class ItemInfo: CBA_MiscItem_ItemInfo 
        {
            mass = 0.875;
        };
    };
};

class ace_medical_treatment 
{
    class Medication
    {
        class Morphine;

        class UAGPMC_Painkiller: Morphine
        {
            painReduce = 0.2;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 600;
            timeTillMaxEffect = 120;
            maxDose = 5;
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };
    };
};

class ace_medical_treatment_actions 
{
    class Morphine;

    class UAGPMC_Painkiller: Morphine 
    {
        allowedSelections[] = {"Head"};
        displayName = "Use Painkiller";
        displayNameProgress = "Using Painkiller";
        items[] = {"UAGPMC_Painkiller"};
    };
};
