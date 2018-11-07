#include <iostream>

bool validInput(){
  if(std::cin.fail())
  {
    std::cin.clear(); // reset any error
    std::cin.ignore(32767, '\n');
    return false;
  }
  std::cin.ignore(32767, '\n');
  return true;
}

int askPosition(){
  while(true)
  {
    int pos;
    std::cout << "Enter a number between 0-8: ";
    std::cin >> pos;
    if(validInput() && pos >= 0 && pos <=8){
      return pos;
    }else{
      std::cout << "Sorry not a valid number, try again\n";
    }
  }
  
}

int main()
{
  
  int arr[] = {4, 6, 7, 3, 8, 2, 1, 9, 5};
  int numElements = sizeof(arr) / sizeof(arr[0]);
  for(int count = 0; count < numElements; ++count)
  {
    std::cout << "arr[" << count << "] = " << arr[count] << "\n"; 
  }

  std::cout << "\n";

  int pos = askPosition();
  std::cout << "arr[" << pos << "] = " << arr[pos] << "\n\n";

  return 0;
}