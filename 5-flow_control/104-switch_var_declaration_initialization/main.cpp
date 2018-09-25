#include <iostream>

int main(){

  // You can declare BUT NOT INITIALIZE variables inside the switch, both before and after the case laberls

  switch(1){
    int a;  //OKAY, declaration is allowed before the case labels
    int b = 5;    //ILLEGAL, initialization is not allowed before the case labels

    case 1:
      int y;      // OK, declaration is allowed within a case
      y = 4;      // OK, this is an assignment
      break;

    case 2:
      y = 5;      // OK, y was declared above, so we can use it here too
      break;
  }

  return 0;
}
