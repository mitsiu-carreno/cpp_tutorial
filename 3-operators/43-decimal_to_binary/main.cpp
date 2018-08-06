#include <iostream>
#include <cmath>

int getBinary(int currentPow, int input){
    int binary = 0;
    while(currentPow >= 0){
        if(input >= pow(2, currentPow)){
            //std::cout << "1";
            binary = (binary * 10) +1;
            input = input - pow(2, currentPow);
        }else{
            //std::cout << "0";
            binary = binary * 10;
        }
        --currentPow;
    }

    return binary;
}

int getMaxPow(int input){
    int tryPow = 1;
    while(pow(2, tryPow) <= input){
        ++tryPow;
    }
    return --tryPow;
}


int main(){
    int input;
    bool positive = true;
    std::cout << "Ingresa un número (positivo o negativo) entero: ";
    std::cin >> input;

    if(input == 0){
        std::cout << "0000 0000" << "\n";
    }else if(input < 0){
        positive = false;
    }

    int maxPow = getMaxPow(input);
    //std::cout << "Set maxPow to: " << maxPow << "\n";
    int result = getBinary(maxPow, input); 
    std::cout << result << "\n";

    /* Unfinished
    if(!positive){
        invertBinary(result);
    }
    */

    return 0;
}