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

  // Range-based for-loops hide the mechanism for iterating through and yet, they still 
  // work for all kind of different structures (arrays, lists, trees, maps, etc) 
  // How do these works? THEY USE ITERATORS
  
  // A container may provide different kinds of iterators (a container might offer a 
  // forward iterator and a reverse iterator, etc)
  

  // The simplest kind of iterator is a pointer which (using pointer arithmetic) works 
  // for data sequentially stored
  std::array data {0,1,2,3,4,5,6,7};

  auto begin {&data[0]};
  auto end {begin + std::size(data) };  // NOTE that this points to 
                                        // ONE SPOT BEYOND THE LAST ELEMENT
  // int *end {&data[std::size(data)]};   UNDEFINED BEHAVIOR trying to access an element that is
  //                                      of the end of the array 
  

  // for-loop with pointer
  for(auto ptr {begin}; ptr != end; ++ptr){ 
    std::cout << *ptr << " "; // Dereference to get value of current element
  }
  std::cout << "\n";

  

  return 0;
}
