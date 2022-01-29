// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include <Components/Button.h>
#include "Kismet/GameplayStatics.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	BomberFlapButton->OnClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnBomberFlapButtonClicked);
	MidgarSnakeButton->OnClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnMidgarSnakeButtonClicked);
	SpiderCollapseButton->OnClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnSpiderCollapseButtonClicked);
	ClickerButton->OnClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnClickerButtonClicked);
}

void UMainMenuWidget::OnBomberFlapButtonClicked()
{
	UGameplayStatics::OpenLevel(this, "BomberFlapMap");
}

void UMainMenuWidget::OnMidgarSnakeButtonClicked()
{
	UGameplayStatics::OpenLevel(this, "MidgarSnakeMap");
}

void UMainMenuWidget::OnSpiderCollapseButtonClicked()
{
	UGameplayStatics::OpenLevel(this, "SpiderCollapseMap");
}

void UMainMenuWidget::OnClickerButtonClicked()
{
	UGameplayStatics::OpenLevel(this, "ClickerMap");
}
