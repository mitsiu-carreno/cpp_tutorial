#include <iostream>

#include "constants.hpp"
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
          std::system("clear");
          return true; 
        }else if(input_play_again == "n" || input_play_again == "N" || input_play_again == "no" || input_play_again == "NO"){
          std::cout << "Fare well sir, hope you enjoy your time at MIT-Casinos\n\n";
          return false;
        }else{
          std::cout << "Sir you seem a little drunk, please answer \"y\" (yes) or \"n\" (no)\n\n";
        }
      }else{
        std::cout << "Sorry didn't catch your answer is it a \"y\" (yes) or \"n\" (no)\n\n";
      }

    }
  }

  void ExecuteDealerOpeningTurn(player::Player &dealer, std::vector<card::Card> &deck){
    std::cout << "This is the dealer opening turn\n";

    // By default the dealer get one card (visible to the player, in reallity he get's two (one covered))
    dealer.stored_cards.push_back(deck::PopOneCard(deck));
    player::UpdatePlayerPoints(dealer);

    userexperience::DrawCards(dealer.stored_cards);
    std::cout << "The dealer have: " << dealer.points << " shpoints\n\n\n";

  }

  bool ExecutePlayerTurn(player::Player &player, std::vector<card::Card> &deck){
    std::cout << "It's your turn, good luck\n";
      
    // By default the player gets two cards
    player.stored_cards.push_back(deck::PopOneCard(deck));    
    player.stored_cards.push_back(deck::PopOneCard(deck));

    player::UpdatePlayerPoints(player);

    userexperience::DrawCards(player.stored_cards);
    std::cout << "You have: " << player.points << " shpoints\n\n\n";

    while(true){
    
      player::PlayerOptions selectedOption = player::AskPlayerMovement();
      if(selectedOption == player::PlayerOptions::HIT){
        // Take one card from the deck and give it to the player
        card::Card new_card = deck::PopOneCard(deck);
        
        std::cout << "Your card is: " << card::GetCardRankSuit(new_card) << std::endl;

        player.stored_cards.push_back(new_card);
        // Update player points
        player::UpdatePlayerPoints(player);

        userexperience::DrawCards(player.stored_cards);
        
        //if(player.points <= constants::kMaximumPlayerPoints){
        if(player.points <= constants::kMaximumPlayerPoints){
          std::cout << "You have: " << player.points << " shpoints\n\n\n";
        }else{
          std::cout << "Oh sir, you busted, you reached " << player.points << " shpoints, sorry\n\n\n";
          return false;
        }
         
      }else{
        // stand logic == finish turn
        return true;
      }
    }
  }

  void ExecuteDealerClosingTurn(player::Player &dealer, std::vector<card::Card> &deck){
    while(dealer.points < constants::kNecessaryDealerPoints){
      card::Card new_card = deck::PopOneCard(deck);

      std::cout << "Dealer new card is: " << card::GetCardRankSuit(new_card) << std::endl;

      dealer.stored_cards.push_back(new_card);
      
      // update dealer points
      player::UpdatePlayerPoints(dealer);
      userexperience::DrawCards(dealer.stored_cards);

      if(dealer.points <= constants::kMaximumPlayerPoints){
        std::cout << "The dealer have: " << dealer.points << " shpoints\n\n\n";
      }else{
        std::cout << "Oh my, the dealer busted!, he reached " << dealer.points << " shpoints\n\n\n";
      }
    }
  }

  void PublishWinner(player::Player &player, player::Player &dealer){
    
    
    // Player busted
    if(player.points > constants::kMaximumPlayerPoints){
      std::cout << "Sorry the house wins\n\n";
      return;
    }else if(dealer.points > constants::kMaximumPlayerPoints){  //dealer busted
      std::cout << "Congratulations sir, you won!\n\n";
      return;
    }

    // Someone got a blackjack
    if(
      (dealer.stored_cards.size() == constants::kCardsForBlackjack && dealer.points == constants::kMaximumPlayerPoints)
      ||
      (player.stored_cards.size() == constants::kCardsForBlackjack && player.points == constants::kMaximumPlayerPoints)
    ){
      //Check if tie
      if(player.stored_cards.size() == dealer.stored_cards.size()){
        std::cout << "Uff can you believe both got blackjacks! what are the odds!\n... (0.00036% just in case you wonder)\n\n";
        return;
      }else if(player.stored_cards.size() == constants::kCardsForBlackjack){  // No tie, player got blackjack
        std::cout << "Contratulations sir, you gon by blackjack!\n\n";
        return;
      }else{  // No tie, dealer got blackjack
        std::cout << "Sorry sir, the house won by blackjack, better luck next time\n\n";
        return;
      }
    }

    // Decide by points
    if(player.points == dealer.points){
      std::cout << "Wow we are tied by " << player.points << " shpoints\n\n";
      return;
    }else if(player.points > dealer.points){
      std::cout << "Sir you won by " << (player.points - dealer.points) <<" shpoints, great match\n\n";
      return;
    }else{
      std::cout << "Sir, the house won by " << (dealer.points - player.points) << " shpoints\n\n";
      return;
    }
    std::cout << "Hommie gotta be honest w/you, how da fuk you ended up here??\n";    
  }
}
