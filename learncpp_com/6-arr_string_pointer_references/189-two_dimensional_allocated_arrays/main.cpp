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

  //Because each array column is dynamically allocated independently, it's possible to make arrays that are not rectangular

  int **array3 = new int*[10];  // allocate an array of 10 int pointers
  for(int i = 0; i < 10; ++i){
    array3[i] = new int[i+1];
  }
  // Note that array3[0] is an array of length 1, array3[1] is an array of length 2, etc

  // Deallocating a ddynamically allocated two-dimensional array requires a loop as well
  for(int i = 0; i<10; ++i){
    delete[] array2[i];
  }
  delete[] array2;  // This needs to be done last!

  // We delete the array in the opposite order that we created it (elements first, then the array itself)
  // If we delete array before the array elements, then we'd have to access deallocated memory to delete the array elements. And thats UNDEFINED BEHAVIOR
  
  for(int i = 0; i < 10; ++i){
    delete[] array3[i];
  }
  delete[] array3;

  // FLATTEN A TWO DIMENSIONAL ARRAY
  // A two-dimensional array (of size x by y) into a one-dimensional array of size x*y
  
  /*
   * Instead of this:
   *
  int **array4 = new int*[10];
  for(int i = 0; i<10;++i){
    array4[i] = new int[5];
  }

   * Do this 
  */
  int *array4 = new int[50];  // A 10x5 array flattened into a single array

  // Simple math can convert row and column index for a rectangular two-dimensional array into a single index for one-dimensional array
  
  /*
  int getSingleIndex(int row, int col, int numberOfColumnsInArray){
    return (row * numberOfColumnsInArray) + col;
  } 

  array4[getSingleIndex(9, 4, 5)] = 3;
  */

  // As we can pass a pointer to change the actual value of the underlying argument passed in, we can pass a pointer to a pointer to a function and use that pointer to change the value of the pointer it points to
  // However this is generally better done using reference to a pointer instead.

  delete[] array4;


  return 0;
}
