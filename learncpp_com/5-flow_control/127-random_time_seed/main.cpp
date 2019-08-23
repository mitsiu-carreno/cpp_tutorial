#include <iostream>
#include <cstdlib>  // std::rand() and std::srand()
#include <ctime>    // std::time()

int main(){
  std::cout << "This program is run at: " << std::time(nullptr) << "\n";
  std::cout << "Now we will use time as out seed\n";

  std::srand(static_cast<unsigned int>(std::time(nullptr)));  // set initial seed value to system clock
  for(int count = 1; count <=10; ++count){
    std::cout << std::rand() << "\t";
  }
  std::cout << "\n";

  return 0;
}