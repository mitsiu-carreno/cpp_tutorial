
#include <iostream>

int main(){

  std::cout << "Unlike references to non-const values, which can only be initializated with non-const l-values,\n";
  std::cout << "references to const values can be initialized with\n"; 
  std::cout << "non-const l-value, const l-value and r-values\n\n";



  int value = 6;
  const int &ref = value;     // ok, value is a non-const l-value

  const int constValue = 7;
  const int &constRef = constValue;   // ok, constValue is a const l-value

  const int &rValRef = 8;     // ok, 8 is a r-value  

  std::cout << "Much like a pointer to const value, a reference to a const value can reference to a non-const variable\n";
  std::cout << "When accessed through a reference to a const value, the value is considered const\n";
  std::cout << "even if the original value is not\n\n";

  int var = 5;
  const int &myConstRef = var;  // create const reference to variable value 
  value = 6;  // ok value is non-const
  //myConstRef = 7; //illegal -- ref is const

  return 0;
}