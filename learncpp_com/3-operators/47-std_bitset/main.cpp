#include <iostream>
#include <bitset>

// Note that with std::bitset, our options correspond to BIT INDICES, NOT BIT PATTERNS
const int option0 = 0;
const int option1 = 1;
const int option2 = 2;
const int option3 = 3;
const int option4 = 4;
const int option5 = 5;
const int option6 = 6;
const int option7 = 7;

int main(){
	std::bitset<8> bits(0x2);
	std::cout << "Initial bitset: " << bits << "\n\n";
	
	bits.set(option4);
	std::cout << "bits.set(option4)" << "\n";
	std::cout << "Bitset:\t" << bits << "\n\n";

	bits.flip(option5);
	std::cout << "bits.flip(option5)" << "\n";
	std::cout << "Bitset:\t" << bits << "\n\n";

	bits.reset(option5);
	std::cout << "bits.reset(option5)\n";
	std::cout << "Bitset:\t" << bits << "\n\n";

	std::cout << "Bit 4 has value: " << bits.test(option4) << "\n";
	std::cout << "Bit 5 has value: " << bits.test(option5) << "\n";


	return 0;
}
