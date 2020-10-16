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

void PrintConstArray(const int *array, int size){
  // This ensures we dont modify the array argument passed in, not even by accident 
  if(!array){
    return;
  }
  for(int i{0}; i<size; ++i){
    std::cout << array[i] << "\n";
  }
}

void SetToNull(int *tmp_ptr){
  // we are making tmp_ptr point at something else, not changing the value that tmp_ptr points to
  tmp_ptr = nullptr;  // use 0 instead if not C++11
}

void AddressByReference(int *&tmp_ptr){
  std::cout << *tmp_ptr << "\n";
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

  // Passing by const address
  PrintConstArray(array, 5);

  // Addresses are actually passed by value (the address it points to) is copied from the argument to the function's parameter.
  int five {5};
  int *ptr {&five}; 

  // tmp_ptr will receive a copy of ptr
  SetToNull(ptr);

  // ptr is still set to address of five!
  if(ptr){
    std::cout << *ptr << "\n"; 
  }else{
    std::cout << "ptr is null\n";
  }

  // tmp_ptr receivesa copy of the address that ptr is holding. Even though we change tmp_ptr to point at something else (nullptr), 
  // this does not change the value that ptr points to  
  
  // If the function parameter is assigned a different address, that WILL NOT impact the argument, since the function parameter is a copy, 
  // and changing the copy wont impact the original. After changing the function parameter's address, the function parameter and the argument 
  // WILL POINT TO DIFFERENT VALUES, so dereferencing the parameter and changing the value will no longer affect the value pointed to by the argument

  // Passing addresses by reference
  // What if we want to change the address an argument points to from within the function?
  // You can simply pass the ADDRESS BY REFERENCE
  AddressByReference(ptr);
  

  return 0;
}
