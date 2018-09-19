#include <iostream>
#include "../headers/typedef.h"

int main(){
	
	my_int8_t eightBits;
	my_int16_t sixteenBits;
	my_int32_t thirtytwoBits;

	std::cout << "my_int8_t type uses " << sizeof(eightBits) << " bytes, " << (sizeof(eightBits) * 8) << " bits  \n";

	std::cout << "my_int16_t type uses " << sizeof(sixteenBits) << " bytes, " << (sizeof(sixteenBits) * 8) << " bits \n";

	std::cout << "my_int32_t type uses " << sizeof(thirtytwoBits) << " bytes, " << (sizeof(thirtytwoBits) * 8) << " bits\n"; 
	
	return 0;
}
