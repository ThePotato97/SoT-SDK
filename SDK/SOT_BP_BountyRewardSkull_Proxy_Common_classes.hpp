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

// BlueprintGeneratedClass BP_BountyRewardSkull_Proxy_Common.BP_BountyRewardSkull_Proxy_Common_C
// 0x0000 (0x0868 - 0x0868)
class ABP_BountyRewardSkull_Proxy_Common_C : public ABP_BountyRewardSkull_Proxy_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_BountyRewardSkull_Proxy_Common.BP_BountyRewardSkull_Proxy_Common_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
