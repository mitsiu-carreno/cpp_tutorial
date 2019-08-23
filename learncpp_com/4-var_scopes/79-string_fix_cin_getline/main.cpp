#include <iostream>
#include <string>

int main(){

	std::string fullName;
	int choice(0);

	std::cout << "Pick 1 or 2: ";
 	std::cin >> choice;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// Ignore unlimited characters until a \n is removed
	
	// OR!
	
	// std::cin.ignore(32767, '\n');	
	// ignore up to 32767 characters until a \n is removed
	// 32767 its the largest signed value guaranteed to fit in a (2-byte ) integer on all plataforms
	
	std::cout << "Now enter your name: ";
	std::getline(std::cin, fullName);

	std::cout << "Hello, " << fullName << " you picked " << choice << "\n";

	return 0;
}
