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

// ScriptStruct AthenaInput.IdleTimeTracker
// 0x0038
struct FIdleTimeTracker
{
	struct FTimespan                                   InactivityThreshold;                                      // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AthenaInput.PrioritizedCompositeInputHandler
// 0x0010
struct FPrioritizedCompositeInputHandler
{
	class UCompositeInputHandler*                      InputHandler;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaInput.CompositeInputDelegator
// 0x0060
struct FCompositeInputDelegator
{
	TArray<struct FPrioritizedCompositeInputHandler>   PrioritizedCompositeInputHandlers;                        // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
