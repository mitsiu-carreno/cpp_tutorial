#include <iostream>
#include <cmath>

int main(){
    double base;
    double exponent;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    std::cout << base << " ^ " << exponent << " = " << pow(base, exponent) << "\n";
    return 0;
}