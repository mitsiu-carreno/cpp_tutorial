#include <iostream>

int main(){

  // You can declare BUT NOT INITIALIZE variables inside the switch, both before and after the case laberls

  switch(1){
    int a;  					//OKAY, declaration is allowed before the case labels
    // int b = 5;    	//ILLEGAL, initialization is not allowed before the case labels

    case 1:
      int y;      		// OK, declaration is allowed within a case
      y = 4;      		// OK, this is an assignment
      break;

    case 2:
      y = 5;      		// OK, y was declared above, so we can use it here too
			// Note that although variable y is defined in case 1, it is possible to use because statements under each case is not inside a implicit block 
			// THAT MEANS ALL STATEMENTS INSIDE THE SWITCH ARE PART OF THE SAME SCOPE
			// When we define a local variable "like int y" the variable isn't created at that point ITS ACTAULLY CREATED AT THE START OF THE BLOCK ITS DECLARED IN
			// However, its not visible to the scope until the point of declaration
			// The declaration statement doesn't need to execute -- it just tell the compiler that the variable can be used past that point
      break;

		case 3:
			//int z = 4;		//ILLEGAL, initialization is not allowed within a case
			// However initialization of varaibles DOES require execution, and the case containing the initialization MAY NOT BE EXECUTED
			break;

		default:
			std::cout << "Default case\n";
			break;
	}

	// If you need to define and/or initialize a new variable, BEST PRACTICE is to do so inside a block underneath the case statement
	switch(1){
		case 1:
		{	// note additional block here!
			int x = 4;	// Okay, variables can be initialized inside a block inside a case 
			std::cout << "Variable created on second switch:\t" << x << std::endl;
			break;
		}
		
		default:
			std::cout << "Default case\n";
			break;
	}

  return 0;
}
