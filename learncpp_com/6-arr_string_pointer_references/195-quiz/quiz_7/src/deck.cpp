#include <vector>

#include "constants.hpp"
#include "cardTypes.hpp"


namespace deck{
  
  std::vector<cardTypes::Card> createDeck(){
    std::vector<cardTypes::Card> deck {};

    deck.resize(constants::DECK_LENGTH);

    int deckIndex = 0;
    for(int i {0}; i < static_cast<int>(cardTypes::CardSuits::MAX_SUITS); ++i){
      for(int j {0}; j < static_cast<int>(cardTypes::CardRanks::MAX_RANKS); ++j){
        deck.at(deckIndex).rank = static_cast<cardTypes::CardRanks>(j);
        deck.at(deckIndex).suit = static_cast<cardTypes::CardSuits>(i);
        ++deckIndex;
      }
    } 
    return deck;
  }
}
