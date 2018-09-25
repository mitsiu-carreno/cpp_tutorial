#include <iostream>

int main(){
  
  int x{3};

  // It is possible to omit the statement part in an if statement
  if(x != 3)
    ; // the semicolor acts as a null statement
  std::cout << "The line above did nothing but was executed as the condition was evaluated to true, for more details check code ;)\n";


  return 0;
}
