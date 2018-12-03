#include <iostream>

int main()
{
    int *ptr = new int; // dynamically allocate an integer
    *ptr = 7;   // put a value in that memory location

    int *otherPtr = ptr;    // otherPtr is now pointed at the same memory location

    std::cout << "Dynamic int set to: " << *ptr << "\n\n";

    delete ptr; // return the memory to the operating system. ptr is now a dangling pointer

    // ERRORS
    //std::cout << *ptr;  // Dereferencing a dangling pointer will cause undefined behavior
    //delete ptr;          // trying to deallocate the memory again will also lead to undefined behavior

    ptr = nullptr;  // ptr is now a nullpointer

    // HOWEVER, otherPtr is still a DANGLING POINTER!!!!

    std::cout << "Few best practices against dangling pointers\n";
    std::cout << "-Avoid having multiple pointers point at the same piece of dynamic memory (otherPtr).\n";
    std::cout << " If done its not clear which pointer owns the memory (responsible for deleting it) and which are just accessing\n\n";
    std::cout << "-When you delete a pointer set the pointer to 0 (or nullptr in C++11)\n\n";

    return 0;
}