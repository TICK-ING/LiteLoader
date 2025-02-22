#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player open container screen event.
 * @details This event is called when a player opens a container screen.
 */
class PlayerOpenContainerScreenEvent : public Event<PlayerOpenContainerScreenEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerOpenContainerScreenEvent(Player* player);

    LL_DELETE_COPY(PlayerOpenContainerScreenEvent);
    LL_DELETE_MOVE(PlayerOpenContainerScreenEvent);
};

} // namespace ll::event::player
