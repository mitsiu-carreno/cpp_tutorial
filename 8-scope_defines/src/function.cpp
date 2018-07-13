#include <iostream>

void doSomething(){
    #ifdef PRINT
        std::cout << "Printing" << std::endl;
    #endif
    #ifndef PRINT
        std::cout << "Not printing" << std::endl;
    #endif 
}