#include <iostream>

int main(){

    const double gravity (9.8);
    
    int inputAge;
    std::cout << "Enter your age: ";
    std::cin >> inputAge;

    const int userAge(inputAge);    // const variables can be initializated from non-const variables


    return 0;
}