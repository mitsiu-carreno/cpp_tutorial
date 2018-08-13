#include <iostream>
#include <bitset>

int main(){
  const unsigned int redBits   = 0xFF000000;
  const unsigned int greenBits = 0x00FF0000;
  const unsigned int blueBits  = 0x0000FF00;
  const unsigned int alphaBits = 0x000000FF;

 unsigned int pixel;

  std::cout << "Ingresa un color de 32-bits en formato hexadecimal (FF7F3300): ";
  std::cin >> std::hex >> pixel;

  std::cout << "Tu color es: " << std::hex << pixel  << "\n"; 
  std::cout << "En número decimal es: " << pixel << "\n";
  std::cout << "Tu color en binario es: " << std::bitset<32>(pixel) << "\n";

  //Bitwise AND to isolate each color bits, then right shift the value into the 0-255
  unsigned char red =   (pixel & redBits) >> 24;
  unsigned char green = (pixel & greenBits) >> 16;
  unsigned char blue =  (pixel & blueBits) >> 8;
  unsigned char alpha = (pixel & alphaBits);

  std::cout << "Tu color contiene: " << "\n";
  std::cout << static_cast<int> (red) << " red\n"; 
  std::cout << static_cast<int> (green) << " green\n";
  std::cout << static_cast<int> (blue) << " blue\n";
  std::cout << static_cast<int> (alpha) << " alpha\n";

  return 0;
}
