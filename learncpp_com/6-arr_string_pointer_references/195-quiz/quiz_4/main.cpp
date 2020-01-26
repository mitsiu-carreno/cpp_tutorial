#include <iostream>

//Write a function to print a C-style string character by character. 
//Use a pointer to step through each character of the string and print that character. 
//Stop when you hit the null terminator. 
//Write a main function that tests the function with the string literal “Hello, world!”.

int main(){

  char cStyleString[] = "Hello kitty!";

  char *ptr = cStyleString;

  // v1
  std::cout << "v1\n"; 
  while(*ptr != '\0'){
    std::cout << *ptr++ << " ";
  }
  std::cout << std::endl;


  // v2
  // Reset ptr 
  ptr = cStyleString;
  std::cout << "v2\n"; 
  while(*ptr != '\0'){
    std::cout << *ptr << " ";
    ++ptr;
  }
  std::cout << std::endl;

  // v3
  // Reset ptr 
  ptr = cStyleString;
  std::cout << "v3\n";
  for(;*ptr != '\0'; ++ptr){
    std::cout << *ptr << " ";
  } 
  std::cout << std::endl;

  return 0;
}
