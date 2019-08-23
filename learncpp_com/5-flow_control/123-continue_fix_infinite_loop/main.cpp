#include <iostream>

int main(){

	std::cout << "Example to use continue correctly inside a do-while statement\n";

	int count = 1;

	do{
		if(count == 5)
			continue;	// Jump to end of loop body
		std::cout << count << " ";

		// The continue statement jumps here
	}while(++count <=10);	// this still executes since it's outside the loop body

	return 0;
}
