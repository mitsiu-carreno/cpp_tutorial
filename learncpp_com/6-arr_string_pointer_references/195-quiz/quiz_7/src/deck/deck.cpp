#include <iostream>
#include <vector>

#include "constants.hpp"
#include "card.hpp"
#include "random_generator.hpp"

namespace deck{
  
  std::vector<card::Card> CreateDeck(){
    std::vector<card::Card> deck {};

    // Avoid reallocating memory as we know the maximum capacity our deck is going to need, from there we will only extract cards 
    deck.reserve(constants::kDeckLength);

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


  void ShuffleDeck(std::vector<card::Card> &deck){
    int deck_len = deck.size();
    for(int i {0}; i<deck_len; ++i){
      int new_position = randomgenerator::GenRandom(0, deck_len-1);
      card::Card temp = deck.at(i);
      deck.at(i) = deck.at(new_position);
      deck.at(new_position) = temp;
    }  
  }

  void PrintDeck(const std::vector<card::Card> &deck){
    for(const card::Card &card : deck){
      std::cout << card::GetCardRankSuit(card) << std::endl;
    }
  }

  card::Card PopOneCard(std::vector<card::Card> &deck){
    card::Card poped_card = deck.back();
    deck.pop_back();
    return poped_card;
  }
}
