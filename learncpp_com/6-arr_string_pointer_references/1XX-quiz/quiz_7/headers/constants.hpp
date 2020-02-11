#ifndef CONSTANTS_H_
#define CONSTANTS_H_

// Test
//#include "constants.hpp"
//#include "card.hpp"
// endTest

namespace constants{
  // Funnily, although the deck length is 52, that is the result of all the possible combinations between ranks and suits, 
  // so instead of just dropping a horrible 52, we make the actual calc at constants.cpp just in case 
  
  extern int kDeckLength;

  const int kMaximumPlayerPoints = 21;

  const int kNecessaryDealerPoints = 17;
  
  const int kCardsForBlackjack = 2; // As and a ten
}


#endif  // CONSTANTS_H_

