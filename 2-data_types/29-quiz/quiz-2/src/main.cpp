#include <iostream>
#include "constants.h"

double getTowerHeight(){
    double input;
    std::cout << "Enter the height of the tower in meters : ";
    std::cin >> input;
    return input;
}

double calcHeight(double totalHeight, int secondsElapsed){
    //myConstants::gravity
    return 9.0;
}

void printResult(double totalHeight, int secondsElapsed){
    double tempHeight = calcHeight(totalHeight, secondsElapsed);
    std::cout << "At "<< secondsElapsed << " seconds, the ball is at height: " << tempHeight << " meters.";
}

int main(){

    double totalHeight = getTowerHeight();

    printResult(totalHeight, 0);
    printResult(totalHeight, 1);
    printResult(totalHeight, 2);
    return 0;
}