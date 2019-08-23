#include <iostream>
#include <cstdlib>  // std::srand() and std::rand()
#include <ctime>    // std::time()

// Generate a random number between min and max (inclusive)
// Assumes max - min <= RAND_MAX
int getRandomNumber(int min, int max){
  static const double fraction = 1.0 / (RAND_MAX + 1.0);  
  // static used for efficency, so we only calculate this value once

  // evenly distribute the random number across our range
  // (max - min + 1) => the amount of numbers between min and max (min=2, max=6, 6-2+1=5 [2,3,4,5,6] )
  // std::rand() * fraction => convert the result of rand() to a floating poing number between 0(inclusive) and 1(exclusive)
  return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main(){ 
  std::srand(static_cast<unsigned int>(std::time(nullptr)));

  for(int count =1; count <= 10; ++count){
    std::cout << getRandomNumber(0, 10) << "\t";
  }
  std::cout << std::endl;

  return 0;
}