#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EventTrackEx.MovieSceneXTEventSection
// 0x0110 (0x01C0 - 0x00B0)
class UMovieSceneXTEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                   // 0x00B0(0x0068) (Deprecated)
	struct FMovieSceneXTEventSectionData               EventData;                                                // 0x0118(0x0020)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0138(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EventTrackEx.MovieSceneXTEventSection");
		return pStaticClass;
	}

};


// Class EventTrackEx.MovieSceneXTEventTrack
// 0x0020 (0x0078 - 0x0058)
class UMovieSceneXTEventTrack : public UMovieSceneNameableTrack
{
public:
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                           // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0068(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EventTrackEx.MovieSceneXTEventTrack");
		return pStaticClass;
	}

};


}

