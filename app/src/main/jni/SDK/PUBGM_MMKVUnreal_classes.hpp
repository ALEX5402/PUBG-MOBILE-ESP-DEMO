#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MMKVUnreal.MMKVObject
// 0x0008 (0x0030 - 0x0028)
class UMMKVObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MMKVUnreal.MMKVObject");
		return pStaticClass;
	}


	uint32_t TotalSize();
	bool SetString(const struct FString& Key, const struct FString& Value);
	bool SetInt32(const struct FString& Key, int Value);
	void SetErrorLogDelegate(const struct FScriptDelegate& handler);
	bool SetDouble(const struct FString& Key, double Value);
	bool SetBuffer(const struct FString& Key, TArray<unsigned char> Buffer);
	bool SetBool(const struct FString& Key, bool Value);
	void Remove(const struct FString& Key);
	void MMKVLogError__DelegateSignature(const struct FString& MapId, int ErrorType);
	void Init(const struct FString& MMapID, const struct FString& RootPath);
	uint32_t GetValueSize(const struct FString& Key);
	struct FString GetString(const struct FString& Key);
	int GetInt32(const struct FString& Key);
	double GetDouble(const struct FString& Key);
	TArray<unsigned char> GetBuffer(const struct FString& Key);
	bool GetBool(const struct FString& Key);
	TMap<struct FString, bool> GetAllKeys();
	bool ContainsKey(const struct FString& Key);
};


}

