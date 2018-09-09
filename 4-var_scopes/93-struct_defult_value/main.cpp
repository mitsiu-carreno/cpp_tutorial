#include <iostream>

struct Rectangle{
  double length = 0.0;
  double width = 0.0;
};

void printRectangle(Rectangle rectangle){
  std::cout << "Length: " << rectangle.length << " width: " << rectangle.width << "\n";
}

int main(){
  // Because the struct has default values, C++11 can NOT initialize myRectangle by list until C++14
  // Rectangle otherRectangle = {2.0, 2.0};
  Rectangle myRectangle;
  printRectangle(myRectangle);
  
  myRectangle.length = 2.0;
  printRectangle(myRectangle);

  return 0;
}
