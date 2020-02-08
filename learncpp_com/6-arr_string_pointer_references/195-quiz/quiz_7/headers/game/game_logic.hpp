#ifndef GAME_LOGIC_H_
#define GAME_LOGIC_H_

#include "player.hpp"

namespace gamelogic{

  bool AskPlayAgain();

  void ExecuteDealerOpeningTurn(player::Player &dealer, std::vector<card::Card> &deck);

  void ExecuteDealerClosingTurn(player::Player &dealer, std::vector<card::Card> &deck);

  bool ExecutePlayerTurn(player::Player &player, std::vector<card::Card> &deck);

  void PublishWinner(player::Player &player, player::Player &dealer);

}

#endif  // GAME_LOGIC_H_
