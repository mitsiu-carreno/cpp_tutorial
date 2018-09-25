#include <iostream>

void cleanup(){
	std::cout << "As the program is about to halt, we run a cleanup to whatever operations needs to be made before halt\n";
}	

int main(){
	std::cout << "Starting program \n";
	
	cleanup();	
	// This line tells the program to quit running immediatelly, a status code can be send 
	exit(0);

	// This line of code is actually never reached :/
	std::cout << "Finishing program\n";

	return 0;			
}
