#include <iostream>

int main(){
    int oct = 012;
    std::cout << "012 in octal means: " << oct << std::endl;

    int hex = 0xF; 
    std::cout << "0xF in hexadecimal means: " << hex << std::endl;

    // assign a binary literal
    int bin(0);
    bin = 0x01;     // assign binary 0000 0001 to the variable
    bin = 0x02;     // assign binary 0000 0010 to the variable
    bin = 0x04;     // assign binary 0000 0100 to the variable
    bin = 0x08;     // assign binary 0000 1000 to the variable
    bin = 0x10;     // assign binary 0001 0000 to the variable
    bin = 0x20;     // assign binary 0010 0000 to the variable
    bin = 0x40;     // assign binary 0100 0000 to the variable
    bin = 0x80;     // assign binary 1000 0000 to the variable
    bin = 0xFF;     // assign binary 1111 1111 to the variable
    bin = 0xB3;     // assign binary 1011 0011 to the variable
    bin = 0xF770;   // assign binary 1111 0111 0111 0000 to the variable


    // C++14, can assign binary literals by using the 0b prefix
    bin = 0b1;      // assign binary 0000 0001 to the variable
    bin = 0b11;     // assign binary 0000 0011 to the variable
    bin = 0b1010;   // assign binary 0000 1010 to the variable
    bin = 0b11110000;   // assign binary 1111 0000 to the variable

    // C++14 also adds the hability to use a quotation mark (') as digin separator
    //bin = 0b1011'0010;  // assign binary 1011 0010 to the variable
    //long value2 = 2'132'673'462 // much easier to read than 2132673462

    return 0;
}