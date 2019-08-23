#include <iostream>

int main(){

    int x(3);
    int y(5);

    int larger = (x > y)? x : y;
    std::cout << larger << std::endl;

    std::cout << ((x > y)? x : y) << "\n";


    //The type of expression must match or be convertible 
    //std::cout << ((x != 5) ? x : "x is 5") << std::endl;      <- This won't compile 

    std::cout << (x > y)? x : y;
    /**
     * Because << has higher precedence than ?: the statement reads as:
     * (std::cout << (x > y)) ? x : y;
     * that would print 1 (true) if x > y, or 0 (false) otherwise
     **/
     
    std::cout << "\n";

    return 0;
}