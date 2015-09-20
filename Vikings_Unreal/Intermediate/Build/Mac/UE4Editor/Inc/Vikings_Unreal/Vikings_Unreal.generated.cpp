// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Vikings_Unreal.h"
#include "Vikings_Unreal.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVikings_Unreal() {}
	void AVikings_UnrealGameMode::StaticRegisterNativesAVikings_UnrealGameMode()
	{
	}
	IMPLEMENT_CLASS(AVikings_UnrealGameMode, 518031235);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	VIKINGS_UNREAL_API class UClass* Z_Construct_UClass_AVikings_UnrealGameMode_NoRegister();
	VIKINGS_UNREAL_API class UClass* Z_Construct_UClass_AVikings_UnrealGameMode();
	VIKINGS_UNREAL_API class UPackage* Z_Construct_UPackage_Vikings_Unreal();
	UClass* Z_Construct_UClass_AVikings_UnrealGameMode_NoRegister()
	{
		return AVikings_UnrealGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AVikings_UnrealGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_Vikings_Unreal();
			OuterClass = AVikings_UnrealGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Vikings_UnrealGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Vikings_UnrealGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVikings_UnrealGameMode(Z_Construct_UClass_AVikings_UnrealGameMode, TEXT("AVikings_UnrealGameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVikings_UnrealGameMode);
	UPackage* Z_Construct_UPackage_Vikings_Unreal()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/Vikings_Unreal")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0xE0B1E57E;
			Guid.B = 0x145BA095;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
