#include <iostream>

int main(){
    if(true){
        std::cout << "The condition is true" << std::endl;
    }else{
        std::cout << "The condition is false" << std::endl;
    }


    bool b = false;

    if(b){
        std::cout << "var b is true" << std::endl;
    }else{
        std::cout << "var b is false" << std::endl;
    }

    if(b == false){
        std::cout << "the value is zero" << std::endl;
    }else{
        std::cout << "the value is not zero" << std::endl;
    }

    if(4){
        std::cout << "non-zero value in if statement" << std::endl;
    }else{
        std::cout << "zero value in if statement" << std::endl;
    }


    // Inputting boolean values
    bool boolIn;
    std::cout << "Enter a bool value: " << std::endl;
    std::cin >> boolIn;
    std::cout << "You entered: " << boolIn << std::endl;

    return 0;
}