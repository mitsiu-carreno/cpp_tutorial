#include <iostream>
#include <utility>

int main()
{
    int x = 2;
    int y = 5;

    std::cout << "Before swap x = " << x << " and y = " << y << std::endl;

    std::swap(x, y);    // swap the values of x and y

    std::cout << "After swap x = " << x << " and y = " << y << std::endl; 

    return 0;
}