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

    

    return 0;
}