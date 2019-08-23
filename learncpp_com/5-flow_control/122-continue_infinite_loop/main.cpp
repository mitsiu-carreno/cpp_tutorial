#include <iostream>

int main(){
	int count = 1;
	std::cout << "We will print 1 -> 10 and try (fail) to skip 5, turning our while statement into an infinite loop\n";

	while(count <=10){
		if(count == 5)
			continue;	// Jump to the end of loop body
		else{
			
		std::cout << count << " ";
		++count;
		}
		// Jumped here, but now our variable cout is stuck at the value 5
	}

	return 0;
}
