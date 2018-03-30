#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShipLanterns.BP_SmallShipLanterns_C
// 0x0040 (0x04A8 - 0x0468)
class ABP_SmallShipLanterns_C : public AActor
{
public:
	class UChildActorComponent*                        Railing_Wheel;                                            // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        BottomDeckFront;                                          // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        BottomDeckBrig;                                           // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        CabinMapTable;                                            // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Railing_BowRightFront;                                    // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        Railing_BowLeftFront;                                     // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        CabinQuestTable;                                          // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_SmallShipLanterns.BP_SmallShipLanterns_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
