#include "constants.hpp"
#include "card.hpp"


int CalcDeckLength(){  
  return static_cast<int>(card::Ranks::MAX_RANKS) * static_cast<int>(card::Suits::MAX_SUITS);
}

int constants::kDeckLength { CalcDeckLength() };
