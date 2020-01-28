#include <iostream>
#include <vector>

#include <cardTypes.hpp>

void printCard(const cardTypes::Card &card){
  switch(card.rank){
    case cardTypes::CardRanks::RANK_2:
      std::cout << '2';
      break;
    case cardTypes::CardRanks::RANK_3:
      std::cout << '3';
      break;
    case cardTypes::CardRanks::RANK_4:
      std::cout << '4';
      break;
    case cardTypes::CardRanks::RANK_5:
      std::cout << '5';
      break;
    case cardTypes::CardRanks::RANK_6:
      std::cout << '6';
      break;
    case cardTypes::CardRanks::RANK_7:
      std::cout << '7';
      break;
    case cardTypes::CardRanks::RANK_8:
      std::cout << '8';
      break;
    case cardTypes::CardRanks::RANK_9:
      std::cout << '9';
      break;
    case cardTypes::CardRanks::RANK_10:
      std::cout << "10";
      break;
    case cardTypes::CardRanks::JACK:
      std::cout << 'J';
      break;
    case cardTypes::CardRanks::QUEEN:
      std::cout << 'Q';
      break;
    case cardTypes::CardRanks::KING:
      std::cout << 'K';
      break;
    case cardTypes::CardRanks::ACE:
      std::cout << 'A';
      break;
    default:
      std::cout << '?';
      break;
  }

  switch(card.suit){
    case cardTypes::CardSuits::CLUBS:
      std::cout << 'C';
      break;
    case cardTypes::CardSuits::DIAMONDS:
      std::cout << 'D';
      break;
    case cardTypes::CardSuits::HEARTS:
      std::cout << 'H';
      break;
    case cardTypes::CardSuits::SPADES:
      std::cout << 'S';
      break;
    default:
      std::cout << '?';
      break;
  }
  std::cout << std::endl;
};

void printDeck(std::vector<cardTypes::Card> &deck){
  for (const cardTypes::Card &card : deck){
    printCard(card);
  }
}
