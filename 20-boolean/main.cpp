#include <iostream>

int main(){
    bool b1 = true;
    bool b2(false);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    // std::cout << b3 << std::endl;

    std::cout << std::boolalpha;    // Prints bools as true or false 

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    std::cout << std::noboolalpha;  // Turns of boolalpha (l:11)
    
    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    
    return 0;
}