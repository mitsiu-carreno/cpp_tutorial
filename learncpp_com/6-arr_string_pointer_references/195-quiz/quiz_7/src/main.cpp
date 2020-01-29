#include <iostream>
#include <vector>

#include "cardTypes.hpp"
#include "deck.hpp"
#include "printer.hpp"
#include "shuffler.hpp"

int getCardValue(const cardTypes::Card &card){
  switch(card.rank){
    case cardTypes::CardRanks::RANK_2:
    case cardTypes::CardRanks::RANK_3:
    case cardTypes::CardRanks::RANK_4:
    case cardTypes::CardRanks::RANK_5:
    case cardTypes::CardRanks::RANK_6:
    case cardTypes::CardRanks::RANK_7:
    case cardTypes::CardRanks::RANK_8:
    case cardTypes::CardRanks::RANK_9:
    case cardTypes::CardRanks::RANK_10:
      return static_cast<int>(card.rank) + 1;
    case cardTypes::CardRanks::JACK:
    case cardTypes::CardRanks::QUEEN:
    case cardTypes::CardRanks::KING:
      return 10;
    case cardTypes::CardRanks::ACE:
      return 11;
    default:
      // Errr probably a joker card which we never intended to create
      std::cout << "What is this card?? -> "; 
      printer::printCard(card);
      return 0;
  }
} 
int main(){
 
  auto deck { deck::createDeck() };

  printer::printDeck(deck);

  std::cout << "Shuffling deck :)\n\n";
  shuffler::shuffleDeck(deck);

  printer::printDeck(deck);

  for(int i {0}; i < 10; ++i){
    printer::printCard(deck.at(i));
    std::cout << "has value " << getCardValue(deck.at(i)) << std::endl;
  }

  return 0;
}
