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

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Athletic.AD_ThirdPerson_PlayerPirate_Female_Athletic_C
// 0x0000 (0x05E0 - 0x05E0)
class UAD_ThirdPerson_PlayerPirate_Female_Athletic_C : public UAD_ThirdPerson_PlayerPirate_Female_Default_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Athletic.AD_ThirdPerson_PlayerPirate_Female_Athletic_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
