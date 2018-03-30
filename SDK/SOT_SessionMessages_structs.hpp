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

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{

};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{

};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Data;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	double                                             TimeSeconds;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Verbosity;                                                // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0090
struct FSessionServicePong
{
	struct FString                                     BuildDate;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DeviceName;                                               // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     InstanceName;                                             // 0x0030(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsConsoleBuild;                                           // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     PlatformName;                                             // 0x0048(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     SessionName;                                              // 0x0068(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SessionOwner;                                             // 0x0078(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      Standalone;                                               // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePing
// 0x0001
struct FSessionServicePing
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
