#include <iostream>

int main(){

  int count = 1;

  while(count <= 5){
    
    int temp = 1;
    while(temp <= count){
      std::cout << temp << " ";
      ++temp;
    }
    std::cout << std::endl;

    ++count;
  }

  return 0;
}
