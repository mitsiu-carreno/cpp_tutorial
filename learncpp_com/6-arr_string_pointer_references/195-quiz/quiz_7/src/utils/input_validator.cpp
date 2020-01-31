#include <iostream>

namespace inputvalidator{

  bool isValidInput(){
    bool valid = true;
    if(std::cin.fail()){
      valid = false;
      std::cin.clear();
    }
    std::cin.ignore(32767, '\n');
    return valid;
  }

}
