#include <iostream>
#include <cstddef>  // for std::nullptr_t

void doSomething(double *ptr)
{
    if(ptr)
    {
        std::cout << "You passed " << ptr << " pointer\n";
    }else
    {
        std::cout << "You passed a null pointer\n";
    }
}

void doSomethingElse(std::nullptr_t ptr)
{
    std::cout << "This function only accepts null pointers as arguments\n\n";
}

int main()
{
    std::cout << "Null pointer means the pointer is not pointing at anything\n";

    float *ptr1 {0};    // ptr1 is now a null pointer

    float *ptr2;        // ptr2 is unitialized
    ptr2 = 0;           // prr2 is now a null pointer

    std::cout << "Null pointers convert to boolean false, non-null pointers to true\n";
    
    if(ptr1)
    {
        std::cout << "ptr1 is pointing to a float value\n";
    }else{
        std::cout << "ptr1 is a null pointer\n";
    }

    std::cout << "Dereferencing a Null pointer cause undefined behavior\n\n";
    // std::cout << *ptr1;  // THIS WILL CRASH THE APP

    std::cout << "C (not C++) defines a macro called NULL that is #defined as value 0\n";
    std::cout << "Best practice is to avoid NULL macro because it's not part of C++\n";

    double prt3 {NULL};

    std::cout << "\n\n";

    std::cout << "nullptr in C++11\n";
    std::cout << "Value 0 isn't a pointer type, so assigning 0 to a pointer to denote that the pointer is a null pointer is inconsistent\n";
    std::cout << "It may cause problems to the compiler if it can't tell whether we mean a null pointer or the int 0\n";

    doSomething(0); // is 0 an integer argument or a null pointer? (compiler assume integer)
    doSomething(nullptr);

    std::cout << "\n\n";

    std::cout << "std::nullptr_t (C++11)\n";
    std::cout << "std::nullptr_t can only hold one value \"nullptr\"\n";
    std::cout << "This way we can write a function that only accepts a nullptr argument\n";

    doSomethingElse(nullptr);   // call doSomethingElse with an argument of type std::nullptr_t

    return 0;
}