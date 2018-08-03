#include <iostream>

int main(){
    double d = 5.0;
    std::cout << "Sizeof(double) " << sizeof(double) << "\n";
    std::cout << "Sizeof(var) [double d = 5.0]" << sizeof(d) << std::endl;

    return 0;
}