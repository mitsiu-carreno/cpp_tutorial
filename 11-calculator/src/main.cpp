#include <iostream>

int getInput(){
    int x;
    
    std::cout << "Ingresa el primer dígito:" << std::endl;
    std::cin >> x;

    return x;
}

int getOperation(){
    int operatorNumber;

    std::cout << "Selecciona la operación:" << std::endl << "1 - Suma" << std::endl << "2 - Resta" << std::endl;
    std::cin >> operatorNumber;

    return operatorNumber;
}



int main(){
    int x = getInput();

    int z = getOperation();

    int y = getInput();

    std::cout << "El resultado es " << getResult(x, y, z) << std::endl;
    return 0;
}