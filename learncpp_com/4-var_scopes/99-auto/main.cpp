#include <iostream>

// Trailling return type syntax type // Auto can be used to forward declare functions
// double add(double a, double b);
auto add(double a, double b) -> double;

double add (double a, double b){
  return a + b;
}


int main(){

  // Starting with C++11 auto is used instead of the variable type to tell the compiler to infer the variable's type from the initializer type TYPE INFERENCE
  auto d = 5.0; // 5.0 is a double literal so d will be double type
  auto c = "c";

  auto i = 2 + 3; // 2 + 3 evaluates to integer so i will be int
  auto d2 = 2 + 3.0;

  auto result = add(d, d2);

// Auto even works with return values from functions
  std::cout << "Double type:" << d << " char type:" << c << " int type:" << i << " double type:" << d2 << " double type:" << result << std::endl;

  return 0;
}
