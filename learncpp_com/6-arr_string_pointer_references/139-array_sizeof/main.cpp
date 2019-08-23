#include <iostream>

void printSizePointer(int arr[])
{
  std::cout << sizeof(arr) << " bytes, this is the size of the pointer of the array\n";
}

int main()
{
  int arr[] = {30,22, 5, 102, 3, 12, 10};
  std::cout << sizeof(arr) << " bytes, this is the size of the array\n";

  printSizePointer(arr);
  
  return 0;
}