#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"


namespace ll::event::player {

/**
 * @brief Player respawn event.
 * @details This event is called when a player respawn.
 */
class PlayerChatEvent : public Event<PlayerChatEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RW_MEMBER(std::string, message, getMessage, setMessage);

    explicit PlayerChatEvent(Player* player, std::string message);

    LL_DELETE_COPY(PlayerChatEvent);
    LL_DELETE_MOVE(PlayerChatEvent);
};

} // namespace ll::event::player
