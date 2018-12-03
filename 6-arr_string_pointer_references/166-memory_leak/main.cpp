#include <iostream>

void loseAddress()
{
    int *ptr = new int;
    // ptr scope is lost here, and the address lost forever
}

int main()
{
    std::cout << "Memory leaks occur when a allocated dynamic memory cant be successfully retreived to the operatins system \n";
    std::cout << "Dinamically allocated memory has no scope, but the ponters used to hold dynamically allocated memory addresses follow\n";
    std::cout << "the scoping rules of normal variables\n";

    int value  = 5;
    int *ptr = new int;     // allocated memory
    //ptr = &value;         // old address lost, memory leak results 
    // this can be fixed by deleting the pointer before reassigning it
    delete ptr;             // returning memory back to operating system
    ptr = &value;           // reassign pointer to address of value;

    // It is also possible to leak memory due to double-allocation
    int *ptr2 = new int;
    // ptr2 = new int;         // old address lost, memory leak result
    // this can also be fixed by deleting the pointer before reassinging it
    delete ptr2;
    ptr2 = new int;

    return 0;
}