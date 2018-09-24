#include <iostream> 

struct Fraction{
  int numerator;
  int denominator;
};

Fraction setFraction (){
  Fraction newFraction;
  std::cout << "Enter the numerator: ";
  std::cin >> newFraction.numerator;

  std::cout << "Enter the denominator :";
  std::cin >> newFraction.denominator;
  return newFraction;
}

void multiply(Fraction frac1, Fraction frac2){
  int totalNumerator = frac1.numerator * frac2.numerator;
  int totalDenominator = frac1.denominator * frac2.denominator;

  std::cout << frac1.numerator << "/" << frac1.denominator << " * " << frac2.numerator << "/" << frac2.denominator << " = " << totalNumerator << "/" << totalDenominator << " == " << (totalNumerator / static_cast<double>(totalDenominator)) << "\n";
}

int main(){
  
  std::cout << "Lets create our first fraction\n";
  Fraction fraction1 = setFraction();

  std::cout << "Lets create our second fraction\n";
  Fraction fraction2 = setFraction();
  
  multiply(fraction1, fraction2);

  return 0;
}
