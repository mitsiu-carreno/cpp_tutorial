#include <iostream>

namespace utils{

  bool IsInputValid(){
    bool valid = true;
    if(std::cin.fail()){
      valid = false;
      std::cin.clear();
    }
    std::cin.ignore(32767, '\n');
    return valid;
  }

}
