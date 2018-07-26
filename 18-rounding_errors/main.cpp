#include <iostream>
#include <iomanip>

int main(){

    double d(0.1);
    std::cout << d << std::endl;

    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    std::cout << d2 << std::endl;

    std::cout << std::setprecision(17);
    std::cout << d << std::endl;

    std::cout << d2 << std::endl;

    return 0;
}