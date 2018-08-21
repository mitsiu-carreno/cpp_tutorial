#include <iostream>
#include "../headers/substract.h"
#include "../headers/add.h"

int main(){
  
  std::cout << "3+4 = " << basicMath::add(3, 4) << "\n";
  std::cout << "4-6 = " << basicMath::substract(4, 6) << "\n";

  return 0;
}
