#include <iostream>
#include <vector>

#include "card.hpp"

namespace printer{

  void PrintCard(const card::Card &card){
    switch(card.rank){
      case card::Ranks::RANK_2:
        std::cout << '2';
        break;
      case card::Ranks::RANK_3:
        std::cout << '3';
        break;
      case card::Ranks::RANK_4:
        std::cout << '4';
        break;
      case card::Ranks::RANK_5:
        std::cout << '5';
        break;
      case card::Ranks::RANK_6:
        std::cout << '6';
        break;
      case card::Ranks::RANK_7:
        std::cout << '7';
        break;
      case card::Ranks::RANK_8:
        std::cout << '8';
        break;
      case card::Ranks::RANK_9:
        std::cout << '9';
        break;
      case card::Ranks::RANK_10:
        std::cout << "10";
        break;
      case card::Ranks::JACK:
        std::cout << 'J';
        break;
      case card::Ranks::QUEEN:
        std::cout << 'Q';
        break;
      case card::Ranks::KING:
        std::cout << 'K';
        break;
      case card::Ranks::ACE:
        std::cout << 'A';
        break;
      default:
        std::cout << '?';
        break;
    }

    switch(card.suit){
      case card::Suits::CLUBS:
        std::cout << 'C';
        break;
      case card::Suits::DIAMONDS:
        std::cout << 'D';
        break;
      case card::Suits::HEARTS:
        std::cout << 'H';
        break;
      case card::Suits::SPADES:
        std::cout << 'S';
        break;
      default:
        std::cout << '?';
        break;
    }
    std::cout << std::endl;
  };

  void PrintDeck(std::vector<card::Card> &deck){
    for (const card::Card &card : deck){
      PrintCard(card);
    }
  }
}

