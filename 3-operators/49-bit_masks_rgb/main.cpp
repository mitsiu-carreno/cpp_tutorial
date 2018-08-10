#include <iostream>

int main(){
  const unsigned int redBits   = 0xFF000000;
  const unsigned int greenBits = 0x00FF0000;
  const unsigned int blueBits  = 0x0000FF00;
  const unsigned int alphaBits = 0x000000FF;

  int pixel;

  std::cout << "Ingresa un color de 32-bits en formato hexadecimal: ";
  std::cin >> std::hex >> pixel;

 //Bitwise AND to isolate each color bits, then right shift the value into the 0-255
 unsigned char red = (pixel & redBits) >> 24;
 unsigned char green = (pixel & greenBits) >> 16;

  return 0;
}
