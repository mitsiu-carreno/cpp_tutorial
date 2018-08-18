#include <iostream>
extern int g_x;		// forward declaration for g_x (defined in global.cpp)
									// g_x can be used beyond this point in this file

int main(){
	extern int g_y;	// forward declaration for g_y (defined in global.cpp)
									// g_y can be used beyond this point in main() only

	g_x = 5;
	std::cout << g_y << "\n";
	return 0;
}
