// This merchant has gone blind from greed. He can no longer see what kind of fruit he is selling.
// He still knows how to deal with the farmer though, passing on the customer request to the farmer, 
// while adding a steep profit margin for all fruits

#include "village.hpp"
// Thats why fruit.hpp is not included (but is forward declared on village.hpp)

namespace blind_but_greedy_merchant{
  bool sell_fruit(Fruit fruit, float money){
    
    if( !farmer::is_fruit_for_sale( fruit ) ){
      return false;
    }

    float inflated_coast = farmer::get_cost_of_fruit( fruit ) * 3;
    
    if(money >= inflated_coast){
      return true;
    }

    return false;
  }
}
