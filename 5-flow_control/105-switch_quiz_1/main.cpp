#include <iostream>

int askNum(){
	int temp;
	std::cout << "Ingresa un número entero: ";
	std::cin >> temp;

	return temp;
}

char askOperation(){
	char op = -1;

	while(op!='a' && op!='b' && op!='c' && op!='d' && op!='e'){
		if(op != -1)
			std::cout << "\n\n----------------------\nOPERACIÓN NO PERMITIDA\n";
		std::cout << "a) +\n";
		std::cout << "b) -\n";
		std::cout << "c) *\n";
		std::cout << "d) /\n";
		std::cout << "e) %\n";
		std::cout << "Elige la operación: ";
		std::cin >> op;
	}

	return op;
}

void calculate(int x, int y , char op){
	switch(op){
		case 'a':
			std::cout << x << " + " << y << " = " << (x+y) << std::endl;
			break;
		
		case 'b':
			std::cout << x << " - " << y << " = " << (x-y) << std::endl;
			break;

		case 'c':
			std::cout << x << " * " << y << " = " << (x*y) << std::endl;
			break;
		
		default:
			std::cout << "Ha ocurrido un error inesperado :/";
			std::cout << "OP VALUE: " << op << std::endl;
			break;	
	}

}

int main(){

	int x = askNum();
	int y = askNum();

	char op = askOperation();

	calculate(x, y, op);	

	return 0;
}
