#include <iostream>

int main(){

    std::cout << "\6F" << " octal " << std::endl;
    std::cout << "\x6F" << " hex number " << std::endl;
    std::cout << "\"This is a quoted text\"" << std::endl;
    std::cout << "\\ backslash" << std::endl;
    std::cout << "before backspace" << "\b" << "(addition)" << std::endl;
 
    return 0;
}