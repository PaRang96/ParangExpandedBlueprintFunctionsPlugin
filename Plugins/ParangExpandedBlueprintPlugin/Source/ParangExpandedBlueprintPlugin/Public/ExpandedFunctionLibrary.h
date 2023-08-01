// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExpandedFunctionLibrary.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(ParangExpandedBlueprintPluginLog, Log, All);
DEFINE_LOG_CATEGORY(ParangExpandedBlueprintPluginLog);

UENUM(BlueprintType)
enum class EExpandedFunctionLibraryLogType : uint8
{
	Log				UMETA(DisplayName = "Log"),
	Warning			UMETA(DisplayName = "Warning"),
	Error			UMETA(DisplayName = "Error")
};

/**
 * 
 */
UCLASS()
class PARANGEXPANDEDBLUEPRINTPLUGIN_API UExpandedFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
protected:
	static void MakeLog(FString LogContent, EExpandedFunctionLibraryLogType ExpandedFunctionLibraryLogType);

	static void MakeLog_Internal_Log(FString LogContent);

	static void MakeLog_Internal_Warning(FString LogContent);

	static void MakeLog_Internal_Error(FString LogContent);

public:
	UFUNCTION(BlueprintCallable, Category = "Screen")
	static void SetScreenPosition(int NewXCoord, int NewYCoord);

	UFUNCTION(BlueprintCallable, Category = "Screen")
	static void SetScreenResolution(int NewScreenWidth, int NewScreenHeight);

	UFUNCTION(BlueprintCallable, Category = "Screen")
	static void SetWindowMode(EWindowMode::Type NewWindowMode);

	UFUNCTION(BlueprintCallable, Category = "Data")
	static TArray<uint8> StringToBytes(FString InString);

	UFUNCTION(BlueprintCallable, Category = "Data")
	static TArray<uint8> IntToBytes(int32 InInt);

	UFUNCTION(BlueprintCallable, Category = "Data")
	static TArray<uint8> FloatToBytes(float InFloat);

	UFUNCTION(BlueprintCallable, Category = "Data")
	static FString BytesToString(UPARAM(ref) TArray<uint8>& InBytes);

	UFUNCTION(BlueprintCallable, Category = "Data")
	static int32 BytesToInt(UPARAM(ref) TArray<uint8>& InBytes);

	UFUNCTION(BlueprintCallable, Category = "Data")
	static float BytesToFloat(UPARAM(ref) TArray<uint8>& InBytes);

	UFUNCTION(BlueprintCallable, Category = "File")
	static bool DeleteFile(FString Path);

	UFUNCTION(BlueprintCallable, Category = "File")
	static FString ReadFile(FString Path);

	UFUNCTION(BlueprintCallable, Category = "File")
	static USoundWave* OpenSoundWave(FString Path);
};
