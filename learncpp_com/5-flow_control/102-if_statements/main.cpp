#include <iostream>

int main(){
	int x;
	int y;
	int z;
		

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
		std::cout << "tu número es menor o igual a 5\n";
	}

	
	
	// If statements can be chained
	if(x > 10)
		std::cout << "El número es mayor a 10\n";
	else if(x < 10)
		std::cout << "El número es menor a 10\n";
	else
		std::cout << "El número es 10\n";

	
	
	
	if(x >= 10)	// outer if statement
		// It is bad coding style to nest if statements this way, use brakets!
		if(x <= 20)	//inner if statement
			std::cout << x << " is between 10 and 20\n";
		
		// WHICH IF STATEMENT DOES THIS ELSE BELONG TO????? (DANGLING ELSEDANGLING ELSE)
		else
			std::cout << x << " is greater than 20\n";
		// THE ELSE STATEMENT IS PARIED UP WITH THE LAST UNMATCHED IF STATEMENT IN THE SAME BLOCK (thus else L33 is matched with inner if L29)
		



	// If statements can check mulitple conditions using logical operators
	std::cout << "Ingresa un número: ";
	std::cin >> y;
	std::cout << "Ingresa otro número: ";
	std::cin >> z;

	if(y > 0 && z > 0)	// Logical and, checks if both conditions are true
		std::cout << "ambos numeros son positivos\n";
	else if(y > 0 || z >0)
		std::cout << "uno de los numeros es positivo\n";
	else
		std::cout << "ninguno de los números es positivo\n";

	return 0;
}
