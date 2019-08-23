#include <iostream>

int main()
{
  int mysteryArr[] = {1,2,3,4,5,6,7,8,9,10};

  std::cout << "The mystery array has " << sizeof(mysteryArr) / sizeof(mysteryArr[0]) << " elements!\n"; 

  return 0;
}