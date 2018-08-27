#include <iostream>
#include <string>

int main(){
  
  std::string fullName;
  int nameCharacters;

  std::cout << "Ingresa tu nombre completo (Mitsiu Alejandro Carreño): ";
  std::getline(std::cin, fullName);

  nameCharacters = fullName.length();

  std::cout << "Tu nombre contiene " << nameCharacters << " letras (incluyendo espacios)\n"; 

  return 0;
}
