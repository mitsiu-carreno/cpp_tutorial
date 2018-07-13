#include <iostream>

int getInput(){
    int x;
    
    std::cout << "Ingresa el dígito:" << std::endl;
    std::cin >> x;

    return x;
}

int getOperation(){
    int operatorNumber;

    std::cout << "Selecciona la operación:" << std::endl << "1 - Suma" << std::endl << "2 - Resta" << std::endl;
    std::cin >> operatorNumber;

    return operatorNumber;
}

int getResult(int val1, int operatorNumber, int val2){
    switch (operatorNumber){
        case 1:
            return val1 + val2;
            break;
        case 2:
            return val1 - val2;
            break;
        default:
            std::cout << "Operación no permitida :( " << std::endl;
            return 0;
            break;
    }
}

int main(){
    int val1 = getInput();

    int operatorNumber = getOperation();

    int val2 = getInput();

    std::cout << "El resultado es " << getResult(val1, operatorNumber, val2) << std::endl;
    return 0;
}
