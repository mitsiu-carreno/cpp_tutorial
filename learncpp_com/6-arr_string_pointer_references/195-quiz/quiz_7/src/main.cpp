#include <iostream>
#include <vector>

#include "card.hpp"
#include "deck.hpp"
#include "printer.hpp"
#include "shuffler.hpp"

int GetCardValue(const card::Card &card){
  switch(card.rank){
    case card::Ranks::RANK_2:
    case card::Ranks::RANK_3:
    case card::Ranks::RANK_4:
    case card::Ranks::RANK_5:
    case card::Ranks::RANK_6:
    case card::Ranks::RANK_7:
    case card::Ranks::RANK_8:
    case card::Ranks::RANK_9:
    case card::Ranks::RANK_10:
      return static_cast<int>(card.rank) + 1;
    case card::Ranks::JACK:
    case card::Ranks::QUEEN:
    case card::Ranks::KING:
      return 10;
    case card::Ranks::ACE:
      return 11;
    default:
      // Errr probably a joker card which we never intended to create
      std::cout << "What is this card?? -> "; 
      printer::PrintCard(card);
      return 0;
  }
} 
int main(){
 
  auto deck { deck::CreateDeck() };

  printer::PrintDeck(deck);

  std::cout << "Shuffling deck :)\n\n";
  shuffler::ShuffleDeck(deck);

  printer::PrintDeck(deck);

  for(int i {0}; i < 10; ++i){
    printer::PrintCard(deck.at(i));
    std::cout << "has value " << GetCardValue(deck.at(i)) << std::endl;
  }

  return 0;
}
