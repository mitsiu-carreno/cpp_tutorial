#include <iostream>

int main()
{
  int val = 7;
  int *iptr = &val;

  std::cout << "size of integer: " << sizeof(int) << std::endl;
  std::cout << iptr << std::endl;
  std::cout << iptr+1 << std::endl;
  std::cout << iptr+2 << std::endl << std::endl;

  std::cout << "size of short: " << sizeof(short) << std::endl;
  short val2 = 4;
  short *sptr = &val2; 

  std::cout << sptr << std::endl;
  std::cout << sptr+1 << std::endl;
  std::cout << sptr+2 << std::endl;

  std::cout << "Arrays are laid out sequentially in memory\n";

  int array[] = {9,7,5,3,1};

  std::cout << "Element 1 at address: " << &array[1] << " == " << array+1 << " with value: " << *(array+1) <<  "\n";
  std::cout << "Element 2 at address: " << &array[2] << " == " << array+2 << " with value: " << *(array+2) <<  "\n";  
  std::cout << "Element 3 at address: " << &array[3] << " == " << array+3 << " with value: " << *(array+3) <<  "\n";
  std::cout << "Element 4 at address: " << &array[4] << " == " << array+4 << " with value: " << *(array+4) <<  "\n";
 
  return 0;
}