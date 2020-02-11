#include <iostream>

#include "constants.hpp"
#include "card.hpp"
#include "utils.hpp"
#include "game_logic.hpp"


namespace player {

  
  void UpdatePlayerPoints(player::Player &player){
    int count {0};
    int ace_found  {0};
    
    for(const card::Card &card : player.stored_cards){
      
      int card_numeric_value = card::GetCardNumericValue(card);
      // If As card must check if 1 or 11 

      if(card_numeric_value == 11){
        ++ace_found;
      }

      count += card_numeric_value;
    }
    
    while(count > constants::kMaximumPlayerPoints && ace_found > 0){
      count = count - 10;
      --ace_found;  
    }
    player.points = count;
  }

  player::PlayerOptions AskPlayerMovement(){
    int input;
    while(true){
   
      std::cout << "What do you wanna do next? (1/2)\n";
      std::cout << "1 - Hit (Get another card)\n";
      std::cout << "2 - Stand (Finish turn)\n";
      std::cin >> input;
      std::cout << std::endl;   
      if(utils::IsInputValid()){
        if(input > 0 && input <= static_cast<int>(player::PlayerOptions::MAX_PLAYER_OPTIONS)){
          return static_cast<player::PlayerOptions>(input -1);
        }else{
          // Answer out of range
          std::cout << "Haha, I know you want to choose " << input << " - Leave casino, but that's not an option, lets try again\n\n";
        }
      }else{
        std::cout << "Sorry didn't catch your next movement, please type 1 or 2 depending on your choice\n\n"; 
      }
    }
  }
} 
