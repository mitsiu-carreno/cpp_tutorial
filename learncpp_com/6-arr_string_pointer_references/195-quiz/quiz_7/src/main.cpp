#include <iostream>
#include <vector>

#include "card.hpp"
#include "deck.hpp"


int main(){
 
  auto deck { deck::CreateDeck() };

  deck::PrintDeck(deck);

  std::cout << "Shuffling deck :)\n\n";
  deck::ShuffleDeck(deck);

  deck::PrintDeck(deck);

  for(int i {0}; i < 10; ++i){
    std::cout << card::GetCardRankSuit(deck.at(i)) << " has value " << card::GetCardNumericValue(deck.at(i)) << std::endl;
  }

  return 0;
}
