#include <iostream>

int main(){

	int base = 3;
	//We can omit any or all of the expressions
  for(; base >0; ){
    std::cout << base << " ";
    --base;
	}	

  std::cout << std::endl;

  for(; ;){ // An omitted condition-expressions in for loops are treated as true!!!
		std::cout << "INFINITE LOOP ";
	}

	return 0;
}
