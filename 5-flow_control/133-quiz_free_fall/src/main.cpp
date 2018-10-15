#include <iostream>
#include <cmath>
#include "constants.hpp"

bool validInput()
{
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;
    }
    // Clear any aditional bad input
    std::cin.ignore(32767, '\n');
    return true;
}

// gets initial height from user and returns it
double getInitialHeight()
{
    while(true)
    {
        double height;
        std::cout << "Enter the building height in meters: ";
        std::cin >> height;
        if(validInput()){
            return height;
        }else{
            std::cout << "Sorry not a valid input man, please put a double man.\n\n";
        }
    } 
}

// Returns height from ground after "elapsedSeconds"
double calcHeight(double initialHeight, int elapsedSeconds)
{
    // Using formula: [s = u * t + (a*t^2) / 2], here u (initial velocity) = 0
    double distanceFallen = (myConstants::gravity * pow(elapsedSeconds, 2) / 2);
    double currentHeight = initialHeight - distanceFallen;
    return currentHeight;
}

// Print height every second till ball has reached the ground
void printHeight(double initialHeight)
{
    double currentHeight = initialHeight;
    int elapsedSeconds = 0;
    while(currentHeight > 0)
    {
        currentHeight = calcHeight(currentHeight, elapsedSeconds);
        if(currentHeight > 0)
            std::cout << "At " << elapsedSeconds << " seconds the ball is " << currentHeight << " meters high\n";
        else
            std::cout << "At " << elapsedSeconds << " seconds the fall is on the floor\n";
            
        ++elapsedSeconds;
    }
}

int main()
{
    double height;
    height = getInitialHeight();
    printHeight(height);

    return 0;
}