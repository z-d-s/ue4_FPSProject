// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "FPSProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "UMG Game")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:
	virtual void StartPlay() override;

	// ��Ϸ��ʼʱ�������˵��Ŀؼ���
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
	TSubclassOf<UUserWidget> StartingWidgetClass;

	// �����˵��Ŀؼ�ʵ��
	UPROPERTY()
	UUserWidget* CurrentWidget;
};
