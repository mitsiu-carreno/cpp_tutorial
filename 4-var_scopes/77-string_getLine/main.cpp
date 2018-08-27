#include <iostream>
#include <string>

int main(){
	std::string fullName;
	std::string age;

	std::cout << "Ingresa tu nombre compelto (Mitsiu Carreño): ";
	std::getline(std::cin, fullName);

	std::cout << "Ingresa tu edad: ";
	std::getline(std::cin, age);

	// std::cout << "Ingresa tu edad nuevamente: ";
	// std::getline(std::cin, numAge);	//this ONLY works for strings!!!!

	std::cout << "Hola " << fullName << " tu edad es " << age << "\n";

	return 0;
}
