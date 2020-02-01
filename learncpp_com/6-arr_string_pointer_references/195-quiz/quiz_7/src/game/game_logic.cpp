#include <iostream>

#include "utils.hpp"

namespace gamelogic{
  bool AskPlayAgain(){
    
    while(true){
     
      std::cout << "Do you want to play again? (y/n): ";
      std::string input_play_again;
      std::cin >> input_play_again;
      if(utils::IsInputValid()){
        
        if(input_play_again == "y" || input_play_again == "Y" || input_play_again == "yes" || input_play_again == "YES"){
          return true; 
        }else if(input_play_again == "n" || input_play_again == "N" || input_play_again == "no" || input_play_again == "NO"){
          return false;
        }else{
          std::cout << "Sir you seem a little drunk, please answer \"y\" (yes) or \"n\" (no)\n";
        }
      }else{
        std::cout << "Sorry didn't catch your answer is it a \"y\" (yes) or \"n\" (no)\n\n";
      }

    }
  }

}
