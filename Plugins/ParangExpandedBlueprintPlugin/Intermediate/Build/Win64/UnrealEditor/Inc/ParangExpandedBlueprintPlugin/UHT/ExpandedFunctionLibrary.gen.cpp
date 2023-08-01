// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParangExpandedBlueprintPlugin/Public/ExpandedFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
	PARANGEXPANDEDBLUEPRINTPLUGIN_API UClass* Z_Construct_UClass_UExpandedFunctionLibrary();
	PARANGEXPANDEDBLUEPRINTPLUGIN_API UClass* Z_Construct_UClass_UExpandedFunctionLibrary_NoRegister();
	PARANGEXPANDEDBLUEPRINTPLUGIN_API UEnum* Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType();
	UPackage* Z_Construct_UPackage__Script_ParangExpandedBlueprintPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType;
	static UEnum* EExpandedFunctionLibraryLogType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType, (UObject*)Z_Construct_UPackage__Script_ParangExpandedBlueprintPlugin(), TEXT("EExpandedFunctionLibraryLogType"));
		}
		return Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.OuterSingleton;
	}
	template<> PARANGEXPANDEDBLUEPRINTPLUGIN_API UEnum* StaticEnum<EExpandedFunctionLibraryLogType>()
	{
		return EExpandedFunctionLibraryLogType_StaticEnum();
	}
	struct Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enumerators[] = {
		{ "EExpandedFunctionLibraryLogType::Log", (int64)EExpandedFunctionLibraryLogType::Log },
		{ "EExpandedFunctionLibraryLogType::Warning", (int64)EExpandedFunctionLibraryLogType::Warning },
		{ "EExpandedFunctionLibraryLogType::Error", (int64)EExpandedFunctionLibraryLogType::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "EExpandedFunctionLibraryLogType::Error" },
		{ "Log.DisplayName", "Log" },
		{ "Log.Name", "EExpandedFunctionLibraryLogType::Log" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
		{ "Warning.DisplayName", "Warning" },
		{ "Warning.Name", "EExpandedFunctionLibraryLogType::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ParangExpandedBlueprintPlugin,
		nullptr,
		"EExpandedFunctionLibraryLogType",
		"EExpandedFunctionLibraryLogType",
		Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType()
	{
		if (!Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.InnerSingleton, Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.InnerSingleton;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execOpenSoundWave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=UExpandedFunctionLibrary::OpenSoundWave(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execReadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExpandedFunctionLibrary::ReadFile(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execDeleteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExpandedFunctionLibrary::DeleteFile(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execBytesToFloat)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UExpandedFunctionLibrary::BytesToFloat(Z_Param_Out_InBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execBytesToInt)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UExpandedFunctionLibrary::BytesToInt(Z_Param_Out_InBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExpandedFunctionLibrary::BytesToString(Z_Param_Out_InBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execFloatToBytes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UExpandedFunctionLibrary::FloatToBytes(Z_Param_InFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execIntToBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UExpandedFunctionLibrary::IntToBytes(Z_Param_InInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execStringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UExpandedFunctionLibrary::StringToBytes(Z_Param_InString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execSetWindowMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewWindowMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UExpandedFunctionLibrary::SetWindowMode(EWindowMode::Type(Z_Param_NewWindowMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execSetScreenResolution)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewScreenWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewScreenHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UExpandedFunctionLibrary::SetScreenResolution(Z_Param_NewScreenWidth,Z_Param_NewScreenHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execSetScreenPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewXCoord);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewYCoord);
		P_FINISH;
		P_NATIVE_BEGIN;
		UExpandedFunctionLibrary::SetScreenPosition(Z_Param_NewXCoord,Z_Param_NewYCoord);
		P_NATIVE_END;
	}
	void UExpandedFunctionLibrary::StaticRegisterNativesUExpandedFunctionLibrary()
	{
		UClass* Class = UExpandedFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesToFloat", &UExpandedFunctionLibrary::execBytesToFloat },
			{ "BytesToInt", &UExpandedFunctionLibrary::execBytesToInt },
			{ "BytesToString", &UExpandedFunctionLibrary::execBytesToString },
			{ "DeleteFile", &UExpandedFunctionLibrary::execDeleteFile },
			{ "FloatToBytes", &UExpandedFunctionLibrary::execFloatToBytes },
			{ "IntToBytes", &UExpandedFunctionLibrary::execIntToBytes },
			{ "OpenSoundWave", &UExpandedFunctionLibrary::execOpenSoundWave },
			{ "ReadFile", &UExpandedFunctionLibrary::execReadFile },
			{ "SetScreenPosition", &UExpandedFunctionLibrary::execSetScreenPosition },
			{ "SetScreenResolution", &UExpandedFunctionLibrary::execSetScreenResolution },
			{ "SetWindowMode", &UExpandedFunctionLibrary::execSetWindowMode },
			{ "StringToBytes", &UExpandedFunctionLibrary::execStringToBytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics
	{
		struct ExpandedFunctionLibrary_eventBytesToFloat_Parms
		{
			TArray<uint8> InBytes;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventBytesToFloat_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventBytesToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::NewProp_InBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::NewProp_InBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "BytesToFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::ExpandedFunctionLibrary_eventBytesToFloat_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics
	{
		struct ExpandedFunctionLibrary_eventBytesToInt_Parms
		{
			TArray<uint8> InBytes;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventBytesToInt_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventBytesToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::NewProp_InBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::NewProp_InBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "BytesToInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::ExpandedFunctionLibrary_eventBytesToInt_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics
	{
		struct ExpandedFunctionLibrary_eventBytesToString_Parms
		{
			TArray<uint8> InBytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventBytesToString_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::NewProp_InBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::NewProp_InBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "BytesToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::ExpandedFunctionLibrary_eventBytesToString_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics
	{
		struct ExpandedFunctionLibrary_eventDeleteFile_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventDeleteFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExpandedFunctionLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExpandedFunctionLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "DeleteFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::ExpandedFunctionLibrary_eventDeleteFile_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics
	{
		struct ExpandedFunctionLibrary_eventFloatToBytes_Parms
		{
			float InFloat;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventFloatToBytes_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventFloatToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::NewProp_InFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "FloatToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::ExpandedFunctionLibrary_eventFloatToBytes_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics
	{
		struct ExpandedFunctionLibrary_eventIntToBytes_Parms
		{
			int32 InInt;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventIntToBytes_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventIntToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::NewProp_InInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "IntToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::ExpandedFunctionLibrary_eventIntToBytes_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics
	{
		struct ExpandedFunctionLibrary_eventOpenSoundWave_Parms
		{
			FString Path;
			USoundWave* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventOpenSoundWave_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventOpenSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "OpenSoundWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::ExpandedFunctionLibrary_eventOpenSoundWave_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics
	{
		struct ExpandedFunctionLibrary_eventReadFile_Parms
		{
			FString Path;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventReadFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventReadFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "ReadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::ExpandedFunctionLibrary_eventReadFile_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics
	{
		struct ExpandedFunctionLibrary_eventSetScreenPosition_Parms
		{
			int32 NewXCoord;
			int32 NewYCoord;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewXCoord;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewYCoord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::NewProp_NewXCoord = { "NewXCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetScreenPosition_Parms, NewXCoord), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::NewProp_NewYCoord = { "NewYCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetScreenPosition_Parms, NewYCoord), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::NewProp_NewXCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::NewProp_NewYCoord,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "SetScreenPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::ExpandedFunctionLibrary_eventSetScreenPosition_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics
	{
		struct ExpandedFunctionLibrary_eventSetScreenResolution_Parms
		{
			int32 NewScreenWidth;
			int32 NewScreenHeight;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewScreenWidth;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewScreenHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::NewProp_NewScreenWidth = { "NewScreenWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetScreenResolution_Parms, NewScreenWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::NewProp_NewScreenHeight = { "NewScreenHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetScreenResolution_Parms, NewScreenHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::NewProp_NewScreenWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::NewProp_NewScreenHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "SetScreenResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::ExpandedFunctionLibrary_eventSetScreenResolution_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics
	{
		struct ExpandedFunctionLibrary_eventSetWindowMode_Parms
		{
			TEnumAsByte<EWindowMode::Type> NewWindowMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewWindowMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::NewProp_NewWindowMode = { "NewWindowMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetWindowMode_Parms, NewWindowMode), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(nullptr, 0) }; // 2666347754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::NewProp_NewWindowMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "SetWindowMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::ExpandedFunctionLibrary_eventSetWindowMode_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics
	{
		struct ExpandedFunctionLibrary_eventStringToBytes_Parms
		{
			FString InString;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventStringToBytes_Parms, InString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventStringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "StringToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::ExpandedFunctionLibrary_eventStringToBytes_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedFunctionLibrary);
	UClass* Z_Construct_UClass_UExpandedFunctionLibrary_NoRegister()
	{
		return UExpandedFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ParangExpandedBlueprintPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExpandedFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToFloat, "BytesToFloat" }, // 3144016630
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToInt, "BytesToInt" }, // 3906442012
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_BytesToString, "BytesToString" }, // 700623488
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile, "DeleteFile" }, // 2898114434
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_FloatToBytes, "FloatToBytes" }, // 557476662
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_IntToBytes, "IntToBytes" }, // 2030530154
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave, "OpenSoundWave" }, // 1548592366
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile, "ReadFile" }, // 2228539931
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition, "SetScreenPosition" }, // 1821653411
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution, "SetScreenResolution" }, // 624673571
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode, "SetWindowMode" }, // 468733353
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_StringToBytes, "StringToBytes" }, // 244318865
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExpandedFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandedFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedFunctionLibrary_Statics::ClassParams = {
		&UExpandedFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExpandedFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UExpandedFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedFunctionLibrary.OuterSingleton, Z_Construct_UClass_UExpandedFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedFunctionLibrary.OuterSingleton;
	}
	template<> PARANGEXPANDEDBLUEPRINTPLUGIN_API UClass* StaticClass<UExpandedFunctionLibrary>()
	{
		return UExpandedFunctionLibrary::StaticClass();
	}
	UExpandedFunctionLibrary::UExpandedFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedFunctionLibrary);
	UExpandedFunctionLibrary::~UExpandedFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EExpandedFunctionLibraryLogType_StaticEnum, TEXT("EExpandedFunctionLibraryLogType"), &Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 678392273U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedFunctionLibrary, UExpandedFunctionLibrary::StaticClass, TEXT("UExpandedFunctionLibrary"), &Z_Registration_Info_UClass_UExpandedFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedFunctionLibrary), 306126626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_2556255059(TEXT("/Script/ParangExpandedBlueprintPlugin"),
		Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
