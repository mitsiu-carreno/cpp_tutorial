#include <iostream>
#include <utility>

int findMinIndex(int startPoint, int arr[], int arrLength)
{
    int minIndex = startPoint;
    for(int count = startPoint+1; count < arrLength; ++count)
    {
        if(arr[count] < arr[minIndex])
        {
            minIndex = count;
        }
    }
    return minIndex;
}

void swapElements(int indexX, int indexY, int arr[])
{
    std::swap(arr[indexX], arr[indexY]);
}

void printArray(int arr[], int arrLength)
{
    for(int count=0; count < arrLength; ++count)
    {
        std::cout << "arr[" << count << "] = " << arr[count] << "\n";
    }
}

int main()
{
    std::cout << "Selection sort performs the following steps to sort an array from smallest to largest:\n";
    std::cout << "1) Starting at array index 0, search the entire array to find the smallest value\n";
    std::cout << "2) Swap smallest value found in the array with value at index 0\n";
    std::cout << "3) Repeat steps 1 and 2 starting from next index\n";

    int arr[] = {30, 50, 20, 10, 40};
    int numElements = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Print original array:\n";
    printArray(arr, numElements);
    
    for(int count = 0; count < numElements-1; ++count)
    {
        int minIndex = findMinIndex(count, arr, numElements);
        swapElements(count, minIndex, arr);
    }
    
    std::cout << "Print ordered array:\n";
    printArray(arr, numElements);
    return 0;
}