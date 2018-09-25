#include <iostream>

int main(){
	int x;
	std::cout << "Ingresa un número:\n";
	std::cin >> x;

	if(x > 5){
		// if statements can be nested
		// if statements can have implicit blocks (without brackets)
		if(x == 10)
			std::cout << "tu número es igual a diez\n";
		else
			std::cout << "tu número esta entre el 5 y el 10\n";
	}else{
		std::cout << "tu número es menor a 5\n";
	}

	return 0;
}
