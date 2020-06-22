#include <iostream>
#include <array>
#include <algorithm>
#include <functional>

bool Greater(int a, int b){
  // Order a before b if a is greater than b
  return (a < b);
}

void PrintArray(std::array<int, 5> arr){ 
  
  for(int i: arr){
    std::cout << i << " ";
  }
  std::cout << "\n";
}

int main(){
  
  std::array<int, 5> numbers{413, 117, 343, 5555, 0};
  
  std::sort(numbers.begin(), numbers.end(), Greater);
  
  PrintArray(numbers);
 
  // Because sorting is such a common operation, C++ provides a custom type (std::greater)
  // (which is part of the functional header)  

  //std::sort(numbers.begin(), numbers.end(), std::greater<int>{}); //Pre C++17
  std::sort(numbers.begin(), numbers.end(), std::greater{});  // C++17
  // Note the {}, because it is not a callable function, ITS A TYPE, and in order to use it,
  // we need to instantiate an object of that type.
  // The curly braces intantiate an anonymous object of that type (which then get passed 
  // as an argument to std::sort)
  
  PrintArray(numbers);

  return 0;
}
