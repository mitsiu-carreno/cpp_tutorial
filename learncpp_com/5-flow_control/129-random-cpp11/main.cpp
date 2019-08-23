#include <iostream>
#include <random>   // std::mt19937
#include <ctime>    // std::time 

int main(){

    // Initialize our mersenne twister with a random seed based on clock
    std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr)));

    // Create a reusable random number generator that generates uniform numbers between 1 and 6
    std::uniform_int_distribution<> dice(1, 6);

    for(int count = 1; count <= 600; ++count){
      std::cout << dice(mersenne) << "\t";

      if(count%6 == 0 )
        std::cout << "\n";
    }

    return 0;
}