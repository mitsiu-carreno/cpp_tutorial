#include <iostream>

int main(){

    int x = 55;
    int y = 13;

    // Logical NOT
    bool bTooLarge = (x > 100);
    if(!bTooLarge){
        std::cout << "bTooLarge" << "\n";
    }else{
        std::cout << "bNotTooLarge" << "\n";
    }

    if(!(x == y)){
        std::cout << "x not equal y" << "\n";
    }else{
        std::cout << "x equals y" << "\n";
    }

    // Logial OR
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    if(input == 0 || input == 1 || input == 2 || input == 3){
        std::cout << "You entered either 0, 1, 2 or 3" << "\n";
    }else{
        std::cout << "You didn't pick 0, 1, 2 nor 3" << "\n";
    }

    // Logical AND
    if(input >= 10 && input <= 20){
        std::cout << "Your number is between 10 and 20" << "\n";
    }else{
        std::cout << "Your number isn't between 10 and 20" << "\n";
    }

    // Logical XOR
    // C++ does not provide any built in XOR operator.
    // However you can mimic logial XOR using not equal operator (!=)
    bool a = true;
    bool b = false;
    // This pattern only work if the operands are booleans (NOT INTEGERS)
    // If you need a form of XOR that works with non-boolean operands, you can static_cast them to bool
    if(a != b){
        std::cout << "XOR is true";
    }else{
        std::cout << "XOR is false";
    }

    return 0;
}