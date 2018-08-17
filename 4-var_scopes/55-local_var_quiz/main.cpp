#include <iostream>

int main(){
	int smaller;
	int larger;

	std::cout << "Ingresa un numero entero: ";
	std::cin >> smaller;

	std::cout << "Ingresa un numero entero mayor al anterior: ";
	std::cin >> larger;

	if(smaller > larger){
		std::cout << "Swapping the values" << "\n";
		int tmp = smaller;
		smaller = larger;
		larger = tmp;
	}	// tmp dies here

	std::cout << "El valor más pequeño es: " << smaller << "\n";
	std::cout << "El valor más grande es: " << larger << "\n";

	return 0;
}	// smaller and larger dies here
