#include <iostream>
#include <bitset>

int main(){
  const unsigned int lowMask = 0xF;   // bit mask to keep low 4 bits(hex for 0000 0000 0000 1111)
  int input; 

  std::cout << "Enter integer: ";
  std::cin >> input;
  std::bitset<16> bitNum(input);

  std::cout << "Number:\t" << input << " =\t" << bitNum << "\n\n";
  input &= lowMask;
  std::cout << "input &= lowMask (lowMask = 0000 0000 0000 1111)" << "\n";
  std::cout << "The 4 low bits have value =\t" << std::bitset<16>(input) << " = " << input << "\t"; 

  return 0;
}
