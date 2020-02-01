#ifndef GAME_LOGIC_H_
#define GAME_LOGIC_H_

namespace gamelogic{
  enum class PlayerOptions{
    HIT,
    STAND,
    MAX_PLAYER_OPTIONS,
  };
  
  bool AskPlayAgain();
}

#endif  // GAME_LOGIC_H_
