#ifndef CARD_TYPES_H
#define CARD_TYPES_H

namespace cardTypes{
  enum class CardRanks{
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

  enum class CardSuits{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES,
    MAX_SUITS,
  };
}

#endif

