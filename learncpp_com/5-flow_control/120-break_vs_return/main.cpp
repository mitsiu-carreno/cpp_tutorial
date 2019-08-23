#include <iostream>
  
int breakOrReturn(){
  
  // infinite loop
  while(true){
    char input;
    std::cout << "Enter 'b' to break, or 'r' to return: ";
    std::cin >> input;

    if(input == 'b')
      break;

    if(input == 'r')
      return 1;

  }
  std::cout << "Out of the loop!\n";

  return 0;
}

int main(){
  int returnedValue = breakOrReturn();
  std::cout << "The function breakOrReturn returned (0 - break // 1 - return): " << returnedValue << std::endl;
  

  return 0;
}
