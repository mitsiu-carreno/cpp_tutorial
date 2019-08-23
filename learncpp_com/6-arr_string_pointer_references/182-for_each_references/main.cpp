#include <iostream>

int main()
{
  int array[5] = {9,7,5,3,1};

  for(auto element : array)  //element will be a copy of the current array element
  {
    std::cout << ++element << ", ";
  }
  std::cout << "\nCopying array elements can be expensive, and most of the time we really just want to refer to the original element.\n";
  std::cout << "Fortunately, we can use references for this:\n";

  for(auto &element : array)  // The ampersand makes element a reference to the actual array element, 
  // preventing a copy from being made
  {
    std::cout << element << ", ";
  }
  std::cout << "\n";

  std::cout << "And of course, it's a good idea to make your element const if you're intending to use it in a read-only fashion\n";

  for(const auto &element : array)  // element is a const reference to the current iterated array element
  {
    std::cout << "const " << element << ", ";
  }
  std::cout << "\n";

  std::cout << "Rule: In for-each loops element declarations, if your elements are non-fundamental types, \n";
  std::cout << "use references or const references for performance reasons\n";
  
  return 0;
}