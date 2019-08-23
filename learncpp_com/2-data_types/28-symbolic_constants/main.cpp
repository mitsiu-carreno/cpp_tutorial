#include <iostream>
#include "constants.h"

int main(){
    int radious = 5;
    double circunference = 2 * radious * constants::pi;

    std::cout << "un circulo de rádio " << radious << " tendra una circunferencia: " << circunference << std::endl;

    return 0;
}