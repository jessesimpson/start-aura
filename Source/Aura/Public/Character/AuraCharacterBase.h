// Copyright Muyi

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

// 注意: xxx.generated.h必须放在后面, 否则会编译不过
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract)
// Abstract:           1. 不能被直接实例化的基类,通常用于定义接口或部分实现 2.不会出现在可创建类列表中
// DefaultToInstanced：1. 默认实例化。
// NotBlueprintable：  1. 禁止蓝图继承
class AURA_API AAuraCharacterBase : public ACharacter
{
    GENERATED_BODY()

  public:
    AAuraCharacterBase();

  protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, Category = "Combat")
    TObjectPtr<USkeletalMeshComponent> weapon_;
};
