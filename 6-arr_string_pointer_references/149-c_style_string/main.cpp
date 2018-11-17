#include <iostream>

int main()
{
    std::cout << "A C-style string is simply an array of characters that uses a null terminator \\0 (ascii code 0)\n";
    std::cout << "Also called a null-terminated string\n\n";

    char myCStyleString[] ="string";
    
    int sizeOfString = sizeof(myCStyleString) / sizeof(myCStyleString[0]); 

    std::cout << "The array \"string\" has " << sizeOfString << " characters.";
    
     
    return 0;
}