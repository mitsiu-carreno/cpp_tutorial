#include <iostream>

int main()
{
  int arr[5] = {0,1,2,3,4};


  std::cout << "The array has address:\t" << &arr << "\n";

  // Print the value of variable arr
  std::cout << "The array value is:\t" << arr << "\n";

  // Print address of the array of elements
  std::cout << "Element 0 has address:\t" << &arr[0] << "\n";
  std::cout << "Element 1 has address:\t" << &arr[1] << "\n\n";

  std::cout << "It's a common fallacy in C++ to believe an array and a pointer to a value of the array are identical, THEY ARE NOT!\n";
  std::cout << "Array is of type \"int[5]\"\n";
  std::cout << "A pointer to an element of the array is of type \"int *\"\n\n";

  std::cout << "A fixed array will DECAY (be implicitly converted) into a pointer to the first element of the array\n";

  std::cout << "We can dereference the array to get the value of the first element\n";
  std::cout << *arr << " is the first element\n";

  char name[] = "Mitsiu";
  std::cout << *name << " is the first char of my name\n\n";

  std::cout << "We can also assign a pointer to the array (DECAY to pointer of the first element of the array)\n";
  
  int *ptr = arr;

  std::cout << *arr << "\n";
  std::cout << *ptr << "\n";

  return 0;
}