#include <iostream>

bool isPrime(int input){
    bool prime(false);
    if(input == 2){
        prime = true;
    }else if(input == 3){
        prime = true;
    }else if(input == 5){
        prime = true;
    }else if(input == 7){
        prime = true;
    }
    return prime;
}

void printResult(bool prime){
    if(prime){
        std::cout << "El número es primo" << std::endl;
    }else{
        std::cout << "El número no es primo" << std::endl;
    }
}

int main(){
    int input;

    std::cout << "Ingresa un numero 1-10:" << std::endl;
    std::cin >> input;
    
    bool prime = isPrime(input);
    
    printResult(prime);

    return 0;
}