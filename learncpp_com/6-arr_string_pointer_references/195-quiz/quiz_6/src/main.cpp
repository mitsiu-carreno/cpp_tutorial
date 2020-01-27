//Let’s pretend we’re writing a card game.
/*
a) A deck of cards has 52 unique cards (13 card ranks of 4 suits). Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace) and suits (clubs, diamonds, hearts, spades). Those enumerators will not be used to index arrays.

b) Each card will be represented by a struct named Card that contains a rank and a suit. Create the struct.

c) Create a printCard() function that takes a const Card reference as a parameter and prints the card rank and value as a 2-letter code (e.g. the jack of spades would print as JS).

hint : Use a switch-statement

d) A deck of cards has 52 cards. Create an array (using std::array) to represent the deck of cards, and initialize it with one of each card. Do this in a function named createDeck and call createDeck from main. createDeck should return the deck to main.

Hint: Use static_cast if you need to convert an integer into an enumerated type.

e) Write a function named printDeck() that takes the deck as a const reference parameter and prints the cards in the deck. Use a range-based for-loop. When you can printDeck with the deck you generated in the previous task, the output should be

2C 3C 4C 5C 6C 7C 8C 9C TC JC QC KC AC 2D 3D 4D 5D 6D 7D 8D 9D TD JD QD KD AD 2H 3H 4H 5H 6H 7H 8H 9H TH JH QH KH AH 2S 3S 4S 5S 6S 7S 8S 9S TS JS QS KS AS

If you used different characters, that’s fine too.

f) Write a function named shuffleDeck to shuffle the deck of cards using std::shuffle. Update your main function to shuffle the deck and print out the shuffled deck.

Reminder: Only seed your random number generator once.

g) Write a function named getCardValue() that returns the value of a Card (e.g. a 2 is worth 2, a ten, jack, queen, or king is worth 10. Assume an Ace is worth 11).
*/

#include <iostream>
#include <array>

#include <deckInfo.hpp>

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

struct Card{
  CardRanks rank {};
  CardSuits suit {};
};

void printCard(const Card &card){
  switch(card.rank){
    case CardRanks::RANK_2:
      std::cout << '2';
      break;
    case CardRanks::RANK_3:
      std::cout << '3';
      break;
    case CardRanks::RANK_4:
      std::cout << '4';
      break;
    case CardRanks::RANK_5:
      std::cout << '5';
      break;
    case CardRanks::RANK_6:
      std::cout << '6';
      break;
    case CardRanks::RANK_7:
      std::cout << '7';
      break;
    case CardRanks::RANK_8:
      std::cout << '8';
      break;
    case CardRanks::RANK_9:
      std::cout << '9';
      break;
    case CardRanks::RANK_10:
      std::cout << "10";
      break;
    case CardRanks::JACK:
      std::cout << 'J';
      break;
    case CardRanks::QUEEN:
      std::cout << 'Q';
      break;
    case CardRanks::KING:
      std::cout << 'K';
      break;
    case CardRanks::ACE:
      std::cout << 'A';
      break;
    default:
      std::cout << '?';
      break;
  }

  switch(card.suit){
    case CardSuits::CLUBS:
      std::cout << 'C';
      break;
    case CardSuits::DIAMONDS:
      std::cout << 'D';
      break;
    case CardSuits::HEARTS:
      std::cout << 'H';
      break;
    case CardSuits::SPADES:
      std::cout << 'S';
      break;
    default:
      std::cout << '?';
      break;
  }
  std::cout << std::endl;
};

std::array<Card, DECK_LENGTH> createDeck(){
  std::array<Card, DECK_LENGTH> deck {};
  int deckIndex = 0;
  for(int i {0}; i < static_cast<int>(CardSuits::MAX_SUITS); ++i){
    for(int j {0}; j < static_cast<int>(CardRanks::MAX_RANKS); ++j){
      deck.at(deckIndex).rank = static_cast<CardRanks>(j);
      deck.at(deckIndex).suit = static_cast<CardSuits>(i);
      ++deckIndex;
    }
  } 
  return deck;
}

void printDeck(std::array<Card, DECK_LENGTH> &deck){
  for (const Card &card : deck){
    printCard(card);
  }
}

int main(){

  //Card testCard {CardRanks::JACK, CardSuits::SPADES};
   
  auto deck { createDeck() };

  printDeck(deck);


  return 0;
}
