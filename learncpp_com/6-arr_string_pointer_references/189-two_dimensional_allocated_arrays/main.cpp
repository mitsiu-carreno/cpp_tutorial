#include <iostream>

int main(){

  // Unlike a two dimensional fixed arrays, declared like this:
  // int array[10][5];
  
  // Dinamically allocating two-dimensional array is more challenging
  // int **array = new int[10][5]   WONT WORK!!
 
  // There are two possible solutions 
 
  
  
  // A) if the right-most array dimension is a compile time constant you can do this:
  
  int (*array)[5] = new int[10][5]; // The parenthesis are required to ensure proper precedence
  delete[] array;
  // in C++11 or newer you can use automatic type deduction
  auto arrray = new int[10][5];
  delete[] arrray;

  
  
  
  // B) if the right-most array dimension isn't a compile time constant you have to:
  // First, we allocate an array of pointers 
  
  int **array2 = new int*[10]; // allocate an array of 10 int pointers -- these are our rows

  // Then we iterate through the array of pointers and allocate a dynamic array for each array element
  
  for(int i=0; i<10; ++i){
    array2[i] = new int[5]; // these are our columns
  }

  // Bascially our dynamically two-dimensional array IS A DYNAMIC ONE-DIMENSIONAL ARRAY OF DYNAMIC ONE DIMENSIONAL ARRAYS!
  

  // We can access our array like;
  array2[9][4] = 7;  // This is the same as (array2[9])[4] = 3;

  // 

  for(int i = 0; i<10; ++i){
    delete[] array2[i];
  }
  delete[] array2;

  return 0;
}
