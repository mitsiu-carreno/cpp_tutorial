#include <iostream>

enum Color{
  COLOR_RED, 
  COLOR_GREEN,
  COLOR_BLUE,
  COLOR_GRAY,
  COLOR_BLACK,
};

void printColor(Color color){
  if(color == COLOR_RED){
    std::cout << "Color red\n";
  }else if(color == COLOR_GREEN){
    std::cout << "Color green\n";
  }else if(color == COLOR_BLUE){
    std::cout << "Color blue\n";
  }else if(color == COLOR_GRAY){
    std::cout << "Color gray\n";
  }else if(color == COLOR_BLACK){
    std::cout << "Color black";
  }else{
    std::cout << "Undefined color\n";
  }
}

int main(){

  int newEnumNumber;
  std::cout << "Ingresa el valor del nuevo neum: ";
  std::cin >> newEnumNumber;

  Color newColor = static_cast<Color>(newEnumNumber);
  
  std::cout << "El nuevo enum newColor " << newColor << "\n";

  printColor(COLOR_RED);
  Color test = COLOR_GRAY;
  printColor(test);
  return 0;
}
