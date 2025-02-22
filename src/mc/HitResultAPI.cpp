#include "mc/HitResult.hpp"
#include "liteloader/api/memory/Hook.h"

using ll::memory::dAccess;

FaceID HitResult::getFacing() { return dAccess<FaceID>(this, 28); }
Vec3   HitResult::getPos() { return dAccess<Vec3>(this, 44); }
bool   HitResult::isHitLiquid() { return dAccess<bool>(this, 80); }
// LLAPI bool HitResult::isEntity() {
//     return getHitResultType() == HitResultType::ENTITY;
// }
// LLAPI bool HitResult::isTile() {
//     return getHitResultType() == HitResultType::TILE;
// }
BlockPos HitResult::getBlockPos() { return dAccess<BlockPos>(this, 32); }
BlockPos HitResult::getLiquidPos() { return dAccess<BlockPos>(this, 84); }
FaceID   HitResult::getLiquidFacing() { return dAccess<FaceID>(this, 81); }
// LLAPI Vec3 HitResult::getLiquidHitPos();
// LLAPI HitResultType HitResult::getHitResultType() {
//     return dAccess<HitResultType>(this, 24);
// }

// static_assert(offsetof(HitResult, endBpos) == 32);
// static_assert(offsetof(HitResult, unk64) == 64);
// static_assert(offsetof(HitResult, unk81) == 81);
// static_assert(offsetof(HitResult, indirectHit) == 108);
// static_assert(sizeof(HitResult) == 112);
