#include <iostream>

double getDouble(){
  double input;
  while(true){
    std::cout << "Enter a double value: ";
    std::cin >> input;

    if(std::cin.fail()){              // Has the previous extraction failed?
      std::cin.clear();               // Put back normal mode
      std::cin.ignore(32767, '\n');   // remove bad input
      std::cout << "Failed\n";
    }else{
      std::cin.ignore(32767, '\n');   // Remove bad input (e.g 123e)
      return input;
    }
  }
  // return input; RETURNED IN LOOP
}

char getOperator(){
  char oper;
  while(true){
    std::cout << "Enter one of the following: + - * /: ";
    std::cin >> oper;

    std::cin.ignore(32767, '\n');
    // Chars can accept any single input character, so no need to check for invalid extraction here (std::cin.fail())
    if(oper == '+' || oper == '-' || oper == '*' || oper == '/'){
      break;
    }else{
      std::cout << "Input incorrect, please try again :v\n\n";
    }

  }
  
  return oper;
}

void printResult(int x, char oper, int y){
  switch(oper){
    case('+'):
      std::cout << x << " + " << y << "= " << x+y << std::endl;
      break;
    case('-'):
      std::cout << x << " - " << y << "= " << x-y << std::endl;
      break;
    case('*'):
      std::cout << x << " * " << y << "= " << x*y << std::endl;
      break;
    case('/'):
      std::cout << x << " / " << y << "= " << static_cast<float>(x)/y << std::endl;
      break;
    default:
      std::cout << "Couldn't calculate value :/ \n";
      break;
  }
}

int main(){
  double x;
  double y;
  char oper;

  x = getDouble();
  oper = getOperator();
  y = getDouble();
  printResult(x, oper, y);

  return 0;
}