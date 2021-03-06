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

// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTaskOwnerInterface")); }
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask
// 0x0030 (0x0058 - 0x0028)
class UGameplayTask : public UObject
{
public:
	struct FName                                       InstanceName;                                             // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTask")); }
		return ptr;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};


// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (0x0098 - 0x0058)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
	class UClass*                                      ClassToSpawn;                                             // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTask_SpawnActor")); }
		return ptr;
	}


	class UGameplayTask_SpawnActor* SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};


// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (0x0070 - 0x0058)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTask_WaitDelay")); }
		return ptr;
	}


	class UGameplayTask_WaitDelay* TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time);
	void TaskDelayDelegate__DelegateSignature();
};


// Class GameplayTasks.GameplayTaskResource
// 0x0010 (0x0038 - 0x0028)
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                         // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	unsigned char                                      bManuallySetID : 1;                                       // 0x0030(0x0001) ( BITFIELD: 0101)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTaskResource")); }
		return ptr;
	}

};


// Class GameplayTasks.GameplayTasksComponent
// 0x0060 (0x0130 - 0x00D0)
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<class UGameplayTask*>                       SimulatedTasks;                                           // 0x00D8(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                        // 0x00E8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00F8(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClaimedResourcesChange;                                 // 0x0120(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTasksComponent")); }
		return ptr;
	}


	void OnRep_SimulatedTasks();
	TEnumAsByte<EGameplayTaskRunResult> K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
