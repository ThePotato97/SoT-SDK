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

// BlueprintGeneratedClass BP_Lantern_SmallShip_Cabin_Quest.BP_Lantern_SmallShip_Cabin_Quest_C
// 0x0000 (0x0661 - 0x0661)
class ABP_Lantern_SmallShip_Cabin_Quest_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Lantern_SmallShip_Cabin_Quest.BP_Lantern_SmallShip_Cabin_Quest_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif