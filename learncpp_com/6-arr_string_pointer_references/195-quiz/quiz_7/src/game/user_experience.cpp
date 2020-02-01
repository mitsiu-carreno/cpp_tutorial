#include <iostream>
#include <vector>

#include "card.hpp"

namespace userexperience {
  void DrawCards(const std::vector<card::Card> &deck){
    
    for(const card::Card &card : deck){
      std::cout << "*" << card::GetCardRankSuit(card) << "   *";
      
    }
    std::cout << "to display " << deck.size() << " cards\n";
  }  
}
