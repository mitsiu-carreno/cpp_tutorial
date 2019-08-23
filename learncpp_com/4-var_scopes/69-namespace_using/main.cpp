#include <iostream>

int main(){
	using std::cout; // This using declaration tells the compiler that cout should be resolved to std::cout 

	cout << "Test :) \n"; // so no std:: prefix is needed here
	return 0;
}
