#include <iostream>
#include <typeinfo>

int main()
{
    int x = 7;

    std::cout << "The addres-of operator (&) return the memory addres that contain the variable\n";
    std::cout << &x << "\n\n";

    std::cout << "The dereference operator (*) return the value stored in a given memory address\n";
    std::cout << *&x << "\n\n";

    std::cout << "A pointer is a variable which stores the memory address of another variable\n";
    int *iPtr = &x; // initialize ptr with address of variable x
                    // the type of the pointer must match the type of the variable pointing to

    std::cout << "The address of variable x is: " << &x << "\n";
    std::cout << "The value of pointer iPtr is: " << iPtr << "\n\n";

    std::cout << "The address-of operator (&) returns a pointer\n";
    std::cout << &x << " is of type: " << typeid(&x).name() << " (Pi meaning \"Pointer integer\")\n\n";

    std::cout << "Dereferencing pointers\n";
    std::cout << "Pointer iPtr have value: " << iPtr << "\n";
    std::cout << "Dereferencing iPtr: " << *iPtr << "\n\n"; 

    // Pointers can be reasigned to other values
    float val1 = 3.6;
    float val2 = 8.4;

    float *ptr;
    ptr = &val1;
    std::cout << "prt value is : " << ptr << " dereferenced to: " << *ptr << "\n";

    ptr = &val2;
    std::cout << "Now prt value is : " << ptr << " dereferenced to: " << *ptr << "\n\n";

    return 0;
}