// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"
#include "MyPlayerController.h"

//CDO �⺻�� �ʱ�ȭ ������
AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AMyPawn::StaticClass(); //mean AMyPawn�� �̸�
	//C++������ Ŭ���� �̸� ����ġ�� ����� ��� CDO�� �����͸� ����ħ

	PlayerControllerClass = AMyPlayerController::StaticClass();

}