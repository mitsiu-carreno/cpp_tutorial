#include <iostream>

void callFunction(int newVal, int newArr[])
{
  newVal = 100; // this won't affect our variable because a copy is passed

  newArr[0] = 4;  // this will affect our array because the actual array is being passed!!
  newArr[1] = 3;
  newArr[2] = 2;  
  newArr[3] = 1;
  newArr[4] = 0;
}

void keepArray(const int newArr[])
{
  // nothing can modify newArray[]
  // newArr[0] = 100;   <- complile time error
}

int main()
{
  int value = 1;
  int arr[5] = {0,1,2,3,4};

  std::cout << "value before function: " << value << "\n";
  std::cout << "arr before function: " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << "\n\n";

  callFunction(value, arr);

  std::cout << "value after function: " << value << "\n";
  std::cout << "arr after function: " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << "!!!!\n";

  keepArray(arr);

  return 0;
}