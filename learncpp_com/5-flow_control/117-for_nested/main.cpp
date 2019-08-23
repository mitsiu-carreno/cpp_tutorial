#include <iostream>

int main(){

  for(char ch='a'; ch <='e'; ++ch){
    std::cout << ch;
    
    for(int i=0; i<=3; ++i)   // For loops just like ifs can use implicit blocks
      std::cout << i;

    std::cout << "\n";
  }

  return 0;
}
