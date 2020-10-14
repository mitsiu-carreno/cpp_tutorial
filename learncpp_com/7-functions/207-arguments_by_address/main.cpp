#include <iostream>

void Foo(int *ptr){
  // Function Foo changes the value of the argument through pointer parameter ptr
  *ptr=6;
}

void PrintArray(int *array, int size){
  // Its always a good idea to ensure parameters passed by address are not null pointers before dereferencing them
  if(!array){
    return;
  }
  for(int i{0}; i < size; ++i){
    std::cout << array[i] << "\n"; 
  }
}

int main(){
  // Passing an argument by address involves passing the address of the argument variable rather than the argument varaible itself
  // Because the argument is an address, the function parameter must be a pointer
  // The function can dereference the pointer to access or change the value being pointed to
  //
  // Pros:
  //
  //
  // Cons:
  // When to use:
  // When not to use:

  int number {5};
  std::cout << "Pre: " << number << "\n";
  Foo(&number);
  std::cout << "Post: " << number << "\n";

  // Pass by address is typically used with pointers, which most often are used to point to built-in arrays
  int array[5] {1,2,3,4,5};   
  PrintArray(array, 5); // Array decay into pointers so NO & IS NEEDED

  return 0;
}
