#include <iostream>
#include <string>

int main(){

	std::string fullName;
	std::string age;

	std::cout << "Ingresa tu nombre completo (Mitsiu Carreño): ";
	std::cin >> fullName; // only returns the characters up to the first whitespace it encounters (any other character is left in cin waiting for the next extraction (L:13))

	std::cout << "Ingresa tu edad: ";
	std::cin >> age;	// cin had "Carreño" inside, so age is assigned to it instead of asking for the next entry

	std::cout << "Tu nombre es " << fullName << " y tu edad es " << age << "\n";
	return 0;
}
