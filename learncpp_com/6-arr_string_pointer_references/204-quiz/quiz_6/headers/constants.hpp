#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace constants{
  // Funnily, although the deck length is 52, that is the result of all the possible combinations between ranks and suits, 
  // so instead of just dropping a horrible 52, we make the actual calc at constants.cpp just in case 
  
  extern int DECK_LENGTH;
}


#endif

