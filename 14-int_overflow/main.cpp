#include <iostream>

int main(){
    //--------------------------
    unsigned short x = 65535;   // The larges 16-bit unsigned value possible 

    std::cout << "x value is: " << x << std::endl;

    x = x + 1;      // 65536 is out of our range -- we get overflow because x can`t hold 17 bits

    std::cout << "now x value is: " << x  << std::endl;

    //--------------------------
    unsigned short y = 0;       // The smallest 2-byte unsigned value possible

    std::cout << "y value is: " << y << std::endl;

    y = y - 1;      // overflow!

    std::cout << "now y value is: " << y << std::endl;

    //-----Integer Division------

    std::cout << 8/5 << std::endl;  // The fractional part is dropped
    
    return 0;
}