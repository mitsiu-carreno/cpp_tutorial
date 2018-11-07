#include <iostream>
#include <utility>  // for std::swap();

void printArray(int array[], int length)
{
  for(int count = 0; count < length; ++count)
  {
    std::cout << "array[" << count << "] = " << array[count] << "\n";
  }
}

void bubble(int array[], int length)
{
  for(int outerCount = 0; outerCount < length; ++outerCount)
  {
    for(int innerCount = 0; innerCount < length-1; ++innerCount)
    { 
      if(array[innerCount] > array[innerCount+1])
      {
        std::swap(array[innerCount], array[innerCount+1]);
      }
    }
  }
}

void bubbleOptimized(int array[], int length)
{
  
  for(int outerCount = 0; outerCount < length-1; ++outerCount)
  {
    bool noSwap = true;
    for(int innerCount = 0; innerCount < length-outerCount-1; ++ innerCount)
    {
      if(array[innerCount] > array[innerCount+1])
      {
        noSwap = false;
        std::swap(array[innerCount], array[innerCount+1]);
      }
    }
    std::cout << "STEP--\n"; 
    printArray(array, length);
    if(noSwap){
      std::cout << "Early termination on interation " << outerCount +1 << "\n";
      return;
    }
  }
}

int main()
{
  std::cout << "Unoptimized bubble sort performs the following steps to sort an array from smallest to largest\n";
  std::cout << "1) Compare array element 0 with array element 1. If the element is lager, swap it with element 1\n";
  std::cout << "2) Do the same with elements 1 and 2, and every subsequent pair of elements until you hit the end of the array. At this point, the last element of the array will be sorted\n";
  std::cout << "3) Repeat the first two steps until the array is sorted\n\n";


  int array[] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
  int numElements = sizeof(array) / sizeof(array[0]);

  std::cout << "Original array:\n";
  printArray(array, numElements);

  bubbleOptimized(array, numElements);

  std::cout << "Bubbled array:\n";
  printArray(array, numElements);

  return 0;
}