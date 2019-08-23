#include <iostream>

int main()
{
  int arr[] = {0,1,2,3,4};

  std::cout << "The size of the array is: " << sizeof(arr) << " bytes\n";

  int *ptr = arr;
  std::cout << "The size of a pointer to the first element of the array is: " << sizeof(ptr) << " bytes\n";
  
  return 0;
}