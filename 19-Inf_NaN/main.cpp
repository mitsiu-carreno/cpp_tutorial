#include <iostream>

int main(){
    double zero = 0.0;
    double posInf = 5.0/zero;   // Positive infinity
    std::cout << posInf << std::endl;

    double negInf = -5.0/zero;  // Negative infinity
    std::cout << negInf << std::endl;

    double nan = zero/zero;     // Not a Number (NaN) (mathematically invalid)
    std::cout << nan << std::endl;

    return 0;
}