#include <iostream>
#include <cstring>  // strcpy

int main()
{
    char source[] = "Copy this!";
    char dest[50];
    char other_dest[5];

    strcpy(dest, source);
    std::cout << dest << "\n";

    // strcpy(other_dest, source); // overflow
    

    return 0;
}