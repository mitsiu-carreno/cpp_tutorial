#include <iostream>

int main(){

  // Break statements
  std::cout << "---Breaking a switch---\n";
  switch(3){
    case 1:
      std::cout << "uno\n";
      break;

    case 2:
      std::cout << "dos\n";
      break;

    case 3:
      std::cout << "tres\n";
      break;
  }

  std::cout << "\n---Breaking loops---\n";
  std::cout << "Ingresa 10 números\n";
  for(int count = 0; count<10; ++count){
    int input;
    std::cout << "Ingresa un numero (o 0 para cancelar): ";
    std::cin >> input;

    if(input == 0)
      break;

  }

  std::cout << "\n---Breaking infinite loops---\n";

  while(true){
    int input;
    std::cout << "0 to stop, anything else to continue: ";
    std::cin >> input;
    if(input == 0)
      break;
  }
  std::cout << "Now we are out\n";

  return 0;
}
