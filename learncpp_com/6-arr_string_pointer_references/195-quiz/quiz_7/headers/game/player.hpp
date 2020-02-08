#ifndef PLAYER_H_
#define PLAYER_H_

#include <vector>
#include "card.hpp"

namespace player {

  enum class PlayerOptions{
    HIT,
    STAND,
    MAX_PLAYER_OPTIONS,
  };

  enum class PlayerTypes{
    USER,
    DEALER,
    MAX_PLAYER_TYPES,
  };

  struct Player{
    std::vector<card::Card> stored_cards;
    int points;
    PlayerTypes player_type;
  };

  void UpdatePlayerPoints(player::Player &player);

  PlayerOptions AskPlayerMovement();

}

#endif  // PLAYER_H_
