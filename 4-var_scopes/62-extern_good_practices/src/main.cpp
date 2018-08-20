#include <iostream>
#include "constants.h"

// Receive the global variable as parameter so it can be changed if necesarry without modifying the actual global var
double calcVelocity(int time, double gravity){
	return time * gravity;
}

int main(){
	// Call the global variable
	double velocity = calcVelocity(5, getGlobalGravity());
	std::cout << "On earth the velocity reached at 5 seconds is:\t" << velocity << "\n";

	// Use other variable without changing the global var
	velocity = calcVelocity(5, 3.3);
	std::cout << "On mars the velocity reached at 5 seconds is:\t" << velocity << "\n"; 
	return 0;
}
