#include <iostream>
#include <array>

int main(){
  
  std::array<int, 5> myArray {1,2,3,4,5};

  /* Whats wrong with:
   *
   * for(int i {0}; i<myArray.size(); ++i){
   *   std::cout << myArray[i] << ' ';
   * }
   *
   * The anser is that size function and array index parameter to operator[] use a type called "size_type",
   * which is defined in the C++ standard as an UNSIGNED INTEGRAL TYPE
   *
   * Our loop counter (i) is a SIGNED INT, therefore both the comparison
   * i<myArray.size() 
   * and
   * myArray[i] 
   * have type mismatches
   *
   * Interestingly, "size_type" isn't a global type (like int or std::size_t)
   * rather, it's defined inside the definition of std::array (C++ allows nested types)
   * 
   * This means when we want to use "size_type" we have to prefix is with the full array type
   * (think of std::array acting as a namespace in this regard)
   *
  */

  // Therefore, the correct way to write the above code is:
  
  for(std::array<int, 5>::size_type i {0}; i < myArray.size(); ++i){
    std::cout << myArray[i] << ' ';
  }
  std::cout << std::endl;


  // Thats not very readable. A type alias can help:
  
  using index_t = std::array<int, 5>::size_type;

  for (index_t i{0}; i < myArray.size(); ++i){
    std::cout << myArray[i] << ' ';
  }
  std::cout << std::endl;

  // This solution is probably the best combination of technical correctness and readability
  
  // In all implementations of std::array, "size_type" is an alias for "std::size_t", so it's somewhat common 
  // to see developers use std::size_t instead for brevity

  for()

  return 0;

