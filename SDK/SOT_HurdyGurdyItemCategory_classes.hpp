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

// BlueprintGeneratedClass HurdyGurdyItemCategory.HurdyGurdyItemCategory_C
// 0x0000 (0x0070 - 0x0070)
class UHurdyGurdyItemCategory_C : public UInstrumentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass HurdyGurdyItemCategory.HurdyGurdyItemCategory_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
