#ifndef PRINTER_H
#define PRINTER_H

#include <cardTypes.hpp>
#include <vector>

namespace printer{

  void printCard(const cardTypes::Card &card);

  void printDeck(std::vector<cardTypes::Card> &deck);
}



#endif
