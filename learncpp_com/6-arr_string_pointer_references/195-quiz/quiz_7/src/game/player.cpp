#include <iostream>

#include "card.hpp"
#include "utils.hpp"
#include "game_logic.hpp"


namespace player {

  gamelogic::PlayerOptions AskPlayerMovement(){
    int input;
    while(true){
   
      std::cout << "What do you wanna do next? (1/2)\n";
      std::cout << "1 - Hit (Get another card)\n";
      std::cout << "2 - Stand ()\n";
      std::cin >> input; 
      if(utils::IsInputValid()){
        if(input > 0 && input <= static_cast<int>(gamelogic::PlayerOptions::MAX_PLAYER_OPTIONS)){
          return static_cast<gamelogic::PlayerOptions>(input -1);
        }else{
          // Answer out of range
          std::cout << "Haha, I know you want to choose " << input << " - Leave casino, but that's not an option, lets try again\n";
        }
      }else{
        std::cout << "Sorry didn't catch your next movement, please type 1 or 2 depending on your choice\n"; 
      }
    }
  }
} 
