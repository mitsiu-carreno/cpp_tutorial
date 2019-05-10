#include <vector>
#include <iostream>

int main()
{
  std::cout << "For-each loops work with many kinds of list-like structures such as \n";
  std::cout << "Vectors\n";
  std::cout << "Fixed arrays\n";
  std::cout << "Linked lists\n";
  std::cout << "Trees\n";
  std::cout << "Maps\n\n";

  std::vector<int> fibonacci = {1,1,2,3,5,8,13,21,34,55,89};  // Note uso of std::vector rather than a fixed array
  for(const auto elem : fibonacci){
    std::cout << elem << " ";
  }

  std::cout << std::endl;
  return 0;
}