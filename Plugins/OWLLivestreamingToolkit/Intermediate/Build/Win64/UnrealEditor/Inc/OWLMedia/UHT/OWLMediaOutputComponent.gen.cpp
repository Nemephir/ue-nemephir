// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMedia/Public/OWLMediaOutputComponent.h"
#include "OWLMedia/Public/OWLFFmpegOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLMediaOutputComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OWLCAMERA_API UClass* Z_Construct_UClass_UOWLCaptureComponent_NoRegister();
	OWLMEDIA_API UClass* Z_Construct_UClass_UOWLMediaOutputComponent();
	OWLMEDIA_API UClass* Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLHttpFormat();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType();
	OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature();
	OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLFFmpegSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLHTTPSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLRTMPSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLRTSPSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSaveToFileSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTOptions();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTSettings();
	UPackage* Z_Construct_UPackage__Script_OWLMedia();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWLMedia, nullptr, "OnMediaOutputStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMediaOutputStart_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStart)
{
	OnMediaOutputStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics
	{
		struct _Script_OWLMedia_eventOnMediaOutputStop_Parms
		{
			bool bGraceful;
		};
		static void NewProp_bGraceful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGraceful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful_SetBit(void* Obj)
	{
		((_Script_OWLMedia_eventOnMediaOutputStop_Parms*)Obj)->bGraceful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful = { "bGraceful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OWLMedia_eventOnMediaOutputStop_Parms), &Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWLMedia, nullptr, "OnMediaOutputStop__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::_Script_OWLMedia_eventOnMediaOutputStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::_Script_OWLMedia_eventOnMediaOutputStop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMediaOutputStop_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStop, bool bGraceful)
{
	struct _Script_OWLMedia_eventOnMediaOutputStop_Parms
	{
		bool bGraceful;
	};
	_Script_OWLMedia_eventOnMediaOutputStop_Parms Parms;
	Parms.bGraceful=bGraceful ? true : false;
	OnMediaOutputStop.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings;
class UScriptStruct* FOWLSaveToFileSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSaveToFileSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLSaveToFileSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLSaveToFileSettings>()
{
	return FOWLSaveToFileSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoOutputDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoOutputDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoOutputFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoOutputFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSaveToFileSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The container format in which the media should be saved */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The container format in which the media should be saved" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat = { "DestinationFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSaveToFileSettings, DestinationFormat), Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_MetaData), Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_MetaData) }; // 3944681461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Destination directory for saving video */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Destination directory for saving video" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir = { "VideoOutputDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSaveToFileSettings, VideoOutputDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir_MetaData), Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Output file name (without extension) */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Output file name (without extension)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile = { "VideoOutputFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSaveToFileSettings, VideoOutputFile), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile_MetaData), Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLSaveToFileSettings",
		Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers),
		sizeof(FOWLSaveToFileSettings),
		alignof(FOWLSaveToFileSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSaveToFileSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLRTMPSettings;
class UScriptStruct* FOWLRTMPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLRTMPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLRTMPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLRTMPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLRTMPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLRTMPSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLRTMPSettings>()
{
	return FOWLRTMPSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLRTMPSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination URL */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The Stream destination URL" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLRTMPSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL_MetaData), Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination Key */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The Stream destination Key" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey = { "StreamKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLRTMPSettings, StreamKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey_MetaData), Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLRTMPSettings",
		Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers),
		sizeof(FOWLRTMPSettings),
		alignof(FOWLRTMPSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOWLRTMPSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLRTMPSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLRTMPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLRTMPSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLRTSPSettings;
class UScriptStruct* FOWLRTSPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLRTSPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLRTSPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLRTSPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLRTSPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLRTSPSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLRTSPSettings>()
{
	return FOWLRTSPSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLRTSPSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The RTSP Server ie rtsp://<domain>:port */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The RTSP Server ie rtsp://<domain>:port" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLRTSPSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL_MetaData), Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLRTSPSettings",
		Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers),
		sizeof(FOWLRTSPSettings),
		alignof(FOWLRTSPSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOWLRTSPSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLRTSPSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLRTSPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLRTSPSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSRTSettings;
class UScriptStruct* FOWLSRTSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSRTSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSRTSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSRTSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLSRTSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSRTSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLSRTSettings>()
{
	return FOWLSRTSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLSRTSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSRTSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination URL */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The Stream destination URL" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSRTSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL_MetaData), Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSRTSettings, Options), Z_Construct_UScriptStruct_FOWLSRTOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options_MetaData), Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options_MetaData) }; // 2737483351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLSRTSettings",
		Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers),
		sizeof(FOWLSRTSettings),
		alignof(FOWLSRTSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLSRTSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSRTSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLSRTSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLHTTPSettings;
class UScriptStruct* FOWLHTTPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLHTTPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLHTTPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLHTTPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLHTTPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLHTTPSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLHTTPSettings>()
{
	return FOWLHTTPSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLHTTPSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The http destination for the post request */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The http destination for the post request" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLHTTPSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_StreamURL_MetaData), Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_StreamURL_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLHTTPSettings, Format), Z_Construct_UEnum_OWLMedia_EOWLHttpFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format_MetaData), Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format_MetaData) }; // 3927979095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_StreamURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLHTTPSettings",
		Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers),
		sizeof(FOWLHTTPSettings),
		alignof(FOWLHTTPSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOWLHTTPSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLHTTPSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLHTTPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLHTTPSettings.InnerSingleton;
	}
	void UOWLMediaOutputComponent::StaticRegisterNativesUOWLMediaOutputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLMediaOutputComponent);
	UClass* Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister()
	{
		return UOWLMediaOutputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOWLMediaOutputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveToFileSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveToFileSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTMPSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RTMPSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTSPSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RTSPSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HTTPSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HTTPSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SRTSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SRTSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAPIKey_MetaData[];
#endif
		static void NewProp_bOverrideAPIKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAPIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideAPIOptions_MetaData[];
#endif
		static void NewProp_bHideAPIOptions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAPIOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncoderSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EncoderSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimecodeProviderWhereAvailable_MetaData[];
#endif
		static void NewProp_bUseTimecodeProviderWhereAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimecodeProviderWhereAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasStarted_MetaData[];
#endif
		static void NewProp_HasStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationMs_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_DurationMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMeteredPricing_MetaData[];
#endif
		static void NewProp_IsMeteredPricing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMeteredPricing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinutesRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinutesRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingMinutesRemaining_MetaData[];
#endif
		static void NewProp_LoadingMinutesRemaining_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadingMinutesRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IntermediateTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLMediaOutputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OWLMediaOutputComponent.h" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, CaptureComponent), Z_Construct_UClass_UOWLCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_CaptureComponent_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_CaptureComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, OutputType), Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType_MetaData) }; // 3170776873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SaveToFileSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_FILEOUTPUT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SaveToFileSettings = { "SaveToFileSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, SaveToFileSettings), Z_Construct_UScriptStruct_FOWLSaveToFileSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SaveToFileSettings_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SaveToFileSettings_MetaData) }; // 2992378917
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTMPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_RTMP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTMPSettings = { "RTMPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, RTMPSettings), Z_Construct_UScriptStruct_FOWLRTMPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTMPSettings_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTMPSettings_MetaData) }; // 2425228445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTSPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_RTSP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTSPSettings = { "RTSPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, RTSPSettings), Z_Construct_UScriptStruct_FOWLRTSPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTSPSettings_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTSPSettings_MetaData) }; // 3813308520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HTTPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_HTTP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HTTPSettings = { "HTTPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, HTTPSettings), Z_Construct_UScriptStruct_FOWLHTTPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HTTPSettings_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HTTPSettings_MetaData) }; // 2491991154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SRTSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_SRT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SRTSettings = { "SRTSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, SRTSettings), Z_Construct_UScriptStruct_FOWLSRTSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SRTSettings_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SRTSettings_MetaData) }; // 399116692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_APIKey_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "EditCondition", "bOverrideAPIKey && !bHideAPIOptions" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, APIKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_APIKey_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_APIKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "EditCondition", "!bHideAPIOptions" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey_SetBit(void* Obj)
	{
		((UOWLMediaOutputComponent*)Obj)->bOverrideAPIKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey = { "bOverrideAPIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions_SetBit(void* Obj)
	{
		((UOWLMediaOutputComponent*)Obj)->bHideAPIOptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions = { "bHideAPIOptions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_InputRenderTarget_MetaData[] = {
		{ "Category", "Input Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_InputRenderTarget = { "InputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, InputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_InputRenderTarget_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_InputRenderTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_EncoderSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_EncoderSettings = { "EncoderSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, EncoderSettings), Z_Construct_UScriptStruct_FOWLFFmpegSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_EncoderSettings_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_EncoderSettings_MetaData) }; // 3212035240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable_SetBit(void* Obj)
	{
		((UOWLMediaOutputComponent*)Obj)->bUseTimecodeProviderWhereAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable = { "bUseTimecodeProviderWhereAvailable", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted_SetBit(void* Obj)
	{
		((UOWLMediaOutputComponent*)Obj)->HasStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted = { "HasStarted", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_DurationMs_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, DurationMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_DurationMs_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_DurationMs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing_SetBit(void* Obj)
	{
		((UOWLMediaOutputComponent*)Obj)->IsMeteredPricing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing = { "IsMeteredPricing", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_MinutesRemaining_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_MinutesRemaining = { "MinutesRemaining", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, MinutesRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_MinutesRemaining_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_MinutesRemaining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining_SetBit(void* Obj)
	{
		((UOWLMediaOutputComponent*)Obj)->LoadingMinutesRemaining = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining = { "LoadingMinutesRemaining", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStop_MetaData[] = {
		{ "Category", "OWL Media Output" },
		{ "Comment", "// Expose delegates\n" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Expose delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStop = { "OnStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, OnStop), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStop_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStop_MetaData) }; // 39209442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStart_MetaData[] = {
		{ "Category", "OWL Media Output" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStart = { "OnStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, OnStart), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStart_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStart_MetaData) }; // 3285232751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IntermediateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IntermediateTarget = { "IntermediateTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, IntermediateTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IntermediateTarget_MetaData), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IntermediateTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_CaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SaveToFileSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTMPSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTSPSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HTTPSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SRTSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_APIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_InputRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_EncoderSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_DurationMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_MinutesRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IntermediateTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLMediaOutputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLMediaOutputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::ClassParams = {
		&UOWLMediaOutputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOWLMediaOutputComponent()
	{
		if (!Z_Registration_Info_UClass_UOWLMediaOutputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLMediaOutputComponent.OuterSingleton, Z_Construct_UClass_UOWLMediaOutputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLMediaOutputComponent.OuterSingleton;
	}
	template<> OWLMEDIA_API UClass* StaticClass<UOWLMediaOutputComponent>()
	{
		return UOWLMediaOutputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLMediaOutputComponent);
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ScriptStructInfo[] = {
		{ FOWLSaveToFileSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewStructOps, TEXT("OWLSaveToFileSettings"), &Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSaveToFileSettings), 2992378917U) },
		{ FOWLRTMPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewStructOps, TEXT("OWLRTMPSettings"), &Z_Registration_Info_UScriptStruct_OWLRTMPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLRTMPSettings), 2425228445U) },
		{ FOWLRTSPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewStructOps, TEXT("OWLRTSPSettings"), &Z_Registration_Info_UScriptStruct_OWLRTSPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLRTSPSettings), 3813308520U) },
		{ FOWLSRTSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewStructOps, TEXT("OWLSRTSettings"), &Z_Registration_Info_UScriptStruct_OWLSRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSRTSettings), 399116692U) },
		{ FOWLHTTPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewStructOps, TEXT("OWLHTTPSettings"), &Z_Registration_Info_UScriptStruct_OWLHTTPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLHTTPSettings), 2491991154U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLMediaOutputComponent, UOWLMediaOutputComponent::StaticClass, TEXT("UOWLMediaOutputComponent"), &Z_Registration_Info_UClass_UOWLMediaOutputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLMediaOutputComponent), 2365786977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_3397134881(TEXT("/Script/OWLMedia"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
