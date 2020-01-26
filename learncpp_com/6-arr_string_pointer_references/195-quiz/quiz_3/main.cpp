#include <iostream>

//Write your own function to swap the value of two integer variables. 
//Write a main() function to test it.
//Hint: Use reference parameters

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

int main(){

  int a = 10;
  int b = 80;

  std::cout << "a: " << a << " b: " << b << std::endl;
  
  swap(a, b);

  std::cout << "a: " << a << " b: " << b << std::endl;
  
  return 0;
}
