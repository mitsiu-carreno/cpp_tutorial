#include <iostream>

/*
 * Pretend you’re writing a game where the player can hold 3 types of items: 
 * health potions, torches, and arrows. Create an enum to identify the different types of items, 
 * and a fixed array to store the number of each item the player is carrying 
 * (use built-in fixed arrays, not std::array). The player should start with 2 health potions,
 * 5 torches, and 10 arrows. Write a function called countTotalItems() that returns how many 
 * items the player has in total. Have your main() function print the output of countTotalItems().
 */

 enum items {
  HEALTH_POISON,
  TORCHES,
  ARROWS,  
  ITEMS_LENGTH
};

int countTotalItems(int playerItems[items::ITEMS_LENGTH]){
  int total {0};
  for(int i {0}; i < items::ITEMS_LENGTH; ++i){
    total += playerItems[i];
  }
  return total;
}

int main(){
  int playerItems[items::ITEMS_LENGTH] {2,5,10};
  
  std::cout << "The player has " << countTotalItems(playerItems) << " items in total" << '\n';
  return 0;  
}
