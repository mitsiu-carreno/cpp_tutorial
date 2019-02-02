#include <iostream>

int main(){
	std::cout << "Basic variables types:\n";
	std::cout << "-Normal variables, which hold values directly\n";
	std::cout << "-Pointers, which hold the address of another value (or null) and can be dereferenced to\n";
	std::cout << "  retrieve the value at the address they point to\n";
	std::cout << "-Reference, a type of C++ variable that acts as an alias to another object or value\n\n";

	std::cout << "Kinds of references:\n";
	std::cout << "-References to non-const values (typically just called 'references', or 'non-const references'\n";
	std::cout << "-References to const values (often called 'const references')\n";
	std::cout << "-C++11 added r-value references\n";

	// A reference is declared by using an ambersand (&) between the reference type and the variable name
	int value  = 5; // normal integer
	int &ref = value;		// reference to variable value 

	// IN THIS CONTEXT, THE AMPERSAND DOESN'T MEAN "ADDRESS OF" IT MEANS "REFERENCE TO"

	// References as ALIAS
	// References generally act identically to the values they're referencing. In this sense, a reference acts as an alias for the object being referenced

	int x = 5;		// normal integer
	int &y = x;		// y is a reference to x
	int &z = y;		// z is also a reference to x	

	// In the above snippet, setting or getting the value of x, y or z will all do the same thing (set or get the value of x)

	int normalValue = 5;	// normal integer
	int &refValue = normalValue;	// reference to variable value 

	refValue = 6; // normalValue is now 6
	normalValue = 7;	// normalValue is now 7

	std::cout << normalValue << std::endl;
	++refValue;
	std::cout << normalValue << std::endl;

	// refValue and normalValue are treated synonymously

	std::cout << "Address of normalValue: " << &normalValue << "\n";
	std::cout << "Address of refererence: " << &refValue << "\n\n";

	// l-values and r-values
	// l-values are values that MUST have an address (in memory)
	// r-values referes to a value that can be assigned to an l-value, r-values are always evaluated 
	// to produce a single value

	std::cout << "References must be initialized when created \n";
	//int &noRef;
	std::cout << "Unlike pointers, which can hold a null value, theres no such thing as a null reference\n\n";

	std::cout << "References to non-const values can only be initializated with non const l-values\n";
	std::cout << "They can NOT be initializated with const l-values or r-values\n";

	int var = 5;
	int &ref1 = var;	// ok, x is a non-const l-value

	const int constVar = 7;
	//int &ref2 = constVar;		// NOT ok constVar is a constant l-value
	// you can't initialize a non-const reference with a const object -- otherwise you'd be able 
	// to change the value of the const object through the reference, which would violate the const-ness of the object

	//int &ref3 = 6;		// NOT ok, 6 is a r-value 

	std::cout << "References can not be reassigned\n";
	std::cout << "Once initialized, a reference can NOT be changed to reference another variable\n\n";

	int var1 = 5;
	int var2 = 6;

	int &refVar1 = var1;	// ok refVar1 is now an alias for var1
	refVar1 = var2;			// ASSIGNS 6 (the value of var2) to var1 -- does NOT change the reference!

	return 0;
}