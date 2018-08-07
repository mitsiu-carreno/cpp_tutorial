#include <iostream>

int main(){
    unsigned int x = 4;
    //4     = 00000000 00000000 00000000 00000100
    //4<<1  = 00000000 00000000 00000000 00001000 = 8
    std::cout << (x<<1) << std::endl;

    std::cout << "int uses " << sizeof(int) << " bytes" << "\n";

    // ~8   = 11111111 11111111 11111111 11110111 = 4294967291
    std::cout << (~x) << std::endl;

    return 0;
}