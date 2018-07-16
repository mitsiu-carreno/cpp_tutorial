#include <iostream>

int readNumber(){
    int input;
    std::cout << "Ingresa el número "<< std::endl;
    std::cin >> input;
    
    return input;
}

void writeAnswer(int result){
    std::cout << "El resultado de la suma es " << result << std::endl;
}

int main(){
    int firstVal = readNumber();
    int secondVal = readNumber();

    int result = firstVal + secondVal;

    writeAnswer(result);

    return 0;
}