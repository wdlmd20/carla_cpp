// Copyright (c) 2019 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "Carla/Actor/ActorSpawnResult.h"
#include "Carla/Actor/CarlaActorFactory.h"

#include "AIControllerFactory.generated.h"

/// 负责生成AI控制器的工厂
UCLASS()
class CARLA_API AAIControllerFactory final : public ACarlaActorFactory
{
  GENERATED_BODY()

  TArray<FActorDefinition> GetDefinitions() final;

  FActorSpawnResult SpawnActor(
      const FTransform &SpawnAtTransform,
      const FActorDescription &ActorDescription) final;
};