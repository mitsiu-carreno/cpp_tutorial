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

  struct Player{
    std::vector<card::Card> stored_cards;
    int points;  
  };

  PlayerOptions AskPlayerMovement();

}

#endif  // PLAYER_H_
