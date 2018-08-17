#include <iostream>

int main(){	// outer block
	
	int n(5);	// n created and initialized here

	{	// begin nested block
		double d(4.0);	// d created and initialized here
	}	// d goes out of scope and is destroyed here
	
	// d can not be used here because it was already destroyed!

	return 0;
}	// n goes out f scope and is destroyed here
