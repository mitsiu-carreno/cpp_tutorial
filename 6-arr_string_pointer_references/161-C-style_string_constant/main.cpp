#include <iostream>

const char* getName()
{
    return "Mitsiu";
}

int main()
{
    // C-style string
    char myName[] = "Alex";  // fixed array
    std::cout << myName << "\n";

    // C-style string symbolic constant using pointers
    const char *myConstantName = "Alex";
    std::cout << myConstantName << "\n";

    std::cout << "As string literals are stored in a fixed location in memory \n";
    std::cout << "They have static duration so theres no scoping issues";

    const char *otherName = getName();
    
    std::cout << "If the function were returning any other kind of literal by address\n";
    std::cout << "The literal would be destroyed at the end of getName(), and we'd be returning\n";
    std::cout << "a hanging pointer back to the caller\n";
    

    return 0;
}