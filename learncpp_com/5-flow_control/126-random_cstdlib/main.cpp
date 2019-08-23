#include <iostream>
#include <cstdlib>  // for std::rand() and std::srand()

int main(){
  std::srand(5323); // set initial seed value to 5323

  for(int count =1; count <= 10; ++count){
    std::cout << std::rand() << "\t"; // Print random numbers

    if(count % 10 == 0)
      std::cout << "\n";
  }

  std::cout << "-----SECOND RUN------\n";
  std::srand(5323); // set initial seed value to 5323

  for(int count =1; count <= 10; ++count){
    std::cout << std::rand() << "\t"; // Print random numbers

    if(count % 10 == 0)
      std::cout << "\n";
  }

  std::cout << "As can be seen, run twice generates the same numbers because both have the same seed, and the PRNG is deterministic\n";
  return 0;
}