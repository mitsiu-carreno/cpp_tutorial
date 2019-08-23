#include <iostream>

enum class Colors{
  black,
  white,
  red,
  green,
  blue
};

void foo(){
  // This is just a foo function :)
}

void printColor(Colors color){

  // SWITCH EXECUTION AND FALL-THROUGH
  // When a case is matched, execution begins with the first statement following the label and continues until:
  // 1) The end of the switch block is reached
  // 2) A return statement occurs
  // 3) A goto statement occurs
  // 4) A break statement occurs
  // 5) Something else interrupts the normal flow (exit(), an exception occurs...)


  switch(color){
    case Colors::black:   // Case label needs to be evaluated against a constant expression (e.g. 5)
      std::cout << "Black\n";
      break;

    case Colors::white:
      std::cout << "White\n";
      break;

    case Colors::red:         // Match! Execution begins at the next statement
      std::cout << "Red\n";   // Execution begins here
      foo();                  // You can execute multiple statements (no implicit block)
      break;                  // Break terminates the switch statement

    case Colors::green:
      std::cout << "Green\n";
      break;

    case Colors::blue:
      std::cout << "Blue\n";
      break;

    default:              // The default label is optional and only executed if none of the cases match the switch expression
      std::cout << "Unknown color ???\n";
      break;
  }
  // Execution resumes here
}

int main(){
  char c;

  Colors newColor = Colors::red;

  printColor(newColor);

  std::cout << "Ingresa un caracter (0-9||a-z ):";
  std::cin >> c;

  // It is possible to have multiple case labels refer to the same statements
  switch(c){
    case '0':   // if c is 0
    case '1':   // if c is 1
    case '2':   // if c is 2
    case '3':   // if c is 3
    case '4':   // if c is 4
    case '5':   // if c is 5
    case '6':   // if c is 6
    case '7':   // if c is 7
    case '8':   // if c is 8
    case '9':   // if c is 9
      std::cout << "El caracter es un número!\n";
      break;
    default:
      std::cout << "El caracter es una letra\n";
  }

  return 0;
}
