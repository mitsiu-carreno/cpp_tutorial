#include <iostream>

int main()
{
    int nArray[] = {9,7,5,3,1};
    char cString[] = "Mitisu";
    const char *cSConstant = "Alejandro";

    std::cout << "Printing nArray " << nArray << "\n";
    std::cout << "Printing cString " << cString << "\n";
    std::cout << "Printing cSConstant " << cSConstant << "\n\n";   

    std::cout << "If you pass a non-char pointer, it will simply print the contents of the pointer (the address)\n";
    std::cout << "If you pass an object of type char* or const char*, it will print the string  (the pointers value)\n\n";


    char c = 'Q';
    std::cout << &c << "\n";

    std::cout << "&c has type char*, so std::cout try to print this as a string, so it keep going (through memory garbage) until it find's a mem space holding 0 which interprets as a null terminator\n";

    return 0;
}