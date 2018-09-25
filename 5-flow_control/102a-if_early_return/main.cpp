#include <iostream>

enum class ErrorCode{
	ERROR_SUCCESS = 0,
	ERROR_NEGATIVE_NUMBER = 1,
};	

ErrorCode doSomething(int value)
{
	// If value is a negative number
	if(value < 0)
		// Early return an error code
		return ErrorCode::ERROR_NEGATIVE_NUMBER;
	
	// Do wahtever here
	return ErrorCode::ERROR_SUCCESS;
}


int main(){
	
	int x;
	std::cout << "Enter a positive number: ";
	std::cin >> x;

	if(doSomething(x) == ErrorCode::ERROR_NEGATIVE_NUMBER){
		std::cout << "You entered a negative number!\n";
	}else{
		std::cout << "It worked!\n";
	}

	return 0;
}
