#include <iostream>

int pow(int base, int exponent){
	int total = 1;
	for(int count = 0; count < exponent; ++count){
		total *= base;
	}
	return total;
}

int main(){
	int base;
	int exponent;

	std::cout << "Enter the base (int): ";
	std::cin >> base;
	std::cout << "Enter the exponent (int): ";
	std::cin >> exponent;

	std::cout << base << "^" << exponent << " = " << pow(base, exponent) << "\n";

	std::cout << std::endl;
	// We can decrement the loop variable too
	for(int count{9}; count > 0; count -= 2){
		std::cout << count << " ";
	}
	std::cout << std::endl;

	return 0;
}
