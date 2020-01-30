#include <vector>

#include "constants.hpp"
#include "card.hpp"


namespace deck{
  
  std::vector<card::Card> CreateDeck(){
    std::vector<card::Card> deck {};

    deck.resize(constants::kDeckLength);

    int deck_index = 0;
    for(int i {0}; i < static_cast<int>(card::Suits::MAX_SUITS); ++i){
      for(int j {0}; j < static_cast<int>(card::Ranks::MAX_RANKS); ++j){
        deck.at(deck_index).rank = static_cast<card::Ranks>(j);
        deck.at(deck_index).suit = static_cast<card::Suits>(i);
        ++deck_index;
      }
    } 
    return deck;
  }
}
