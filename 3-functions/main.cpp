#include <iostream>

int getValueFromUser(){

    std::cout << "Ingresa tu número: ";

    int num;
    std::cin >> num;

    std::cout << "Numero : " << num << std::endl;

    return num;
}