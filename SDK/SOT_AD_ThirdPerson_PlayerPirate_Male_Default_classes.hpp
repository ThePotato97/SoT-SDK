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

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Default.AD_ThirdPerson_PlayerPirate_Male_Default_C
// 0x05B8 (0x05E0 - 0x0028)
class UAD_ThirdPerson_PlayerPirate_Male_Default_C : public UAnimationData
{
public:
	struct FADS_IdlesNative                            Idles;                                                    // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                               // 0x0038(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_LocomotionAlternateNative              LocomotionAlternate;                                      // 0x0080(0x00F0) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                  // 0x0170(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                 // 0x01E8(0x0068) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                    // 0x0250(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                  // 0x02D8(0x0068) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_SailControlNative                      SailControlRaise;                                         // 0x0340(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                    // 0x0388(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_LadderNative                           Ladder;                                                   // 0x0398(0x0058) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_CannonNative                           Cannon;                                                   // 0x03F0(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                  // 0x0428(0x0002) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	struct FADS_FacialNative                           Facial;                                                   // 0x0430(0x0080) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_IKFootPlantingNative                   IkFootPlanting;                                           // 0x04B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_HitReactsNative                        HitReacts;                                                // 0x04D8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_DeathNative                            Death;                                                    // 0x0528(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_MapTableNative                         MapTable;                                                 // 0x0548(0x0030) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_SpawnNative2                           Spawning;                                                 // 0x0578(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_CharacterSelectNative                  CharacterSelect;                                          // 0x0588(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_SkeletonFleeNative                     SkeletonFlee;                                             // 0x0598(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_InteractionNative                      ShopInteraction;                                          // 0x05A8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_SkeletonSensing                        SkeletonSensing;                                          // 0x05B8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_EmotesNative                           Emotes;                                                   // 0x05C8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FADS_SkeletonScream                         SkeletonScream;                                           // 0x05D8(0x0008) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Default.AD_ThirdPerson_PlayerPirate_Male_Default_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
