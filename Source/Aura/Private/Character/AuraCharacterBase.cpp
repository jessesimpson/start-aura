// Copyright Muyi

#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need
    // it.
    PrimaryActorTick.bCanEverTick = false;

    // 创建名为Weapon的骨骼网格组件,可以在蓝图中使用
    weapon_ = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");

    // 将武器骨骼网格组件附加到角色的骨骼网格(如角色模型)的指定插槽上，插槽名称为"WeaponHandSocket"
    weapon_->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));

    // 禁用武器网格的碰撞
    weapon_->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraCharacterBase::BeginPlay()
{
    Super::BeginPlay();
}
