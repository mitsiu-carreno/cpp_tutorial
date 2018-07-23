#include <iostream>
#include <cstdint>

int main(){

    std::int16_t i(5);  //Direct initialization

    std::cout << i << std::endl;

    //------------------------------

    int8_t myInt = 65;  // On most systems, this program will print 'A' (treating myInt as a char) 
                        // However some systems may print 65 as expected

    std::cout << "int8_t 65 = " << myInt << std::endl;

    return 0;
}
