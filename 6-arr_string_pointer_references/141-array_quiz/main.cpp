#include <iostream>

namespace Animals{
  enum Animals{
    CHICKEN,
    DOG,
    CAT,
    ELEPHANT,
    DUCK,
    SNAKE,
    MAX_ANIMALS
  };
}

int main()
{
  // Declare an array to hold the temperature (to the nearest tenth of a degree) for each day of a year (assume 365 days). Initialize the array with 0.0 for each day;
  double temp[365] = {};
  std::cout << sizeof(temp) << " bytes to store the temp of 365 days (each day uses " << sizeof(temp[0]) << " bytes)\n";   // <- this is just curiosity

  int legs[Animals::MAX_ANIMALS] = {2,4,4,4,2,0};

  std::cout << "The elephant has " << legs[Animals::ELEPHANT] << " legs\n";
  std::cout << "The snake has " << legs[Animals::SNAKE] << " legs\n";

  return 0;
}