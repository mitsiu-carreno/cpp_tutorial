#include <iostream>

// Variables defined outside of a function are global variables 
int g_x;	// global variable g_x
const int g_y(2); // global variable g_y

void doSomething(){
	// global variables can be seen and used everywhere in program
	g_x = 3;	
	std::cout << g_y << "\n";
}

int main(){
	doSomething();

	// global variables can be seen and used everywhere in program
	g_x = 5;
	std::cout << g_y << "\n";

	return 0;
}
