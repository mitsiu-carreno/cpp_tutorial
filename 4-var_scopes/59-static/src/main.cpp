#include <iostream>
extern const double g_gravity;	// This will satisfy the compiler that g_gravity exists

int main(){
	std::cout << g_gravity << "\n";		// This will cause a LINKER ERROR because the only definition of g_gravity is inaccessible from here (constants.cpp)

	return 0;
}
