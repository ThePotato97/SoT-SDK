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

// BlueprintGeneratedClass BP_StepsTrigger.BP_StepsTrigger_C
// 0x0098 (0x05C8 - 0x0530)
class ABP_StepsTrigger_C : public ATavernStepsTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        bld_tavern_entrance_steps_lightshafts_01_a;               // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_symbol_glow;                            // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_glow;                                   // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_falling_dust_under_ground;              // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_falling_dust2;                          // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_falling_dust1;                          // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_impact3;                                // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_impact2;                                // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_impact1;                                // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_impact;                                 // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_falling_dust;                           // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBP_AnimatedStepsComponent_C*                AnimatedStepsComponent;                                   // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBoxComponent*                               Box3;                                                     // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBoxComponent*                               Box2;                                                     // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBoxComponent*                               Box0;                                                     // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPoseableSkeletalMeshComponent*              StepsMesh;                                                // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_StepsTrigger.BP_StepsTrigger_C")); }
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_StepsTrigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif