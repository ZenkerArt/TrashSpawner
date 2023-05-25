// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrashSpawnerPlugin/Public/TrashLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrashLib() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TRASHSPAWNERPLUGIN_API UClass* Z_Construct_UClass_UTrashLib();
	TRASHSPAWNERPLUGIN_API UClass* Z_Construct_UClass_UTrashLib_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TrashSpawnerPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UTrashLib::execmoveActorToFolder)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTrashLib::moveActorToFolder(Z_Param_Actor,Z_Param_Name);
		P_NATIVE_END;
	}
	void UTrashLib::StaticRegisterNativesUTrashLib()
	{
		UClass* Class = UTrashLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "moveActorToFolder", &UTrashLib::execmoveActorToFolder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics
	{
		struct TrashLib_eventmoveActorToFolder_Parms
		{
			AActor* Actor;
			FName Name;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TrashLib_eventmoveActorToFolder_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TrashLib_eventmoveActorToFolder_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trash Lib" },
		{ "ModuleRelativePath", "Public/TrashLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrashLib, nullptr, "moveActorToFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::TrashLib_eventmoveActorToFolder_Parms), Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrashLib_moveActorToFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrashLib_moveActorToFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrashLib);
	UClass* Z_Construct_UClass_UTrashLib_NoRegister()
	{
		return UTrashLib::StaticClass();
	}
	struct Z_Construct_UClass_UTrashLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrashLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TrashSpawnerPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrashLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrashLib_moveActorToFolder, "moveActorToFolder" }, // 2084433707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrashLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TrashLib.h" },
		{ "ModuleRelativePath", "Public/TrashLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrashLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrashLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrashLib_Statics::ClassParams = {
		&UTrashLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTrashLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrashLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrashLib()
	{
		if (!Z_Registration_Info_UClass_UTrashLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrashLib.OuterSingleton, Z_Construct_UClass_UTrashLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrashLib.OuterSingleton;
	}
	template<> TRASHSPAWNERPLUGIN_API UClass* StaticClass<UTrashLib>()
	{
		return UTrashLib::StaticClass();
	}
	UTrashLib::UTrashLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrashLib);
	UTrashLib::~UTrashLib() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_TrashSpawner_Plugins_TrashSpawnerPlugin_Source_TrashSpawnerPlugin_Public_TrashLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_TrashSpawner_Plugins_TrashSpawnerPlugin_Source_TrashSpawnerPlugin_Public_TrashLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrashLib, UTrashLib::StaticClass, TEXT("UTrashLib"), &Z_Registration_Info_UClass_UTrashLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrashLib), 3129917442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_TrashSpawner_Plugins_TrashSpawnerPlugin_Source_TrashSpawnerPlugin_Public_TrashLib_h_377689226(TEXT("/Script/TrashSpawnerPlugin"),
		Z_CompiledInDeferFile_FID_UnrealProjects_TrashSpawner_Plugins_TrashSpawnerPlugin_Source_TrashSpawnerPlugin_Public_TrashLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_TrashSpawner_Plugins_TrashSpawnerPlugin_Source_TrashSpawnerPlugin_Public_TrashLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
