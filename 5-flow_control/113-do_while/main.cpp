#include <iostream>

int main(){

	int selection;

	// The main difference between the while and the do_while is that do_while executes the statement at least once
	// However is not that big of a deal either way
	do
	{
		std::cout << "Choose an option:\n";
		std::cout << "1) Bla\n";
		std::cout << "2) Foo\n";
		std::cout << "3) Bar\n";
		std::cout << "4) Etc\n";
		std::cin >> selection;
	}
	while(selection!=1 && selection!=2 && selection!=3 && selection!=4);

	// Do something with selection here
	// such as a switch statement
	
	std::cout << "You entered option: " << selection << "\n";

	return 0;
}
