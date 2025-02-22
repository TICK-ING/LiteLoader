/**
 * @file  ItemFrameBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemFrameBlockActor.
 *
 */
class ItemFrameBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMFRAMEBLOCKACTOR
public:
    class ItemFrameBlockActor& operator=(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemFrameBlockActor();
    /**
     * @vftbl  1
     * @symbol  ?load\@ItemFrameBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@ItemFrameBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol  ?tick\@ItemFrameBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol  ?onChanged\@ItemFrameBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  ?onRemoved\@ItemFrameBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol  ?getShadowRadius\@ItemFrameBlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@ItemFrameBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@ItemFrameBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ??0ItemFrameBlockActor\@\@QEAA\@VBlockPos\@\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ItemFrameBlockActor(class BlockPos, enum class BlockActorType, std::string const &);
    /**
     * @symbol  ??0ItemFrameBlockActor\@\@QEAA\@VBlockPos\@\@\@Z
     */
    MCAPI ItemFrameBlockActor(class BlockPos);
    /**
     * @symbol  ?actuallyDropItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@_N\@Z
     */
    MCAPI void actuallyDropItem(class BlockSource &, bool);
    /**
     * @symbol  ?dropFramedItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@_N\@Z
     */
    MCAPI void dropFramedItem(class BlockSource &, bool);
    /**
     * @symbol  ?getFramedItem\@ItemFrameBlockActor\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getFramedItem() const;
    /**
     * @symbol  ?getRotation\@ItemFrameBlockActor\@\@QEAAMXZ
     */
    MCAPI float getRotation();
    /**
     * @symbol  ?rotateFramedItem\@ItemFrameBlockActor\@\@QEAAXXZ
     */
    MCAPI void rotateFramedItem();
    /**
     * @symbol  ?setItem\@ItemFrameBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI void setItem(class BlockSource &, class ItemInstance const &);
    /**
     * @symbol  ?updateNameTag\@ItemFrameBlockActor\@\@QEAAXXZ
     */
    MCAPI void updateNameTag();
    /**
     * @symbol  ?ROTATION_DEGREES\@ItemFrameBlockActor\@\@2MB
     */
    MCAPI static float const ROTATION_DEGREES;

//private:
    /**
     * @symbol  ?_checkMapRemoval\@ItemFrameBlockActor\@\@AEAAXAEAVBlockSource\@\@AEAVItemInstance\@\@\@Z
     */
    MCAPI void _checkMapRemoval(class BlockSource &, class ItemInstance &);
    /**
     * @symbol  ?_updateBit\@ItemFrameBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBV?$ItemStateVariant\@_N\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI void _updateBit(class BlockSource &, class ItemStateVariant<bool> const &, class HashedString const &);

private:

};