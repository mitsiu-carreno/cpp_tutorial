#include <iostream>

int getValueFromUser(){
    std::cout << "Ingresa tu número: ";

    int num;
    std::cin >> num;

    std::cout << "Numero : " << num << std::endl;
    return num;
}

int addFunc(int x, int y){
    return x + y;
}

int multiFunc(int x, int y){
    return x * y;
}

int main(){

    int x = getValueFromUser();
    int y = getValueFromUser();
    
    std::cout << x << " + " << y << " = " << x+y << std::endl;

    // Function parameter
    std::cout << addFunc(x, multiFunc(x, y)) << std::endl;
    
    return 0;
}
