#include <vector>
#include "card.hpp"
#include "random_generator.hpp"


namespace shuffler {

  void ShuffleDeck(std::vector<card::Card> &deck){
    int deck_len = deck.size();
    for(int i {0}; i<deck_len; ++i){
      int new_position = randomgenerator::GenRandom(0, deck_len-1);
      card::Card temp = deck.at(i);
      deck.at(i) = deck.at(new_position);
      deck.at(new_position) = temp;
    }  
  }
}

