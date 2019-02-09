#include <iostream>

int main()
{
  int fibonacci[] ={0,1,1,2,3,5,8,13,21,34,55,89,144}; 

  std::cout << "Because element_declaration should have the same type as the array elements\n";
  std::cout << "this is an ideal case in which to use the AUTO keyword, and let C++ deduce the type of the array elements\n";
  for(auto num : fibonacci)
  {
    std::cout << num << "\t"; 
  }
  std::cout << std::endl;

  return 0;
}