#include <iostream>
#include <string>

int main(){
  std::string a("44");
  std::string b("05");

  std::cout << a + b << "\n"; // a and b will be appended not added

  a+= " volts";

  std::cout << a << "\n";

  return 0;
}
