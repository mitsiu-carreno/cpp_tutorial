#include <iostream>
#include <iomanip>
#include <typeinfo>


//Coercion: The process where the compile automatically convert a value from one data type to another 

float doSomething(long l){
	
	std::cout << l <<  " did something" << "\n";

	return 3.0;	// Return double value 3.0 back to caller through float retun type
}

int main(){
	float f = 3;	// initialize floating point variable with integer 3

	float response = doSomething(3);	// passing integer value 3 to a function expecting a long parameter

	// Numeric promotion
	long l(64);	// widen the integer 64 into a long (int < long)
	double d(0.12f);	// promote the float 0.12 into a double (float < double)

	double d2 = 3;	// convert integer 3 to a double (between different types)
	short s = 2;		// convert integer 2 to a short (from larger to smaller type)

	// No large enough range (overflow)
	int i = 30000;
	char c = i;
	std::cout << static_cast<int>(c) << " this doesn't make sense!" << "\n";
	// End overflow

	i = 2;
	short s2 = i;
	std::cout << s2 << "\n";

	float f2 = d;
	std::cout << f2 << "\n";

	// Overflow
	float decimal = 0.123456789;	// double value 0.123456789 has 9 significant digits, but float can only support 7
	std::cout << std::setprecision(9) << decimal << " precision loss (input 0.123456789)\n";
	// End Overflow
	
	i = 10;
	float f3 = i;
	std::cout << f3 << "\n";

	int tryInt = 3.5;
	std::cout << tryInt << "\n";
 
	return 0;
}
