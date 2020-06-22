#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <string_view>

bool ContainsAna(std::string_view str){
  // std::string_view::find returns std::string_view::npos if it doesn't find
  // the substring, otherwise it returns the index where the substring occurs in str 
  return (str.find("ana") != std::string_view::npos);
}

int main(){
  
  // Sometimes we want to check if the value in a container matches 
  // certain conditions (string that contains certain substring) 
  // rather than an exact value
  
  // The std::find_if works similar to std::find but instead of 
  // passing in a value to search for, we pass a CALLABLE OBJECT
  // such as function pointer (or lambda)
  // std::find_if will call this function for every element until 
  // a matching element is found (or no more elements remain)
  
  std::array<std::string, 4> array {"Mariana", "Mitsiu", "Marlette", "Maria"};

  // Scan our array to see if any elements contains "ana" substring
  auto found {std::find_if(array.begin(), array.end(), ContainsAna)};

  if(found == array.end()){
    std::cout << "Not found\n";
  }else{
    std::cout << "Found substring ana in " << *found << "\n";
  }

  return 0;
}
