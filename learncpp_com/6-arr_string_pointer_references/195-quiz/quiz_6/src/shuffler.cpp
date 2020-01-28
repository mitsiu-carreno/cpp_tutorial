#include <vector>
#include <cardTypes.hpp>
#include <randomGenerator.hpp>

void shuffleDeck(std::vector<cardTypes::Card> &deck){
  int deck_len = deck.size();
  for(int i {0}; i<deck_len; ++i){
    int newPosition = gen_random(0, deck_len-1);
    cardTypes::Card temp = deck.at(i);
    deck.at(i) = deck.at(newPosition);
    deck.at(newPosition) = temp;
  }  
}
