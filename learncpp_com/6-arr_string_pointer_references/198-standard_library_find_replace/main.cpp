#include <iostream>
#include <algorithm>
#include <array>

int main(){

  // The functionality provided by the algorithms in the standard library generally fall 
  // into one of three categories
  // - Inspectors:   Used to view (but not modify) data in a container (ej search, count)
  // - Mutators:     Used to modify data in a container (ej sorting shuffling)
  // - Facilitators: Used to generate a result based on values of the data members (ej multiply
  //                 values, determine order of a pair of elements)
  
  // Most of the algorithms do not guarantie a particular order of execution so DO NOT ASSUME ANY ORDER OF EXECUTION

  std::array array {117, 413, 16, 343, 5555};
    
  int search {16};
  int replace {128};

  // std::find returns an iterator pointing to the found element (or the end of the container)
  auto found { std::find(array.begin(), array.end(), search) };

  // Algorithms that don't find what they were looking for return the end iterator
  if(found == array.end()){
    std::cout << "Could not find " << search << "\n"; 
  }else{
    // Override the found element
    *found = replace;
  }

  for(int i : array){
    std::cout << i << " ";  
  }
  std::cout << "\n";


  return 0;
}
