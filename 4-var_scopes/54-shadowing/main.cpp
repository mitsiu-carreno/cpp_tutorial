#include <iostream>

int main(){
	int apples(5);	// here's the outer block apples

	if(apples == 5)	// refers to the outer block apples
	{	// nested block
		int apples;	// SHADOWS or hides previous variable named apples

		// apples now refers to the nested block apples
		// the outer block apples is TEMPORARILY HIDDEN
		
		apples = 10;	// this assigns the value 10 to nested block apples NOT outer block apples

		std::cout << apples << "\n";	// print value of nested block apples

	}	// nested block apples destroyed

	// apples now refers to the outer block apples again
	
	std::cout << apples << "\n";

	return 0;
}
