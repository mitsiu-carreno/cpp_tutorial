#include <iostream>
#include <iterator>

//What’s wrong with each of these snippets, and how would you fix it?

void printArray(int array[], int length);

int main(){

  /*
   * a)
      int array[]{ 0, 1, 2, 3 };
      for (std::size_t count{ 0 }; count <= std::size(array); ++count)
      {
        std::cout << array[count] << ' ';
      }
      std::cout << '\n';

   * Problem:
   * Off-by-one error in the for loop must be count < std::size(array)
   */
  int array[]{0, 1, 2, 3};
  for(std::size_t count {0}; count < std::size(array); ++count){
    std::cout << array[count] << ' ';
  }
  std::cout << '\n';

  
  /*
   * b)

      int x{ 5 };
      int y{ 7 };

      const int* ptr{ &x };
      std::cout << *ptr << '\n';
      *ptr = 6;
      std::cout << *ptr << '\n';
      ptr = &y
      std::cout << *ptr << '\n';

   * Problem:
   * ptr is a pointer to a const int, you can't assign the value 6 to it 
   */
  int x{5};
  int y{7};

  const int* ptr {&x};
  std::cout << *ptr << '\n';
  // *ptr = 6;   // INVALID the value cannot be changed!
  std::cout << *ptr << '\n';
  ptr = &y; 
  std::cout << *ptr << '\n';

  
  /*
   * c)

      void printArray(int array[])
      {
        for (int element : array)
        {
          std::cout << element << ' ';
        }
      }

      int main()
      { 
        int array[]{ 9, 7, 5, 3, 1 };

        printArray(array);

        std::cout << '\n';

        return 0;
      }
   * Problem:
   * array decays into a pointer, so range-based for doesn't works
   * solution 1 send a second parameter with the size of the array and use a simple for
   * solution 2 use std::array
   */
  int array2[]{9,7,5,3,1};
  int array2Size = sizeof(array2) / sizeof(array2[0]);
  printArray(array2, array2Size);
  std::cout << '\n'; 
  
    
  /*
   * e)
      double d{ 5.5 };
      int* ptr{ &d };
      std::cout << ptr << '\n';
   * Problem:
   * Can't make an int pointer point to a non-int variable.
   */
  double d{5.5};
  double *ptr2 {&d};
  std::cout << ptr2 << '\n';

  return 0;
}

void printArray(int array[], int length){
  for(int i {0}; i<length; ++i){
    std::cout << array[i] << ' ';
  }
  std::cout << '\n';
}


/*
 * d)   
    int* allocateArray(const int length)
    {
      int temp[length]{};
      return temp;
    }
 * Problem:
 * temp is a fixed array, so its length must be known at compile time also
 * temp will go out of scope at the end of the function, so the thats a dangling pointer
 */
int* allocateArray(const int length){
  //int temp[length]{};
  int* temp = new int[length];
  delete[] temp;  // this is supposed to be executed at the caller function
  return temp;
}
