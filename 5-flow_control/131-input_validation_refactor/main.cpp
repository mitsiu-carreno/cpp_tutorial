#include <iostream>

bool validInput(){
  if(std::cin.fail()){
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    return false;
  }
  std::cout << "\n(just clean)\n";
  std::cin.ignore(32767, '\n');
  return true;
}

double getDouble(){
  double input;

  while(true){
    std::cout << "Enter a double number: ";
    std::cin >> input;
    if(validInput()){
      return input;
    }else{
      std::cout << "Number not allowed, try again\n\n";
    }
  }
}

char getOperator(){
  char op;
  while(true){
    std::cout << "Enter one of the following: +, -, *, /: ";
    std::cin >> op;

    if(op == '+' || op == '-' || op == '*' || op == '/'){
      validInput();
      return op;
    }else{
      std::cout << "Operator not allowed, try again\n\n";
    }
  }
}

void printResult(double x, double y, char op){
  switch(op){
    case '+':
      std::cout << x + y << std::endl;
      break;
    case '-':
      std::cout << x - y << std::endl;
      break;
    case '*':
      std::cout << x * y << std::endl;
      break;
    case '/':
      std::cout << static_cast<float>(x)/y << std::endl;
      break;
    default:
      std::cout << "Woops, idk? \n";
      break;
  }
}

int main(){
  double x;
  char op;
  double y;

  x = getDouble();
  op = getOperator();
  y = getDouble();
  printResult(x, y, op);

  return 0;
}