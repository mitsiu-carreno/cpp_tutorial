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

  return 0;
}