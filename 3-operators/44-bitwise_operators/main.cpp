#include <iostream>

int main(){
    unsigned int x = 4;
    //4     = 0000 0100
    //4<<1  = 0000 1000 = 8
    std::cout << (x<<1) << std::endl;

    std::cout << "int uses " << sizeof(int) << " bytes" << "\n";

    unsigned int y = 4;
    std::cout << (~y) << std::endl;

    return 0;
}