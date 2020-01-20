#include <iostream>
#include <vector>


int main(){

  // std::vector has an special implementation for std::vector of type bool that will compact 8 booleans into a byte!
  // This happens behind the scenes, and doesn't change how you use the std::vector

  std::vector<bool> myVec {true, false, false, true, true};

  std::cout << "The length is: " << myVec.size() << '\n';

  std::cout << "The space in memory is: " << sizeof(myVec) << '\n';

  for(auto const &elem : myVec){
    std::cout << elem << ' ';
  }
  std::cout << std::endl;

  return 0;
}
