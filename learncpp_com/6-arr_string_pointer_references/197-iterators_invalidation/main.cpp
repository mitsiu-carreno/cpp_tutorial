#include <iostream>
#include <vector>  

int main(){

  // Iterators can be left dangling (just like pointers and references), if the elements being 
  // iterated over change address or are destroyed
  // When this happens, we say the iterator has been invalidated, accessing an INVALIDATED 
  // ITERATOR produces UNDEFINED BEHAVIOR
  
  
  std::vector vect {1,2,3,4,5,6,7,8};

  auto ptr {vect.begin()};

  ++ptr;  // Move to second element
  std::cout << *ptr << "\n";

  vect.erase(ptr);   // Erase the second element

  // erase() invalidates iterators to the erased element (and subsequential elements)
  // so iterator ptr is now invalidated
  
  std::cout << *ptr << "\n";  // UNDEFINED BEHAVIOR
  ++ptr;                      // UNDEFINED BEHAVIOR
  std::cout << *ptr << "\n";  // UNDEFINED BEHAVIOR

  return 0;
}
