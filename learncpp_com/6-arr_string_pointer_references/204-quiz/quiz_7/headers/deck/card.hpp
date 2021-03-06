#ifndef CARD_H_
#define CARD_H_

#include <string>

namespace card{

  enum class Ranks{
    ACE,
    RANK_2,
    RANK_3,
    RANK_4, 
    RANK_5, 
    RANK_6, 
    RANK_7, 
    RANK_8, 
    RANK_9, 
    RANK_10, 
    JACK,
    QUEEN,
    KING, 
    MAX_RANKS,
  };

  enum class Suits{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES,
    MAX_SUITS,
  };

  struct Card{
    card::Ranks rank {};
    card::Suits suit {};
  };
 
  std::string GetCardRankSuit(const card::Card &card);

  int GetCardNumericValue(const card::Card &card); 
  
}

#endif  // CARD_H_

