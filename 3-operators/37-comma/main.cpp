#include <iostream>

int main(){
    int x = 0;
    int y = 2;
    int z = (++x, ++y);
    
    // Comma has the lowest precedence of all the operators, even lower than assignment
    int e = x, d;   // evaluates as "(e = x), d" so e gets assigned the value of x, and d is discarded

    std::cout << "x: " << x << " y: " << y << " z: " << z << " e: " << e << std::endl;

    // int sum(x, y) <- This comma is not the comma operator
    // int x(3), y(5) <- This comma is no the comma operator either
    return 0;
}