#include <iostream>

bool isEven(int input){
    /*  Simplify
    if(input % 2 == 0){
        return true;
    }else{
        return false;
    }
    */
   // Check if the reminder is equal to 0 and return true (or false if diff)
   return (input % 2) == 0;

}

int main(){
    std::cout << "Ingresa un número entero: ";
    int input;
    std::cin >> input;

    if(isEven(input)){
        std::cout << "El número " << input << " es par";
    }else{
        std::cout << "El número " << input << " es impar";
    }

    return 0;
}