#include "clear_screen.hpp"

#include <iostream>

/*
 * Reference:
 * https://www.cplusplus.com/articles/4z18T05o/
 * https://stackoverflow.com/questions/5919996/how-to-detect-reliably-mac-os-x-ios-linux-windows-in-c-preprocessor
 */

/*
 * Compile: 
 * g++ -std=c++1z -o main -I include/ -lcurses src/main.cpp src/utils/clear_screen.cpp && ./main
*/

int main(){

  std::cout << "Hello friend... hello friend, that's lame\n";
  ClearScreen();
  
  std::cout << "Maybe i should give you a name, but that's a slippery slope\n"; 

  return 0;
}
