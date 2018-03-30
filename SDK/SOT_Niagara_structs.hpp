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

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x000C
struct FNiagaraVariableInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ENiagaraDataType>                      Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.DeprecatedNiagaraConstants
// 0x0080
struct FDeprecatedNiagaraConstants
{
	TArray<struct FNiagaraVariableInfo>                ScalarConstantsInfo;                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	TArray<struct FNiagaraVariableInfo>                VectorConstantsInfo;                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	TArray<struct FNiagaraVariableInfo>                MatrixConstantsInfo;                                      // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	TArray<float>                                      ScalarConstants;                                          // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	TArray<struct FVector4>                            VectorConstants;                                          // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	TArray<struct FMatrix>                             MatrixConstants;                                          // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraConstantBase
// 0x0008
struct FNiagaraConstantBase
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_Float
// 0x0004 (0x000C - 0x0008)
struct FNiagaraConstants_Float : public FNiagaraConstantBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_Vector
// 0x0018 (0x0020 - 0x0008)
struct FNiagaraConstants_Vector : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FVector4                                    Value;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_Matrix
// 0x0048 (0x0050 - 0x0008)
struct FNiagaraConstants_Matrix : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     Value;                                                    // 0x0010(0x0040) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_DataObject
// 0x0008 (0x0010 - 0x0008)
struct FNiagaraConstants_DataObject : public FNiagaraConstantBase
{
	class UNiagaraDataObject*                          Value;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants
// 0x0040
struct FNiagaraConstants
{
	TArray<struct FNiagaraConstants_Float>             ScalarConstants;                                          // 0x0000(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FNiagaraConstants_Vector>            VectorConstants;                                          // 0x0010(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FNiagaraConstants_Matrix>            MatrixConstants;                                          // 0x0020(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FNiagaraConstants_DataObject>        DataObjectConstants;                                      // 0x0030(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptConstantData
// 0x0180
struct FNiagaraScriptConstantData
{
	struct FDeprecatedNiagaraConstants                 ExternalConstants;                                        // 0x0000(0x0080) (CPF_Deprecated)
	struct FDeprecatedNiagaraConstants                 InternalConstants;                                        // 0x0080(0x0080) (CPF_Deprecated)
	struct FNiagaraConstants                           ExternalConstantsNew;                                     // 0x0100(0x0040)
	struct FNiagaraConstants                           InternalConstantsNew;                                     // 0x0140(0x0040)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0048
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNiagaraConstants                           ExternalConstants;                                        // 0x0008(0x0040) (CPF_Edit)
};

// ScriptStruct Niagara.NiagaraConstantMap
// 0x0148
struct FNiagaraConstantMap
{
	unsigned char                                      UnknownData00[0x148];                                     // 0x0000(0x0148) MISSED OFFSET
};

// ScriptStruct Niagara.DeprecatedNiagaraEmitterProperties
// 0x02E0
struct FDeprecatedNiagaraEmitterProperties
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bIsEnabled;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnRate;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNiagaraScript*                              UpdateScript;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNiagaraScript*                              SpawnScript;                                              // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterial*                                   Material;                                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEmitterRenderModuleType>              RenderModuleType;                                         // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNiagaraConstantMap                         ExternalConstants;                                        // 0x0048(0x0148)
	struct FNiagaraConstantMap                         ExternalSpawnConstants;                                   // 0x0190(0x0148)
	int                                                NumLoops;                                                 // 0x02D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
