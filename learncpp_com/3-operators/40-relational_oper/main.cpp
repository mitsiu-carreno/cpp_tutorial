#include <iostream>

int main(){
    int x;
    int y;
    std::cout << "Enter an integer ";
    std::cin >> x;
    std::cout << "Enter another integer: ";
    std::cin >> y;

    if(x == y)
        std::cout << x << " equals " << y << "\n";
    if(x != y)
        std::cout << x << " not equal to " << y << "\n";
    if(x > y)
        std::cout << x << " is greater than " << y << "\n";
    if(x < y)
        std::cout << x << " is less than " << y << "\n";
    if(x >= y)
        std::cout << x << " is greater or equal to " << y << "\n";
    if(x <= y)
        std::cout << x << " is less or equal to " << y << "\n";


    return 0;
}