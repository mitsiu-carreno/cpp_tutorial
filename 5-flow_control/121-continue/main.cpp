#include <iostream>

int main(){

	std::cout << "We will display numbers 1 -> 20, but avoid those divisible by 4\n";
	for(int count=1; count <=20; ++count){
		// If the number is divisible by 4, skip this iteration 
		if(count%4 == 0)
			continue;	// Jump to end of loop body 
		
		// If the number is not divisible by 4 keep going 
		std::cout << count << " ";
		// The continue statement jumps here
	}	
	std::cout << "\n";

  return 0;
}
