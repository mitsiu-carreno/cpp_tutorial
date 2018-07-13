#include <iostream>
#include "square.h"

int main(){

    std::cout << "A square has " << getSquareSides() << " sides" << std::endl;
    std::cout << "A square of length 5 has a perimeter length " << getSquarePerimeter(5) << std::endl;
    
    return 0;
}