#include <iostream>
#include <vector>


int main(){

  // The C++ standard library provides functionality that makes working with dynamic arrays safer and easier
  // This functionality is named std::vector
  // std::vector is one of the most useful and versatile tools 
  

  // Introduced in C++03, std::vector provides DYNAMIC ARRAY FUNCTIONALITY of fixed arrays that HANDLES ITS OWN MEMORY MANAGEMENT.
  

  // No need to specify length at initialization
  std::vector<int> myVec;
  
  // use initializer list to initialize vector
  std::vector<int> myVec2 = {9,7,5,3,1};
  
  // use uniform initialization to initialize vector (C++11 onward)
  std::vector<int> myVec3 {9,7,5,3,1};


  // Just like std::array, accessing array elements can be done via the [] operator(which does no bounds checking) 
  // or the at() function (which does bounds checking)
  
  //myVec3[8] = 2;    // no bounds checking
  //myVec3.at(9) = 3; // does bounds checking   

  // in either case, if you request an element that is off the end of the array, the vector WILL NOT automatically resize
  

  // As of C++11, you can also assign values to a std::vector using an initializer-list
  myVec = {0,1,2,3,4};  // okay, vector length is now 5
  myVec = {9,8,7};  // okay, length is now 3!

  // In this case, the vector will self-resize to match the number of elements provided
  

  // SELF-CLEANUP PREVENTS MEMORY LEAKS
  // When a vector variable goes out of scope, it automatically deallocates the memory it controls (if necessary)
  // This is not only handy (as you don't have to do it yourself) it also helps prevent memory leaks
  // consider the following snippet
  
  /*
   * void doSomething(bool earlyExit)
   * {
   *   int *array = new int[5] {9,7,5,3,1};
   *   
   *   if(earlyExit)
   *     return;
   *   
   *   //do stuff here 
   *
   *   delete[] array;  // never called  
   * }
   *
   * If earlyExit is set to true, array will never be deallocated, and the memory will be leaked
   * However, if array is a vector, this won't happen
  */

  
  // VECTORS REMEMBER THEIR LENGTH
  // We can ask for the vector's length via the size() function
  
  std::cout << "The length is: " << myVec3.size() << '\n';

  // Just like with std::array, size() returns a value of nested type size_type (full type in the above example would be std::vector::size_type), which is an unsigned integer
  

  // RESIZING AN ARRAY
  // Resizing a built-in dynamically allocated array is complicated. Resizing a std::vector is as simple as calling the resize() function
  // When we resized the array, the existing element values are preserved
  // And new elements are initialized to the default value for the type (0 for integers)
  
  // Resizing a vector is COMPUTATIONALLY EXPENSIVE, so you should strive to MINIMIZE THE NUMBER OF TIMES you do so.
 
  std::cout << "The length at first is: " << myVec.size() << '\n';
  myVec.resize(5);  // set size to 5
  std::cout << "The length after resize is: " << myVec.size() << '\n';

  for(auto const &elem: myVec){
    std::cout << elem << ' ';
  }
  std::cout << std::endl;

  // Vectors may be RESIZED TO BE SMALLER
  myVec.resize(2);  // Resize length to 3 from 5
  
  std::cout << "The new length after second resize is: " << myVec.size() << '\n';

  for(auto const &elem : myVec){
    std::cout << elem << ' ';
  }
  std::cout << std::endl;

  return 0;
}
