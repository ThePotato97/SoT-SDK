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

// Function wsp_sea_rock_cluster_a.wsp_sea_rock_cluster_a_C.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void Awsp_sea_rock_cluster_a_C::UserConstructionScript()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function wsp_sea_rock_cluster_a.wsp_sea_rock_cluster_a_C.UserConstructionScript"));}

	Awsp_sea_rock_cluster_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
