#ifndef VILLAGE_H
#define VILLAGE_H

// Forward declared here
enum class Fruit;

namespace farmer {
  bool is_fruit_for_sale(Fruit fruit);
  
  float get_cost_of_fruit(Fruit fruit);
}

namespace blind_but_greedy_merchant{
  bool sell_fruit(Fruit fruit, float money);
}


namespace peasant{
  // ATTENTION HERE THIS IS INTERESTING
  inline bool buy_fruit(Fruit fruit, float money){
    return blind_but_greedy_merchant::sell_fruit(fruit, money);
  }
}

#endif
