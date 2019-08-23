#include <iostream>
int value(5);	// global variable

int main(){
	int value = 7;	// hides the global variable value
	value++;				// increments local value, not global
	::value--;			// decrements global value, not local

	std::cout << "Global value:\t" << ::value << "\n";
	std::cout << "Local value:\t" << value  << "\n";

	return 0;
}
