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

// Function wsp_torch_b_b.wsp_torch_b_b_C.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void Awsp_torch_b_b_C::UserConstructionScript()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_b_b.wsp_torch_b_b_C.UserConstructionScript"));}

	Awsp_torch_b_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wsp_torch_b_b.wsp_torch_b_b_C.ReceiveBeginPlay
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void Awsp_torch_b_b_C::ReceiveBeginPlay()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_b_b.wsp_torch_b_b_C.ReceiveBeginPlay"));}

	Awsp_torch_b_b_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wsp_torch_b_b.wsp_torch_b_b_C.ExecuteUbergraph_wsp_torch_b_b
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void Awsp_torch_b_b_C::ExecuteUbergraph_wsp_torch_b_b(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_b_b.wsp_torch_b_b_C.ExecuteUbergraph_wsp_torch_b_b"));}

	Awsp_torch_b_b_C_ExecuteUbergraph_wsp_torch_b_b_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif