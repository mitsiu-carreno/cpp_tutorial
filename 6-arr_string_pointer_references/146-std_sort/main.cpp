#include <iostream>
#include <algorithm>  // for std::sort

int main()
{
  int arr[] = {24, 56, 16, 85, 26, 69, 392, 39, 0};
  int numElements = sizeof(arr) / sizeof(arr[0]);

  std::sort(arr, arr + numElements);

  for(int count = 0; count < numElements; ++count)
  {
    std::cout << "arr[" << count << "] = " << arr[count] << "\n";
  }

  return 0;
}