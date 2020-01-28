#include <constants.hpp>
#include <cardTypes.hpp>


int calcDeckLength(){  
  return static_cast<int>(cardTypes::CardRanks::MAX_RANKS) * static_cast<int>(cardTypes::CardSuits::MAX_SUITS);
}

int constants::DECK_LENGTH { calcDeckLength() };
