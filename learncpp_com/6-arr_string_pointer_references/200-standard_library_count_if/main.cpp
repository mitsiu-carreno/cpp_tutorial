#include <iostream>
#include <array>
#include <algorithm>

bool ContainsA(std::string_view str){
  return (str.find("a") != std::string_view::npos);
}

int main(){
  
  std::array<std::string, 4> names{"Mariana", "Mitsiu", "Marlette", "Maria"};
  
  auto a_found {std::count_if(names.begin(), names.end(), ContainsA)};
  //auto test {std::count(names.begin(), names.end(), names)};

  std::cout << a_found << " a's where found\n";
  
  return 0;
}
