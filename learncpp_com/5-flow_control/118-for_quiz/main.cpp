#include <iostream>

void sumTo(int limit){
  int total=0;
  for(int loops=1; loops<=limit; ++loops){
    if(loops != limit)
      std::cout << loops << " + ";
    else
      std::cout << loops;

    total +=loops;
  }

  std::cout << " = " << total << "\n";
}

int main(){
  int input;

  std::cout << "---Quiz 1---\n";
  
  for(int count=0; count<=20; ++count)
    std::cout << count << " ";

  std::cout << "\n---Quiz 2---\n";
  std::cout << "Ingresa un número entero positivo: ";
  std::cin >> input;

  sumTo(input);

  return 0;
}
