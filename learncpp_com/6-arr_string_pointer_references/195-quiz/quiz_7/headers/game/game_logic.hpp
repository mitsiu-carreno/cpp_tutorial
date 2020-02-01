#ifndef GAME_LOGIC_H_
#define GAME_LOGIC_H_

#include "player.hpp"

namespace gamelogic{

  bool AskPlayAgain();

  void ExecutePlayerTurn(player::Player &player, std::vector<card::Card> &deck);

}

#endif  // GAME_LOGIC_H_
