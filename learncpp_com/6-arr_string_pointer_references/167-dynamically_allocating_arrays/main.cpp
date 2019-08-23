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
  int length;
  length = getInput(); 

  int *arr = new int[length]; // use array new. Length is NOT a constant

  arr[0] = 5;   // set element 0 to 5

  std::cout << arr[0] << std::endl;

  delete[] arr;   // use array delete to deallocate array

  arr = nullptr;

  return 0;
}