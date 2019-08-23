#include <iostream>

void foo( int *&p)
{
    // p is a reference to a pointer
    // we are making to trick the compiler into thinking p could be modified, so it won't complain about p being uninitialized 
    // This ISN'T somethign you'll ever want to do intentionally 
}

int main()
{
    int *ptr;   // create an unitialized pointer (that points to garbage)
    foo(ptr);     // Trick compiler into thinking we're going to assign this a valid value

    std::cout << *ptr << "\n";  // Dereference the garbage pointer

    return 0;
}