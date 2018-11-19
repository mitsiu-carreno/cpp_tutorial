#include <iostream>

int main()
{
    int x = 7;

    std::cout << "The addres-of operator (&) return the memory addres that contain the variable\n";
    std::cout << &x << "\n\n";

    std::cout << "The dereference operator (*) return the value stored in a given memory address\n";
    std::cout << *&x << "\n\n";


    return 0;
}