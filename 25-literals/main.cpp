#include <iostream>

int main(){
    int num = 5;            //5 is an integer literal
    bool nameIsMit = true;  // true is a boolean literal
    std::cout << 3.4 << std::endl;       // 3.4 is a double literal

    unsigned int value1 = 5u;   // 5 has type unsigned int
    long value2 = 6L;           // 6.0 has type long

    float f = 5.0f;             // 5.0 has type float
    // float f = 4.5;       // 4.5 must be converted from a double to a float before it can be 
                            // assigned to f, THIS COULD RESULT IN A LOSS OF PRECISION

    std::cout << "Hello, " " word" << std::endl;    // C-style string literal 
                                                    // C++ will concatenate sequential string literals

    double pi = 3.14159;         // 3.14159 is a double literal in standard notation
    double avogadro = 6.02e23;   // 6.02x10^23 is a double literal in scientific notation
    double electron = 1.6e-19;   // 1.6x10^-19 the number after the exponent can be negative

    return 0;
}