// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include <Components/Button.h>

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	BomberFlapButton->OnClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnBomberFlapButtonClicked);
}

void UMainMenuWidget::OnBomberFlapButtonClicked()
{

}
