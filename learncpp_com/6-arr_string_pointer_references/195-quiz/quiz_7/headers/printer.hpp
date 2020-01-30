#ifndef PRINTER_H_
#define PRINTER_H_

#include <vector>
#include "card.hpp"

// Test
//#include <iostream>
// endTest

namespace printer{

  void PrintCard(const card::Card &card);

  void PrintDeck(std::vector<card::Card> &deck);
}


#endif  // PRINTER_H_
