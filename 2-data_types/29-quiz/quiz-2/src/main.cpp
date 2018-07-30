#include <iostream>
#include "constants.h"

double getTowerHeight(){
    double input;
    std::cout << "Enter the height of the tower in meters : ";
    std::cin >> input;
    return input;
}

double calcHeight(double totalHeight, int secondsElapsed){
    double tempHeight = totalHeight - ( myConstants::gravity * secondsElapsed * secondsElapsed)/2;
    return tempHeight;
}

void printResult(double totalHeight, int secondsElapsed){
    double tempHeight = calcHeight(totalHeight, secondsElapsed);
    if(tempHeight > 0){
        std::cout << "At "<< secondsElapsed << " seconds, the ball is at height: " << tempHeight << " meters." << std::endl;
    }else{
        std::cout << "At "<< secondsElapsed << " seconds, the ball is on the ground" << std::endl;
    }
    
}

int main(){

    double totalHeight = getTowerHeight();

    printResult(totalHeight, 0);
    printResult(totalHeight, 1);
    printResult(totalHeight, 2);
    printResult(totalHeight, 3);
    printResult(totalHeight, 4);
    printResult(totalHeight, 5);
    return 0;
}