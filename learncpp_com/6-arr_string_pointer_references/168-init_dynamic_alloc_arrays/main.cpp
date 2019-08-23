#include <iostream>

int main()
{
    // Initializer lists
    int fixedArray[5] = {1,2,3,4,5};            // initialize a fixed array in C++03
    int *dynamicArray = new int[5] {1,2,3,4,5}; // initialize a dynamic array in C++11
    // note this sintax has no operator = between the array length and the initializer list

    // In c++11 you can NOT initialize a dynamically allocated char from a C-style string
    char *dynamicString = new char[14] {"Hello, world!"}; 
    // Instead use a std::string array (or allocate the array and then strcpy the string in)

    // also note that dynamic arrays must be declared with an explicit length
    int fixedArray2[] {1,2,3,4,5};  //ok
    //int *dynamicArray2 = new int[] {1,2,3,4,5};   // implicit size not allowed for dynamic arrays!
    int *dynamicArray3 = new int[5] {1,2,3,4,5};
    
    delete[] dynamicArray;
    delete[] dynamicArray3;

    return 0;
}