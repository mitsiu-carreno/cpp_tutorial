#include <random>
#include <ctime>

// Initialize our mersenne twister with a random seed based on the clock
static std::mt19937 mersenne { static_cast<unsigned int>(std::time(nullptr)) };

namespace randomgenerator{

  int GenRandom(int min, int max){
    // Create a random number generator that generates uniform numbers between min and max
    std::uniform_int_distribution<> dice(min, max);
    return dice(mersenne);
  }
}

