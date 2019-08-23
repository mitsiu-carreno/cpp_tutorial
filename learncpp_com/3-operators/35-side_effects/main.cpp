#include <iostream>

int add(int a, int b){
    return a + b;
}

int main(){
    // Even though this will produce a result, such a result vary from compiler to compiler 
    // due to unspecified order in which certain things are evaluated
    
    // UPDATE: Actually this produces a WARNING: "unsequenced modification and access to 'x' [-Wunsequenced]"

    int x = 5;
    int value = add(x, ++x);

    std::cout << "The add function outputs " << value << "\n";

    //////////////////////////////////////////////////////////
    int z = 3;

    z = z++;
    std::cout << "The value of z is " << z << "\n";

    return 0;
}