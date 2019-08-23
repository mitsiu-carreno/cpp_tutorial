#include <iostream>

// PRNG - Pseudo Random Number Generator
unsigned int prng(){
  // out initial starting seed is 5323
  static unsigned int seed = 5323;

  // Take the current seed and generate a new value from it 
  // Due to our use of large constants and overflow, it would be 
  // hard for someone to casually predict what the next number 
  // is going to be from the previous one
  seed = 8253729 * seed + 2396403;

  // Take the seed and return a value between 0 and 32767
  return seed % 32768;

}

int main(){
  std::cout << "The following is not a really PRNG, but is usefull as introduction\n";

  for(int count=1; count <= 100; ++count){
    std::cout << prng() << "\t";

    if(count % 10 == 0)
      std::cout << "\n";
  }

  return 0;
}