#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/block/CommandBlockExecuteEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/BaseCommandBlock.hpp"
#include "mc/BlockSource.hpp"
#include "mc/CommandOrigin.hpp"
#include "mc/Level.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::block {

CommandBlockExecuteEvent::CommandBlockExecuteEvent(
    std::string const&   command,
    bool                 isMinecart,
    BlockInstance const& blockInstance,
    Actor*               minecart
)
: command(command), isMinecart(isMinecart), blockInstance(blockInstance), minecart(minecart) {}

CommandBlockExecuteEvent::CommandBlockExecuteEvent(
    std::string&&        command,
    bool                 isMinecart,
    BlockInstance const& blockInstance,
    Actor*               minecart
)
: command(command), isMinecart(isMinecart), blockInstance(blockInstance), minecart(minecart) {}

LL_GETTER_IMPL(CommandBlockExecuteEvent, std::string, command, getCommand)
LL_GETTER_IMPL(CommandBlockExecuteEvent, bool, isMinecart, getIsMinecart)
LL_GETTER_IMPL(CommandBlockExecuteEvent, BlockInstance, blockInstance, getBlockInstance)
LL_GETTER_IMPL(CommandBlockExecuteEvent, Actor*, minecart, getMinecart)

LL_AUTO_TYPED_INSTANCE_HOOK(
    CmdBlockExecuteEventHook,
    BaseCommandBlock,
    HookPriority::Normal,
    "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
    bool,
    BlockSource*   blockSource,
    CommandOrigin* origin,
    bool*          a4
) {
    using EventManager = EventManager<CommandBlockExecuteEvent>;

    bool          isMinecart;
    auto&         command       = this->getCommand();
    Actor*        minecart      = nullptr;
    BlockInstance blockInstance = BlockInstance();

    if (static_cast<OriginType>(origin->getOriginType()) == OriginType::MinecartBlock) {
        isMinecart = true;
        minecart   = origin->getEntity();
    } else {
        isMinecart    = false;
        blockInstance = Level::getBlockInstance(origin->getBlockPosition(), blockSource);
    }

    CommandBlockExecuteEvent event(command, isMinecart, blockInstance, minecart);
    EventManager::fireEvent(event);
    if (event.isCancelled())
        return false;

    return this->origin(blockSource, origin, a4);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::CommandBlockExecuteEvent)
