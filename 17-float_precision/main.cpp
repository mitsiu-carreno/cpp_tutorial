#include <iostream>
#include <iomanip>

int main(){
    float f;
    f = 9.87654321f;     // The f suffix means this number should be treated as a float 
    std::cout << "a " << f << std::endl;
    f = 987.654321f;
    std::cout << "b " << f << std::endl;
    f = 987654.321f;
    std::cout << "c " << f << std::endl;
    f = 9876543.21f;
    std::cout << "d " << f << std::endl;
    f = 0.0000987654321f;
    std::cout << "f " << f << std::endl;

    // Note that each of these is only 6 significant digits 

    
    std::cout << "Setting precision to 16 with iomanip header" << std::endl;
    std::cout << std::setprecision(16);     // show 16 digits
    float flo = 3.33333333333333333333333333333333333333f;
    std::cout << flo << std::endl;
    double d = 3.33333333333333333333333333333333333333f;
    std::cout << d << std::endl;

    return 0;
}