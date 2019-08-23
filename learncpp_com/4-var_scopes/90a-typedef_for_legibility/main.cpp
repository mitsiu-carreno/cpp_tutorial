#include <iostream>

// Now we know what does the value stored here represents
typedef int testScore_t;

testScore_t GradeTest(){
	// He did well :)
	return 9;
}

int main(){

	testScore_t myTest = GradeTest();
	
	std::cout << "My grade on math is: " << myTest << "\n";

	return 0;
}


