#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include "card.hpp"


namespace deck{
  
  std::vector<card::Card> CreateDeck();

  void ShuffleDeck(std::vector<card::Card> &deck);

  void PrintDeck(const std::vector<card::Card> &deck);
}

#endif  // DECK_H_ 
