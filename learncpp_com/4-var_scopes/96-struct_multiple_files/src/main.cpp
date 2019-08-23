#include <iostream>
#include <string>
#include "../headers/employee.hpp"

// Struct declarations do not take any memory and apply the same rules as any other variable

// Forward declaration for function in other.cpp
void print();

Employee emp1 = {"Mit", 25, 20000};

int main(){

	std::cout << emp1.name << std::endl; 

	print();
	return 0;
}
