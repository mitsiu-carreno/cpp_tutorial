#include <iostream>
#include <array>
#include <algorithm>

void printLength(const std::array<int, 5> myArray){
  // Notice the const this to prevent the compiler from making a copy of the std::array for performance reasons
  std::cout << "in function the length is: " << myArray.size() << '\n';
}

int main(){

  // std::array WONT DECAY when passed into a function
  
  std::array<int, 3> myArray;  // Declare an integer array with length 3

  // Just like the native implementation of fixed arrays, THE LENGTH MUST BE KNOWN AT COMPILE TIME
  
  // Can be initialized
  std::array<int,5> myArray2 = {9,7,5,3,1};  // Initializer list

  std::array<int,5> myArray3 {9,7,5,3,1};    // Uniform initialization

  // Unlike built-in fixed arrays, with std::array you CANNOT OMIT THE LENGTH
  
  // std::array<int, > myArray {9,7,5,3,1}; illegal, must provide length
  // std::array<int> myArray {9,7,5,3,1};   illegal, must provide length

  // However, since C++17 it's allowed to OMIT THE TYPE AND SIZE they can ONLY be omited together, but one or the other, and ONLY if the array is explicitly initialized
  
  std::array myArray4 {9,7,5,3,1};  // The type is deduced to std::array<int, 5>
  
  std::array myArray5 {9.7,7.31};   // The type is deduced to std::array<double, 2> 

  // You can also assign values to the array using an initializer list
  
  std::array<int, 5> myArray6;
  myArray6 = {0,1,2,3,4}; // Okay
  myArray6 = {9,8,7};     // Okay elements 3 and 4 are set to zero!
  // myArray6 = {0,1,2,3,4,5}; NOT ALLOWED too may elements in initializer list
  

  // Accessing std::array values using subscript operator
  std::cout << myArray6[1] << '\n';
  myArray6[2] = 6;

  // The subscript operator DOES NOT do any BOUNDS-CHECKING. If an invalid index is provided, undefined behavior will happen
  
  //std::array  suports a second form of array element access (at() function) which DOES BOUNDS CHECKING
  
  myArray6.at(1) = 6;   // array element 1 valid
  //myArray6.at(9) = 10;  // array element 9 is invalid will throw an error

  // SIZE AND SORTING 
  std::cout << "array length is: " << myArray6.size() << '\n';

  // Because std::array DOESN'T DECAY to a pointer the size() will work 
  printLength(myArray6);  
  // Rule: always pass std::array by reference or const reference
  
  
  // Because the length is always known, range-based for loops work with std::array
  for (int element : myArray6){
    std::cout << element << ' ';
  }

  std::cout << std::endl;
  
  // You can sort std::array using std::sort (algorithm header)
  std::sort(myArray6.begin(), myArray6.end());
  // sort the array forwards
  for(int element : myArray6){
    std::cout << element << ' ';
  }
  std::cout << std::endl;

  std::sort(myArray6.rbegin(), myArray6.rend());
  // sort the array backwards
  for(int element : myArray6){
    std::cout << element << ' ';
  }
  std::cout << std::endl;
  

  return 0;
}
