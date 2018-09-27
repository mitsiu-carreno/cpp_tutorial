#include <iostream>

int main(){

	int iii, jjj;

	for(iii=0, jjj=9; iii < 10; ++iii, --jjj){	// This is the only use case of the comma operator in order to assign (in the init-statements) or change (in the end-statement) the value of multiple variables
		std::cout << iii << " " << jjj << std::endl;
	}

	std::cout << std::endl;
	for(int aaa=0, bbb=0; aaa < 10; ++aaa, ++bbb){	// In the init statement is not the comma operator, but instead the normal variable definition sintax
		std::cout << aaa << std::endl;
	}

	return 0;
}
