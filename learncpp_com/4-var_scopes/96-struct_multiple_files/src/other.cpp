#include <iostream>
#include <string>
#include "../headers/employee.hpp"

// Forward declare Company struct to avoid errors
extern Employee emp1;

void print(){

std::cout << "This is from an extern file:\t" << emp1.name << std::endl;
}

