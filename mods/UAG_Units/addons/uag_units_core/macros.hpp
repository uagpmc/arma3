#define x2(x) x, x
#define x3(x) x, x, x
#define x4(x) x, x, x, x
#define x5(x) x, x, x, x, x
#define x6(x) x, x, x, x, x, x
#define x7(x) x, x, x, x, x, x, x
#define x8(x) x, x, x, x, x, x, x, x
#define x9(x) x, x, x, x, x, x, x, x, x
#define x10(x) x, x, x, x, x, x, x, x, x, x
#define x20(x) x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x

#define commonLinkedItems "UAG_Balaclava_With_Combat_Goggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
#define baseVanillaMedicalItems "FirstAidKit"
#define baseAceMedicalItems x10("ACE_elasticBandage"), x10("ACE_quikclot"), x2("ACE_morphine"), "ACE_epinephrine", "ACE_splint", "ACE_bloodIV_500", x2("ACE_tourniquet")
#define baseAceMiscItems "ACE_EarPlugs", "ACE_EntrenchingTool", "ACE_Flashlight_MX991", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_Banana"
#define extraAceMedicalKit x10("ACE_elasticBandage"), x10("ACE_quikclot"), x5("ACE_morphine"), x5("ACE_morphine"), x5("ACE_bloodIV"), x4("ACE_tourniquet"), x2("ACE_splint")

#define private 0
#define protected 1
#define public 2