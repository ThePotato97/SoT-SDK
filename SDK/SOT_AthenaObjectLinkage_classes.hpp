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

// Class AthenaObjectLinkage.EndPlayHandler
// 0x0018 (0x0040 - 0x0028)
class UEndPlayHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaObjectLinkage.EndPlayHandler")); }
		return ptr;
	}


	void OnEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
};


// Class AthenaObjectLinkage.LinkEndpointIdUtilities
// 0x0000 (0x0028 - 0x0028)
class ULinkEndpointIdUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaObjectLinkage.LinkEndpointIdUtilities")); }
		return ptr;
	}


	bool IsValid(const struct FLinkEndpointId& Id);
	bool IsPathed(const struct FLinkEndpointId& Id);
	struct FLinkEndpointId CreateEndpointId(const struct FString& String);
	struct FString Conv_LinkEndpointIdToString(const struct FLinkEndpointId& Id);
	struct FLinkEndpointId CombineEndpointIds(const struct FLinkEndpointId& Root, const struct FLinkEndpointId& path);
};


// Class AthenaObjectLinkage.LinkEndpointInterface
// 0x0000 (0x0028 - 0x0028)
class ULinkEndpointInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaObjectLinkage.LinkEndpointInterface")); }
		return ptr;
	}


	void ReceiveLink(const struct FLinkEndpointId& Id, class AActor* Instance);
	void LoseLink(const struct FLinkEndpointId& Id);
};


// Class AthenaObjectLinkage.LinkerComponent
// 0x00D8 (0x01A8 - 0x00D0)
class ULinkerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00D0(0x00C8) MISSED OFFSET
	TArray<class UEndPlayHandler*>                     EndPlayHandlers;                                          // 0x0198(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaObjectLinkage.LinkerComponent")); }
		return ptr;
	}


	void UnregisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId);
	void UnregisterEndpoint(const struct FLinkEndpointId& Id);
	void SetParent(class AActor* Parent);
	TEnumAsByte<EAddLinkResult> RegisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId);
	TEnumAsByte<EAddEndpointResult> RegisterEndpoint(const struct FLinkEndpointId& Id, class AActor* Source);
	void OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id);
	void OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance);
	class AActor* LookupEndpoint(const struct FLinkEndpointId& Id);
	int GetNumSetLinks();
	int GetNumRegisteredLinks();
	int GetNumRegisteredEndpoints();
	int GetNumPendingLinks();
};


// Class AthenaObjectLinkage.LinkerInterface
// 0x0000 (0x0028 - 0x0028)
class ULinkerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaObjectLinkage.LinkerInterface")); }
		return ptr;
	}


	void SetParent(class AActor* Parent);
	void RemoveLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId);
	void RemoveEndpoint(const struct FLinkEndpointId& Id);
	void OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id);
	void OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance);
	class AActor* LookupEndpoint(const struct FLinkEndpointId& Id);
	bool AddLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId);
	bool AddEndpoint(const struct FLinkEndpointId& Id, class AActor* Instance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
