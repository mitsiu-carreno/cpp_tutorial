// source: https://stackoverflow.com/questions/19074084/forward-declaring-enum-class-not-working

#include <iostream>
#include "village.hpp"
#include "fruit.hpp"

int main(){

  std::cout << peasant::buy_fruit(Fruit::BANANA, 25.0f) << std::endl;

  return 0;
}
