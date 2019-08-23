#include <iostream>

// Forward declaration of add() (using a function prototype)
int add(int, int);

int main(){
    int x = 4;
    int y = 9;

    std::cout << add(x, y) << std::endl;
    // this works because we forward declared add() above
    return 0;
}

// Even though the body of add isn't declared until here
int add(int a, int b){
    return a + b;
}