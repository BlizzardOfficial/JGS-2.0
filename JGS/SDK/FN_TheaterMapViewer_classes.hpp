#pragma once

// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TheaterMapViewer.TheaterMapViewer_C
// 0x0008 (0x0618 - 0x0610)
class ATheaterMapViewer_C : public AFortTheaterMapViewer
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TheaterMapViewer.TheaterMapViewer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
