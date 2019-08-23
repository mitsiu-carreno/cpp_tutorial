#include <iostream>

int main(){
  std::cout << "Normal r-values have expression scope, meaning the values are destroyed at the end of the expression\n";
  std::cout << "in which they are created\n\n";

  std::cout << 2+3 << "2+3 evaluates to r-value 5, which is destroyed at the end of the statement\n\n";

  std::cout << "However when a reference to a const value is initializated with an r-value, the lifetime of the\n";
  std::cout << "r-value is extended to match the lifetime of the reference\n";

  const int &ref = 2+3; //normally the result of 2+3 has expression scope and its destroyed at the end of this statement
                        // but because the result is now bound to a reference to a const value...
  std::cout << ref << std::endl;     // we can use it here

  return 0;
} // and the lifetime of the r-value is extended to here, where the const reference dies