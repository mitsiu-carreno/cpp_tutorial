#include <iostream>
#include <cstring>  // strcpy
#define __STDC_WANT_LIB_EXT1__ 1    // strcpy_s()

int main()
{
    char source[] = "Copy this!";
    char dest[50];
    char other_dest[5];

    strcpy(dest, source);
    std::cout << dest << "\n\n";

    // strcpy(other_dest, source); // overflow
    
    // DON'T WORK IN THIS MACHINE
    // In C++11 strcpy_s() is preferred
    // (which requires __STDC_WANT_LIB_EXT1__)

    //strcpy_s(other_dest, 5, source);

    char example[20] = "123456";
    std::cout << example << " has " << strlen(example) << " characters with strlen\n";
    std::cout << example << " has " << sizeof(example) / sizeof(source[0]) << " characters with sizeof\n\n"; 


    std::cout << "Appending a string with srtncat(str1, str2, numOfChars) <-(safe), avoid strcat <-(unsafe)\n";
    char append[] = "789";
    strncat(example, append, strlen(append));
    std::cout << example << "\n\n";

    std::cout << "Compare strings strcmp() (0 if equal)\n";
    std::cout << "Is \"" << example << "\" equal to \"1234\" = " << strcmp(example, "1234") << " (0 if equal)\n";
    std::cout << "Is \"" << example << "\" equal to \"123456789\" = " << strcmp(example, "123456789") << " (0 if equal)\n";

    std::cout << "Compare up to a specific number of chars with strncpm() (0 if equal)\n";
    std::cout << "Is \"" << example << "\" (taking first 6 characters) equal to \"1234568\" = " << strncmp(example, "1234568", 6) << " (0 if equal)\n\n";

    return 0;
}