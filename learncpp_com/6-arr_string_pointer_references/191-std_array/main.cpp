#include <iostream>
#include <array>

int main(){

  // std::array WONT DECAY when passed into a function
  
  std::arry<int, 3> myArray;  // Declare an integer array with length 3

  // Just like the native implementation of fixed arrays, THE LENGTH MUST BE KNOWN AT COMPILE TIME
  
  // Can be initialized
  std::array<int,5> myArray2 = {9,7,5,3,1};  // Initializer list

  std::array<int,5> myArray3 {9,7,5,3,1};    // Uniform initialization

  

  return 0;
}
