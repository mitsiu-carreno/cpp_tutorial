#include <iostream>

// Note: you need to specify the the array size in the function declaration
void printElements(int (&array)[4]){
    int sizeArr{ sizeof(array) / sizeof(array[0])};

    for (int count{0}; count < sizeArr; ++ count){
        std::cout << "Element " << count+1 << ": " << array[count] << "\n";
    }
}

int main(){

    std::cout << "One of the most annoying issues with C-style arrays is that in most cases they\n";
    std::cout << "decay into pointers when evaluated.\n";
    std::cout << "However if a C-style array is passed by reference, this decaying does not happen\n";

    int array[] {99, 20, 40, 14};
    printElements(array);
    
    return 0;
}