#include <iostream>

#include "utils.hpp"
#include "deck.hpp"
#include "card.hpp"
#include "game_logic.hpp"
#include "player.hpp"
#include "user_experience.hpp"

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

  void ExecutePlayerTurn(player::Player &player, std::vector<card::Card> &deck){
    std::cout << "It's your turn, good luck\n";
    while(true){
    
      player::PlayerOptions selectedOption = player::AskPlayerMovement();
      if(selectedOption == player::PlayerOptions::HIT){
        // Take one card from the deck and give it to the player
        card::Card new_card = deck::PopOneCard(deck);
        
        std::cout << "Your card is: " << card::GetCardRankSuit(new_card) << std::endl;

        player.stored_cards.push_back(new_card);
        // Update player points
        player.points = 0;
        for(const card::Card &card : player.stored_cards){
          player.points += card::GetCardNumericValue(card);
        }

        userexperience::DrawCards(player.stored_cards);

        std::cout << "You have: " << player.points << " shpoints\n\n\n";
         
      }else{
        // stand logic
        break;
      }
    }
  }
}
