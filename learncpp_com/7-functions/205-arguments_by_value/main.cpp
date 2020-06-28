#include <iostream>

void Function(int a){
  // Because a copy of the argument is passed the original argument can not be modified
  a = 5;
  
}

int main(){
  
  // By default, non-pointer arguments are passed by value
  // which is copied into the value of the corresponding function parameterA
  //
  // Pros:
  // Everything can be passed by value (variables, expressions, literals, structs, enums classes)
  // Arguments are never changed by the function being called (prevents side effects)
  //
  // Cons:
  // Copying struct and classes can incur a significant performance penalty 
  //
  // When to use:
  // When passing fundamental data types and enumerators, and the function does not need to change the argument
  //
  // When not to use:
  // When passing struct and classes (including std::array and std::vector)
  
  Function(3);

  int a = 4;
  Function(a);
  Function(a-1);
  
  std::cout << a << "\n";

  return 0;
}
