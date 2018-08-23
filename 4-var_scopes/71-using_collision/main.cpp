#include <iostream>

int cout(){
	return 5;
}

int main(){
	
	using std::cout;	// define cout as std::cout
	// using the global namespace we can access the function we defined (otherwise well get errors)
	cout << ::cout() << std::endl;
				
	return 0;
}
