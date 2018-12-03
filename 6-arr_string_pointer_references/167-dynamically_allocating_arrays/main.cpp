#include <iostream>

bool validInput()
{
  if(std::cin.fail()){
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    return false;
  }
  std::cin.ignore(32767, '\n');
  return true;
}

int getInput()
{
  int input;
  while(true){
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    if(validInput() && input > 0){
      return input;
    }else{
      std::cout << "Sorry that doesn't look like a positive integer\n\n";
    }
  }
 
}

int main()
{
  int input;
  input = getInput(); 

  std::cout << "Input is:" << input ; 

  return 0;
}