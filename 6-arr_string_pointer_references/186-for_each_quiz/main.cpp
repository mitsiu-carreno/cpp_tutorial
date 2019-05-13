#include <iostream>
#include <string>

bool validInput(){
  bool valid = true;
  if(std::cin.fail()){
    std::cin.clear();
    valid = false;
  }
  std::cin.ignore(32767, '\n');
  return valid;
}

std::string getLookForName(){
  std::string newName;
  while(true){
    std::cout << "Enter a name: ";
    std::cin >> newName;
    validInput();
    return newName;  
  }
}

int main(){
  std::string names[8] = {"Alex", "Betty", "Carloine", "Dave", "Emily", "Fred", "Greg", "Holly"};

  std::string lookFor = getLookForName();

  bool found = false;
  for(const auto name : names){
    if(name == lookFor){
      found = true;
    }
  }
  if(found){
    std::cout << lookFor << " was found.\n";
  }else{
    std::cout << lookFor << " was not found.\n";
  }
  return 0;
}