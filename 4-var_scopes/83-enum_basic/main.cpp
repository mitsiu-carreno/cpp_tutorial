#include <iostream>


//Define a new enumeration called Color
enum Color{
  // Here are the enumerators
  // These define all the possible values this can hold
  // Each enumerator is separated by a comma
  
  COLOR_BLACK,  // assigned 0
  COLOR_RED,    // assigned 1
  COLOR_BLUE,   // assigned 2
  BLUE,         // assigned 3
  COLOR_PINK,   // assigned 4 -- see the trailing comma on the last enumerator
};

enum People{
  PEOPLE_MIT = -3,  // assigned -3
  PEOPLE_KAR,       // assigned -2
  PEOPLE_JOR = 5,   // assigned 5 
  PEOPLE_VIC = 5,   // share the same value as PEOPLE_JOR -- PEOPLE_JOR and PEOPLE_VIC become non-distinct (they're interchangeable)
  PEOPLE_PABL,      // assigned 6
  //BLUE,         // error, BLUE was already used in enum Color in the global space
};

int main(){

  // Define a few variables of enumerated type color
  Color paint = COLOR_RED;
  Color house(COLOR_BLUE);
  // Color apple{COLOR_PINK}

  std::cout << "Printing paint assiged to COLOR_RED enumerator:\t" << paint << "\n";
  std::cout << "Printing house assigned to COLOR_BLUE enumerator:\t" << house << "\n";

  return 0;
}
