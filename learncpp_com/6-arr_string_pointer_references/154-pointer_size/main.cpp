#include <iostream>

int main()
{
    std::cout << "The size of a pointer is dependent upon the architecture the executable is compiled for\n";
    std::cout << "32-bit architecture is 32 bit pointer (4-bytes)\n";
    std::cout << "64-bit architecture is 64 bit pointer (8-bytes)\n";
    std::cout << "This is true regardless of what is being pointed to\n\n";

    std::cout << "A pointer is just a memory address, and the nuber of bits needed to access a memory address on a given machine is always constant\n\n";

    int *iPtr;
    char *cPtr;
    double *dPtr;

    struct Something{
        int x, y ,z;    
    };

    Something *structPtr;

    std::cout << sizeof(iPtr) << " bytes on a pointer to integer\n";
    std::cout << sizeof(cPtr) << " bytes on a pointer to char\n";
    std::cout << sizeof(dPtr) << " bytes on a pointer to double\n";
    std::cout << sizeof(structPtr) << " bytes on a pointer to custom struct\n";
    
    return 0;
}