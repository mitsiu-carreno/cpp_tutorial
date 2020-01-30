#include <iostream>

#include "card.hpp"

namespace card{

  std::string GetCardRankSuit(const card::Card &card){
    std::string card_rank_suit;
    switch(card.rank){
      case card::Ranks::RANK_2:
        card_rank_suit += '2';
        break;
      case card::Ranks::RANK_3:
        card_rank_suit += '3';
        break;
      case card::Ranks::RANK_4:
        card_rank_suit += '4';
        break;
      case card::Ranks::RANK_5:
        card_rank_suit += '5';
        break;
      case card::Ranks::RANK_6:
        card_rank_suit += '6';
        break;
      case card::Ranks::RANK_7:
        card_rank_suit += '7';
        break;
      case card::Ranks::RANK_8:
        card_rank_suit += '8';
        break;
      case card::Ranks::RANK_9:
        card_rank_suit += '9';
        break;
      case card::Ranks::RANK_10:
        card_rank_suit += "10";
        break;
      case card::Ranks::JACK:
        card_rank_suit += 'J';
        break;
      case card::Ranks::QUEEN:
        card_rank_suit += 'Q';
        break;
      case card::Ranks::KING:
        card_rank_suit += 'K';
        break;
      case card::Ranks::ACE:
        card_rank_suit += 'A';
        break;
      default:
        card_rank_suit += '?';
        break;
    }

    switch(card.suit){
      case card::Suits::CLUBS:
        card_rank_suit += 'C';
        break;
      case card::Suits::DIAMONDS:
        card_rank_suit += 'D';
        break;
      case card::Suits::HEARTS:
        card_rank_suit += 'H';
        break;
      case card::Suits::SPADES:
        card_rank_suit += 'S';
        break;
      default:
        card_rank_suit += '?';
        break;
    }
    return card_rank_suit;
  };

  int GetCardNumericValue(const card::Card &card){
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
        std::cout << "What is this card?? -> " << card::GetCardRankSuit(card); 
        return 0;
    } 
  }
}
