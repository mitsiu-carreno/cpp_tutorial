#include <iostream>

void PassByReference(int &a){
  a = 6; 
}

void ReturnMultiVar(int base, int &double_result, int &triple_result){
  double_result = base *2;
  triple_result = base *3;
}

void PassByConstReference(const int &a){
  std::cout << "This reference can't be modified " << a << "\n";
}

void PassReferenceToPointer(int *&ptr){
  std::cout << "Address: " << &ptr << " value (of ptr): " <<  ptr << " value (of var): " <<  *ptr << "\n";
}

void PassReferenceToPointerArray(int (&arr)[5]){
  std::cout << *arr << arr << "\n";
  int length = sizeof(arr) / sizeof(*arr);  // array size/ int size
  // int length = sizeof(arr) / sizeof(arr[0])  // other way
  for(int i{0}; i<length; ++i){
    std::cout << arr[i] << "\n";
  }
}

int main(){
  
  // Pros:
  // References allow a function to change the value of the argument. Otherwise const must be used
  // Because a copy is not made, pass by reference is fast 
  // References can be used to return multiple values (via out parameters)
  // References must be initialized, so theres no worry about null values
  //
  // Cons:
  // Because a non-const reference cannot be initialized with a const l-value or an r-value (e.g. literal or an expression), arguments to non-const reference parameters must be normal variables
  // It might be hard to tell whether an argument passed by non-const reference is meant to be input, output or both (naming might solve this)
  // Its impossible from the function caller to tell if the argument may change. An argument passed by value and by reference looks the same (can lead to situations where the programmer does not realize a function will change the value of the argument) (again, naming might solve this) 
  //
  // When to use:
  // When passing structs or classes (use const if read-only)
  // When you need a function to modify an argument
  // When you need access to the type information of a fixed array 
  //
  // When not to use:
  // When passing fundamental types that don't need to be modified (use pass by value)

  int val = 5;
  PassByReference(val);
  std::cout << val << "\n";

  // Returning multiple values via out parameters
  int double_val;
  int triple_val;
  ReturnMultiVar(val, double_val, triple_val);
  std::cout << val << " doubled: " << double_val << " triple: " << triple_val << "\n";


  // Pass by const reference
  PassByConstReference(val);
  // When passing an argument by reference, always use a const reference unless you need to change 
  // the value of the argument
  
  //PassByReference(val +1); Illegal, non-const references can't bind to r-values
  

  // References to pointers
  int *ptr = &val;
  PassReferenceToPointer(ptr);

  int arr[5]{55,12,117,343,413};
  PassReferenceToPointerArray(arr);

  return 0;
}
