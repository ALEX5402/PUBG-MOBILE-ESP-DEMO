#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Editor_login.Editor_login_C
// 0x0008 (0x03F8 - 0x03F0)
class AEditor_login_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Editor_login.Editor_login_C");
		return pStaticClass;
	}


	void SetFpsByIndex(int idx);
	void STATIC_InpActEvt_Android_Back_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_E_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_BackSpace_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_B_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Editor_login(int EntryPoint);
};


}

