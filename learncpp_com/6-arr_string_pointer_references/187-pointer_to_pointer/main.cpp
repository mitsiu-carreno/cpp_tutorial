#include <iostream>


int main(){
  // A normal pointer to an int is declared using a single astreisk
  int *ptr;   // pointer to an int, one asterisk

  // A pointer to a pointer to an int is declared using two asterisks
  int **ptrptr; // pointer to a pointer to an int, two asterisks

  // A pointer to a pointer works like a normal pointer - you can dereference it to retreive the value pointed to
  // And because that value is itself a pointer, you can dereference it again to get to the underlying value
  
  int value = 5;
  int *pntr = &value;

  std::cout << *pntr << std::endl;  // dereference pointer to int to get the int value

  int **pntrpntr = &pntr;
  std::cout << **pntrpntr << std::endl;  // first dereference to get pointer to int, second dereference to get int value

  // Note that you can not set a pointer to a pointer directly to a value
  // int **pntrpntr = &&value;  //NOT VALID
  // This is because the address of opperator (&) required an lvalue, but &value is an rvalue
  
  //However, a pointer to a pointer can be set to null
  
  int **nullptrptr = nullptr;   // Use 0 instead prior to C++11

  return 0;
}
