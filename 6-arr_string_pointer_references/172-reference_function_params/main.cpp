#include <iostream>

void changeN(int &ref){	//ref is a reference to the argument passed in, NOT A COPY
	ref = 6;
}

int main(){

    // Reference as function parameters
	std::cout << "References are most often used as function parameters.\n";
	std::cout << "In this context, the reference parameter acts as an alias for the argument, and no copy of the argument is made into the parameter\n";
	std::cout << "This can lead to better performance if the argument is large or expensive to copy\n";
	std::cout << "Because the reference parameter acts as an alias for the argument,\n";
	std::cout << "a function that uses a reference parameter is able to modify the argument passed in\n";

	int original = 5;
	std::cout << "Before function: " << original << std::endl;
	changeN(original);	// Note that this argument does NOT need to be a reference
	std::cout << "After function:  " << original << "\n\n";

	std::cout << "BEST PRACTICE: Pass arguments by non-const reference when the argument needs to be modified by the function\n\n";


    return 0;
}