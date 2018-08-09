#include <iostream>

int main(){
    unsigned int x = 4;
    std::cout << "Bitwise left shift (right shift also available)" << "\n";
    std::cout << "4     = 00000000 00000000 00000000 00000100" << "\n";
    std::cout << "4<<1  = 00000000 00000000 00000000 00001000 = 8" << "\n";
    std::cout << (x<<1) << "\n" << std::endl;

    std::cout << "int uses " << sizeof(int) << " bytes" << "\n";

    std::cout << "Bitwise NOT" << "\n";
    std::cout << "~8   = 11111111 11111111 11111111 11110111 = 4294967291" << "\n";
    std::cout << (~x) << "\n" << std::endl;

    std::cout << "Bitwise AND" << "\n";
    std::cout << "1 & 3" << "\n";
    std::cout << "0001  //1" << "\n";
    std::cout << "0011  //3" << "\n"; 
    std::cout << "----" << "\n";
    std::cout << "0001  //1" << "\n";
    std::cout << (1 & 3) << "\n" << std::endl;

    std::cout << "Bitwise OR" << "\n";
    std::cout << "5 | 6" << "\n";
    std::cout << "0101  //5" << "\n";
    std::cout << "0110  //6" << "\n";
    std::cout << "----" << "\n";
    std::cout << "0111  //7" << "\n";
    std::cout << (5 | 6) << "\n" <<  std::endl;

    std::cout << "Bitwise XOR" << "\n";
    std::cout << "5 ^ 6 ^ 7" << "\n";
    std::cout << "0101  //5" << "\n";
    std::cout << "0110  //6" << "\n";
    std::cout << "0111  //7" << "\n"; 
    std::cout << "----" << "\n";
    std::cout << "0100  //4" << "\n";
    std::cout << (5 ^ 6 ^ 7) << "\n" << std::endl; 

    return 0;
}