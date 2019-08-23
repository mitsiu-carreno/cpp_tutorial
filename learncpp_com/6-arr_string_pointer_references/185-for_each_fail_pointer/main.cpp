#include <iostream>

int sumArray(int array[]){  // array is a pointer
  int sum = 0;
  for(const auto &element : array){   // compile error, the size of array isn't known 
    sum += element;
  }
  return sum;
}

int main(){
  int array[5] = {9,7,5,3,1};
  std::cout << sumArray(array);   // array decays into pointer here

  return 0;
}