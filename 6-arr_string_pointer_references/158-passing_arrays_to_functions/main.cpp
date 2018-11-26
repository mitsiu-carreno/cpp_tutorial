#include <iostream>

void printPtrSize(int *arr)
{
  // array is treated as a pointer here
  std::cout << "In function, size of pointer is: " << sizeof(arr) << " bytes\n";
}

// C++ will implicitly convert  parameter arr[] to *arr
void printArrSize(int arr[])
{
  // array is treated as a pointer here, not a fixed array
  std::cout << "In function, size of array is: " << sizeof(arr) << " bytes\n";
}

void changeArray(int *arr)
{
  *arr = 5;
}

void changeMoreArray(int arr[])
{
  arr[0] = 0;
  arr[1] = 1;
}

void changePtr(int *arr)
{
  arr[0]=10;
  arr[1]=11;
}

int main()
{
  int arr[] = {3,6,7,8,2,7,3,7,3,2,5,8};

  std::cout << "The size of the array is: " << sizeof(arr) << " bytes\n";   // will print sizeof(int) * array length

  printPtrSize(arr);  // the array argument decays into pointer here
  printArrSize(arr);  // the array argument decays into pointer here

  // C++ implicitly converts parameters using the array sintax [] to the pointer sintax *
  // so the following two are identical
  //printPtrSize(arr[]);
  //printPtrSize(*arr); 
  
  std::cout << "The first element value is: " << arr[0] << "\n\n";

  changeArray(arr);

  std::cout << "The first element value is: " << arr[0] << "\n";
  std::cout << "The second element value is: " << arr[1] << "\n\n";

  changeMoreArray(arr);

  std::cout << "The first element value is: " << arr[0] << "\n";
  std::cout << "The second element value is: " << arr[1] << "\n";
  
  changePtr(arr);
  std::cout << "The first element value is: " << arr[0] << "\n";
  std::cout << "The second element value is: " << arr[1] << "\n";

  return 0;
}