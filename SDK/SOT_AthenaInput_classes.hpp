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

// Class AthenaInput.NotificationInputId
// 0x0010 (0x0038 - 0x0028)
class UNotificationInputId : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.NotificationInputId")); }
		return ptr;
	}

};


// Class AthenaInput.CompositeInputHandler
// 0x00B0 (0x00D8 - 0x0028)
class UCompositeInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.CompositeInputHandler")); }
		return ptr;
	}


	void SetNotificationInputHandler(class UClass* Id, const struct FScriptDelegate& Handler);
	void SetAnalogInputHandler(class UClass* Id, const struct FScriptDelegate& Handler);
};


// Class AthenaInput.AnalogInputId
// 0x0008 (0x0030 - 0x0028)
class UAnalogInputId : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.AnalogInputId")); }
		return ptr;
	}

};


// Class AthenaInput.TestAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UTestAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.TestAnalogInputId")); }
		return ptr;
	}

};


// Class AthenaInput.InputHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UInputHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.InputHandlerInterface")); }
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> HandleNotificationInput(class UClass* Id);
	TEnumAsByte<EInputHandlerResult> HandleAnalogInput(class UClass* Id, float Input);
};


// Class AthenaInput.CompositeInputDelegatorTestsCallbackHelper
// 0x0050 (0x0078 - 0x0028)
class UCompositeInputDelegatorTestsCallbackHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.CompositeInputDelegatorTestsCallbackHelper")); }
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnSecondNotificationHandler();
	TEnumAsByte<EInputHandlerResult> OnSecondHandler(float Value);
	TEnumAsByte<EInputHandlerResult> OnFirstNotificationHandler();
	TEnumAsByte<EInputHandlerResult> OnFirstHandler(float Value);
};


// Class AthenaInput.MockDerivedCompositeInputHandler
// 0x0008 (0x00E0 - 0x00D8)
class UMockDerivedCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.MockDerivedCompositeInputHandler")); }
		return ptr;
	}

};


// Class AthenaInput.InputHandlerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UInputHandlerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.InputHandlerFunctionLibrary")); }
		return ptr;
	}


	class UCompositeInputHandler* MakeCompositeInputHandler();
};


// Class AthenaInput.TestNotificationInput2Id
// 0x0000 (0x0038 - 0x0038)
class UTestNotificationInput2Id : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.TestNotificationInput2Id")); }
		return ptr;
	}

};


// Class AthenaInput.TestNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UTestNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.TestNotificationInputId")); }
		return ptr;
	}

};


// Class AthenaInput.ReceivesInputInterface
// 0x0000 (0x0028 - 0x0028)
class UReceivesInputInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaInput.ReceivesInputInterface")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
