#include <iostream>

int add(int x, int y){	// start a block
	return x + y;
}	// end block

int main()
{ // start a block
	
	// Multiple statements
	int value(0);
	add(3, 4);

	if(value >= 0){	//start of nested block
		std::cout << value << " is a positive integer (or zero)" << std::endl;
	}	// end of nested block

  return 0;
} // end block
