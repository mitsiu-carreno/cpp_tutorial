#include <iostream>

int main(){

  //Even though it is advised to avoi break and continue as it modifies the path of execution
  int count {0};
  bool keepLooping = true;
  while(keepLooping){
    char ch;
    std::cout << "Enter 'e' to exit, anything else to continue: ";
    std::cin >> ch;

    if(ch == 'e'){
      keepLooping= false;
    }
    else{
      ++count;
      std::cout << "We've iterated over " << count << " times\n";
    }
  }

  std::cout << "\n Refactoring using break statement\n";

  // Used carefully can help avoid nesting code (L16) and avoid a boolean variable
  count = 0;
  while(true){
    char ch;
    std::cout << "Enter 'e' to exit, anything else to continue: ";
    std::cin >> ch;

    if(ch == 'e')
      break;

    ++count;
    std::cout << "We've iterated over " << count << " times\n";
  }
  
  return 0;
}
