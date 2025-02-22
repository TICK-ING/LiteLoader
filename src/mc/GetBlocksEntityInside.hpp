/**
 * @file  GetBlocksEntityInside.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "SideBySideEntityInsideBlocksComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GetBlocksEntityInside.
 *
 */
class GetBlocksEntityInside {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETBLOCKSENTITYINSIDE
public:
    class GetBlocksEntityInside& operator=(class GetBlocksEntityInside const &) = delete;
    GetBlocksEntityInside(class GetBlocksEntityInside const &) = delete;
    GetBlocksEntityInside() = delete;
#endif

public:
    /**
     * @symbol ?get@GetBlocksEntityInside@@SA?AV?$vector@UInternalData@SideBySideEntityInsideBlocksComponent@@V?$allocator@UInternalData@SideBySideEntityInsideBlocksComponent@@@std@@@std@@AEBVAABB@@AEBVIConstBlockSource@@@Z
     * @hash   -1354177126
     */
    MCAPI static std::vector<struct SideBySideEntityInsideBlocksComponent::InternalData> get(class AABB const &, class IConstBlockSource const &);

};