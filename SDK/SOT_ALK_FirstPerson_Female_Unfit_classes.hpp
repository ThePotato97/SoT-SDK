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

// BlueprintGeneratedClass ALK_FirstPerson_Female_Unfit.ALK_FirstPerson_Female_Unfit_C
// 0x0000 (0x0028 - 0x0028)
class UALK_FirstPerson_Female_Unfit_C : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass ALK_FirstPerson_Female_Unfit.ALK_FirstPerson_Female_Unfit_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
