#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_SailStructure.BP_SailStructure
// 0x003C
struct FBP_SailStructure
{
	class UStaticMesh*                                 YardMesh_2_97DED1804977F59BDA6C0F9EDE3DCB81;              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     YardScale_5_014BC49D4951D695985280ACF1E353E3;             // 0x0008(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              YardHeight_8_478BFD2F48C8B0AE8F82D2979DC520DC;            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               SailMesh_11_C88B86474D8EC6D91547B98A54EDFDB4;             // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SailScale_14_7159DE074098C846A9A94691E22F3472;            // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SailHeight_17_A1AAE59B466B62BFA46630BCC9C8BF4B;           // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SailForwardOffset_22_B5D1836D4DCB9FEC94A747BE63D470D3;    // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MainSail_19_23FC1D1243700A2C79A9448F38B6A88B;             // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SailForceScalar_27_53C46FC4483F7872B144A5BE94B22057;      // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
