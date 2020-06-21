#include <iostream>
#include <array>
#include <iterator>   // For std::begin and std::end

int main(){
  // Iterating is such a common operation that all standar library containers offer direct
  // support for iteraton
  
  std::array array {0,1,2,3,4,5,6,7};
  
  // Ask the begin and end points (via the begin and end member functions)
  auto begin {array.begin()};
  auto end {array.end()};

  for(int * ptr {begin}; ptr != end; ++ptr){
    std::cout << *ptr << " ";
  }  
  std::cout << "\n";

  // iterator header allow us to use std::begin and std::end
  auto begin2 {std::begin(array)};
  auto end2 {std::end(array)};

  for(auto p {begin2}; p != end2; ++p){
    std::cout << *p << " "; 
  }
  std::cout << "\n";

  // Behind the scenes, this ranged-based for-loop calls begin() and end() of the type to iterate
  // over
  for(int i : array){
    std::cout << i << " ";
  }
  std::cout << "\n";

  // C-style fixed arrays can be used with std::begin and std::end functions, so we can loop
  // through them with a ranged-based for-loop as well. 
  // Dynamic arrays dont work though, because there is no std::end function for them
  // (because the type information doesn't contain the array's length) 

  return 0;
}
