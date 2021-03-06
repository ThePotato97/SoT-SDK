#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PiratePreview.BP_PiratePreview_C.UserConstructionScript
struct ABP_PiratePreview_C_UserConstructionScript_Params
{
};

// Function BP_PiratePreview.BP_PiratePreview_C.ReceiveBeginPlay
struct ABP_PiratePreview_C_ReceiveBeginPlay_Params
{
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy_Event
struct ABP_PiratePreview_C_PreviewBusy_Event_Params
{
	struct FPiratePreviewBusyEvent                     Data;                                                     // (CPF_Parm) 0000
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady_Event
struct ABP_PiratePreview_C_PreviewReady_Event_Params
{
	struct FPiratePreviewReadyEvent                    Data;                                                     // (CPF_Parm) 0000
};

// Function BP_PiratePreview.BP_PiratePreview_C.ReceiveEndPlay
struct ABP_PiratePreview_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_PiratePreview.BP_PiratePreview_C.ExecuteUbergraph_BP_PiratePreview
struct ABP_PiratePreview_C_ExecuteUbergraph_BP_PiratePreview_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewShutdown__DelegateSignature
struct ABP_PiratePreview_C_PreviewShutdown__DelegateSignature_Params
{
	struct FPiratePreviewShutdownEvent                 Data;                                                     // (CPF_Parm) 0000
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady__DelegateSignature
struct ABP_PiratePreview_C_PreviewReady__DelegateSignature_Params
{
	struct FPiratePreviewReadyEvent                    Data;                                                     // (CPF_Parm) 0000
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy__DelegateSignature
struct ABP_PiratePreview_C_PreviewBusy__DelegateSignature_Params
{
	struct FPiratePreviewBusyEvent                     Data;                                                     // (CPF_Parm) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
