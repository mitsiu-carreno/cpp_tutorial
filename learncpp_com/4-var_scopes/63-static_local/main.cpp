#include <iostream>

void incrementAndPrint(){
	int value = 1;	// Automatic durantion by default
	++value;
	std::cout << value << "\n";
}	// value is destroyed here

void staticIncrementAndPrint(){
	// static duration variables should be prefixed with "s_" // static global variables (internal linkage) must be prefixed with "g_"
	static int s_value = 1;	// static duration via static keyword THIS LINE IS EXECUTED ONLY ONCE
	++s_value;
	std::cout << "Static: " << s_value << "\n"; 
}	// s_value is not destroyed here, but becomes inaccessible

int main(){
	incrementAndPrint();
	staticIncrementAndPrint();
	incrementAndPrint();
	staticIncrementAndPrint();
	incrementAndPrint();
	staticIncrementAndPrint();

	return 0;
}
