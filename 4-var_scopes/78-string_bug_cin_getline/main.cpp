#include <iostream>
#include <string>

int main(){
	
	std::string fullName; 
	int choice(0);

	std::cout << "Pick 1 or 2:";
	std::cin >> choice;
	// when you enter a numeric value using cin, cin captures the numeric value AND ALSO CAPTURES THE WHITELINE "2\n"
	// it extract the numeric value to choice but the newline stuck in the input stream

	std::cout << "Now enter your name: ";
	std::getline(std::cin, fullName);

	std::cout << "Hello, " << fullName << " you picked " << choice << "\n";

	return 0;
}
