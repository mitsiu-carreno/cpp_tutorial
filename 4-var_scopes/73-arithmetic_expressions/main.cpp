#include <iostream>
#include <typeinfo>

int main(){

	short a(4);
	short b(5);			
	std::cout << typeid(a + b).name() << " " << (a+b) << std::endl;

	double d(4.0);
	std::cout << typeid(a + d).name() << " " << (a+d) << std::endl;


	//Due to expression hierarchy this will overflow 
	std::cout << 5u - 10 << std::endl;	// 5u means treat 5 as an unsigned integer
	// 0) Signed integer < unsigned integer
	// 1) Signed integer is promoted to an unsigned integer (because has higher priority)
	// 2) The expression is evaluated as an unsigned int
	// 3) Result: 4294967291 
	//
	//end overflow
	
	return 0;
}
