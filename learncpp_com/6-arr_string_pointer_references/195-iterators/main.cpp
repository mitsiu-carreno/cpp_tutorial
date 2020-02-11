#include <iostream>
#include <array>

int main(){
  // So far we've covered many ways to iterate through an array (or other structure)
  // -Loops and index (for-loops while-loops)
  // -Pointers and pointer arithmetic 
  // -Range-based for-loops
  
  // The type is automatically deduced to std::array<int, 7> (C++17)
  std::array myArray {0,1,2,3,4,5,6};
  std::size_t length { std::size(myArray) };

  // While loop with explicit index
  std::size_t index {0};
  while(index != length){
    std::cout << myArray[index] << ' ';
    ++index;
  }
  std::cout << std::endl;

  // For loop with explicit index
  for(index = 0; index != length; ++index){
    std::cout << myArray[index] << ' ';
  }
  std::cout << std::endl;

  // For loop with pointer (ptr can't be const because we increment it)
  //for(int *ptr = &myArray[0]; ptr != &myArray[length]; ++ptr){
  for(int *ptr = &myArray[0]; ptr != (&myArray[0] + length); ++ptr){
    std::cout << *ptr << ' ';
  }
  std::cout << std::endl;

  // Range-based for-loop
  for(int i : myArray){
    std::cout << i << ' ';
  }
  std::cout << std::endl;

  return 0;
}
