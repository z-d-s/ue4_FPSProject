// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

/*
UFUNCTION 宏(位于每个函数的上方) 让引擎可以发觉这些函数，以便将他们纳入序列化和其他引擎功能中
	1、BlueprintCallable			可从蓝图中调用，但只能通过编辑C++代码进行修改或重写
	2、BlueprintImplementableEvent	函数主体则在蓝图图标中完成编写
	3、BlueprintNativeEvent			BlueprintCallable和BlueprintImplementableEvent函数的组合，具备用C++编程的行为，同时可通过在蓝图中覆盖进行补充或替换

EditAnywhere		选项值让你可以在蓝图编辑器的默认（Defaults）模式下或在任何角色实例的细节（Details）选项卡中更改默认值
EditDefaultsOnly	选项值让你只能在蓝图中（Defaults）设置默认值，而不可以在蓝图实例上（Details）设置默认值
BluePrintReadWrite	选项值让你可以在蓝图中获取和设置枪口偏移值
*/

#include "CoreMinimal.h"

