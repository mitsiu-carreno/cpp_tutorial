#include <fruit.hpp>

// This farmer only grows apples and oranges, so he never has bananas for sale
namespace farmer{
  bool is_fruit_for_sale(Fruit fruit){
    switch( fruit ){
      case Fruit::APPLE:
      case Fruit::ORANGE:
        return true;
      case Fruit::BANANA:
        return false;
    }
    return false;
  }

  float get_cost_of_fruit(Fruit fruit){
    switch( fruit ){
      case Fruit::APPLE:
        return 1.00f;
      case Fruit::ORANGE:
        return 2.50f;
      case Fruit::BANANA:
        return 200.0f;
    }
    return 0.0f;
  }
}
