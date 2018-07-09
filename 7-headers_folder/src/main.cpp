// Run as: g++ -o main -I headers/ src/main.cpp  src/add.cpp 

#include <iostream>
#include "add.h"

int main(){
    std::cout << "2 + 8 = " << add(2,8) << std::endl;
    return 0;
}