#include <iostream>
#include <vector>

#include "card.hpp"

namespace userexperience {

  void DrawTopBottomCards(const std::vector<card::Card> &deck){
    
    for(const card::Card &card : deck){
      std::string card_rank_suit = card::GetCardRankSuit(card);
      std::string card_top {"*****"};
      for(int i {0}; i < static_cast<int>(card_rank_suit.length()); ++i){
        card_top += "*";
      }
      std::cout << card_top << "\t";
    }
    
    std::cout << std::endl;

  }

  void DrawCardSides(const std::vector<card::Card> &deck){
        
    for(const card::Card &card : deck){
      std::string card_rank_suit = card::GetCardRankSuit(card);
      std::string card_border {"*   "};
      for(int i {0}; i < static_cast<int>(card_rank_suit.length()); ++i){
        card_border += " ";
      }
      card_border += "*";
      std::cout << card_border << "\t";
    }
    
    std::cout << std::endl;
  }

  void DrawCards(const std::vector<card::Card> &deck){
    
    DrawTopBottomCards(deck);

    for(const card::Card &card : deck){
      std::cout << "*" << card::GetCardRankSuit(card) << "   *\t";
      
    }

    std::cout << std::endl;

    DrawCardSides(deck);
    DrawCardSides(deck);
    DrawTopBottomCards(deck);
  }  
}
