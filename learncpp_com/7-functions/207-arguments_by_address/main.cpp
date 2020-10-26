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
  tmp_ptr = nullptr;  // use 0 instead if not C++11
}

int main(){
  // Passing an argument by address involves passing the address of the argument variable rather than the argument varaible itself
  // Because the argument is an address, the function parameter must be a pointer
  // The function can dereference the pointer to access or change the value being pointed to
  //
  // Pros:
  // -Passed by address allows a function to change the value of the argument, which is sometimes useful. Otherwise, const can be used
  // to guarantee the function wont change the argument (However if you want to do this with a non-pointer, you should use 
  // pass by reference instead)
  // -Because a copy of the argument is not made, it is fast, even when used with large structs or classes
  // -We can return multiple values from a function via out parameters
  //
  //
  // Cons:
  // -Becase literals (excepting C-style string literals) and expressions DO NOT have addresses, pointer arguments must be normal variables
  // -All values must be checked to see whether they are null. Trying to dereference a null value will result in a crash. It is easy to
  // forget to do this.
  // -Because dereferencing a pointer is slower than accessing a value directly, accessing arguments passed by address is slower than 
  // accessing arguments passed by value
  //
  // When to use:
  // -When passing built-in arrays (if you're okay with the fact that they'll decay into pointer)
  // -When passing a pointer and nullptr is a valid argument logically
  //
  // When not to use:
  // -When passing a pointer and nullptr is not a valid argument logically (use pass by reference)
  // -When passing structs or classes (use pass by reference)
  // -When passing fundamental types (use pass by value)

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
  
  // now AddressByReference  did indeed change the value of ptr from &five to nullptr
  
  // C++ really passes everything by value! The properties of pass by address (and reference) come solely from the fact that we can 
  // dereference teh passed address to change the argument, which we can NOT do with a normal value parameter

  // Pass by address makes modifiable parameters explicit
  

  return 0;
}
