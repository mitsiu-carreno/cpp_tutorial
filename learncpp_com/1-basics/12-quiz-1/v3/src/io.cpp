#include <iostream>

int readNumber(){
    std::cout << "Ingresa el siguiente numero " << std::endl;
    
    int input;
    std::cin >> input;
    
    return input;
}

void writeAnswer(int result){
    std::cout << "El resultado de la suma es: " << result << std::endl;
}