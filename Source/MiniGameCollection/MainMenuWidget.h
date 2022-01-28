// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class MINIGAMECOLLECTION_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected: 
	void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
		class UButton* BomberFlapButton;

	/*UPROPERTY(meta = (BindWidget))
		class UButton* BomberFlapButton;

	UPROPERTY(meta = (BindWidget))
		class UButton* BomberFlapButton;

	UPROPERTY(meta = (BindWidget))
		class UButton* BomberFlapButton;*/

	UFUNCTION()
		void OnBomberFlapButtonClicked();
};
