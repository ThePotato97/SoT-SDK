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

// BlueprintGeneratedClass BP_CapstanArm.BP_CapstanArm_C
// 0x0010 (0x05D8 - 0x05C8)
class ABP_CapstanArm_C : public ACapstanArm
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             LookAtPos;                                                // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_CapstanArm.BP_CapstanArm_C")); }
		return ptr;
	}


	struct FVector GetFrontFacingVector();
	bool DoesRequireFacingFront();
	struct FDockableInfo GetDockableInfo();
	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	struct FVector GetLookAtPos();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
