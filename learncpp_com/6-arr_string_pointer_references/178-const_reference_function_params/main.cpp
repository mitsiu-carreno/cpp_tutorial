#include <iostream>

void printIt(const int &var){
  // var = 7;   // not allowed, var is const
  std::cout << "the value is " << var << std::endl;
}

int main(){

  std::cout << "References used as function parameters can also be const\n";
  std::cout << "This allows us to access the argument without making a copy of it\n";
  std::cout << "While guaranteeing that the function will not change the value being referenced\n";

  int a  = 1;
  printIt(a);   // non-const l-value

  const int b = 2;
  printIt(b);   // const l-value

  printIt(3);   // r-value

  printIt(2+2); // expression r-value

  return 0;
}