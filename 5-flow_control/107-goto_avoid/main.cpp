#include <iostream>
#include <cmath>

int main(){

  double x;
  tryAgain:   // This is a statement label

  std::cout << "---AVOID GOTO STATEMENTS!---\n";
  std::cout << "Enter a non-negative number (Don't!, be a rebel): ";
  std::cin >> x;

  if(x < 0.0)
    // Please AVOID GOTO STATEMENTS!!!
    goto tryAgain;

  std::cout << "The number you entered is " << x << " and it sqrt is " << sqrt(x) << std::endl;

  return 0;
}
