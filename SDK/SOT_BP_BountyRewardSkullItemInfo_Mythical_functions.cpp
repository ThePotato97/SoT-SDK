// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_BountyRewardSkullItemInfo_Mythical_C::UserConstructionScript()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.UserConstructionScript"));}

	ABP_BountyRewardSkullItemInfo_Mythical_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.ReceiveBeginPlay
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_BountyRewardSkullItemInfo_Mythical_C::ReceiveBeginPlay()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.ReceiveBeginPlay"));}

	ABP_BountyRewardSkullItemInfo_Mythical_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Mythical
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_BountyRewardSkullItemInfo_Mythical_C::ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Mythical(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Mythical"));}

	ABP_BountyRewardSkullItemInfo_Mythical_C_ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Mythical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif