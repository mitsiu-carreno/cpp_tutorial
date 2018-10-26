#include <iostream>

int main()
{
    int prime[5];   
    prime[0] = 2;
    prime[1] = 3;
    prime[2] = 5;
    prime[3] = 7;
    prime[4] = 11;

    for(int count= 0; count < 5; ++count){
        std::cout << "Prime array in position: " << count << " value: " << prime[count] << std::endl;
    }

    double array[3];
    array[0] = 2.0;
    array[1] = 3.0;
    array[2] = 4.3;
    std::cout << "Average of array is " << (array[0] + array[1] + array[2]) / 3 << std::endl;

    struct Rectangle{
        int width;
        int heigth;
    };

    Rectangle rects[3]; // Declare an array of 3 Rectangle

    rects[0].heigth = 13;

    // Array subscripts (index) must always be an integral (char, short, int, long, long long and bool)
    // Can be a literal value, a variable (constant or non-constant), or an expression that evaluates to an integral type

    int arr[5]; //Declare an array of length 5

    // Using a literal (constant) index
    arr[1] = 7; //ok

    // Using an enum (constant) index
    enum Animals{
        ANIMAL_CAT = 2
    };
    arr[ANIMAL_CAT] = 4; //ok

    // Using a variable (non-constant) index
    short index = 3;
    arr[index] = 6; // ok

    // Using an expression that evaluates to an integer index
    arr[2+2] = 8; // ok

    // For fixed array declarations, the length of the array must be a compile-time constant

    // using a literal constant
    int array1[5]; //ok

    // using a macro symbolic constant
    #define ARRAY_LENGTH 5
    int array2[ARRAY_LENGTH]; // Syntactically ok, but don't do this

    // using a simbolic constant
    const int arrayLength = 5;
    int array3[arrayLength]; //ok

    // using an enumerator
    enum ArrayElements{
        MAX_ARRAY_LENGTH = 5
    };
    int array4[MAX_ARRAY_LENGTH]; //ok

    // NON-CONSTANT VARIABLES OR RUNTIME CONSTANTS CANNOT BE USED
    /*
    int temp = 5;
    int const length = temp;    the value of length isn't known until runtime, so its a runtime constant not a compile-time constant!
    int array[length];  NOT OK
    ---------------------
    int length2;
    std::cin >> length2;
    int array[length2];  NOT OK
    */

    return 0;
}