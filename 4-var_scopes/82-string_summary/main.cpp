#include <iostream>
#include <string>

int main(){

  std::string fullName;
  short age;
  float yearPerChar;

  std::cout << "Ingresa tu nombre completo: ";
  std::getline(std::cin, fullName);

  std::cout << "Ingresa tu edad: ";
  std::cin >> age;

  yearPerChar = static_cast<float>(age) / fullName.length();
  std::cout << "Has vivido " << yearPerChar << " años por cada una de las letras de tu nombre\n";

  return 0;
}
