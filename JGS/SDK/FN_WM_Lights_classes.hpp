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

// BlueprintGeneratedClass WM_Lights.WM_Lights_C
// 0x0030 (0x03B8 - 0x0388)
class AWM_Lights_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkyLightComponent*                          SkyLight;                                                 // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WM_Lights.WM_Lights_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void WM_Lightcontrol(bool TurnOn);
	void ExecuteUbergraph_WM_Lights(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
