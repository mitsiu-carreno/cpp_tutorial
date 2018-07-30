#include <iostream>

void doNothing(const int &x){
std::cout << "doing nothing" << std::endl;
}

int main(){
    // define an integer variable named x
    int x;   //this variable is uninitialized

    doNothing(x); //make compiler thing we are using x

    std::cout << x << std::endl;

    return 0;
}