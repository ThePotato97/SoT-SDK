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

// BlueprintGeneratedClass BP_BountyRewardSkull.BP_BountyRewardSkull_C
// 0x0000 (0x0768 - 0x0768)
class ABP_BountyRewardSkull_C : public ABountyReward
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_BountyRewardSkull.BP_BountyRewardSkull_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
