#include <iostream>
#include <array>

enum Items {
  HEALTH_POTIONS,
  TORCHES,
  ARROWS,
  TOTAL_ITEMS
};

int countTotalItems(std::array<int, Items::TOTAL_ITEMS> playerItems){
  int total {0};

  for(auto items : playerItems){
    total += items;
  }

  return total;
}

int countArrows(std::array<int, Items::TOTAL_ITEMS> playerItems){
  return playerItems[Items::ARROWS];
}

int main(){
  // Pretend you’re writing a game where the player can hold 3 types of items: 
  // health potions, torches, and arrows. 
  // Create an enum to identify the different types of items, and 
  // an std::array to store the number of each item the player is carrying 
  // (The enumerators are used as indexes of the array). 
  // The player should start with 2 health potions, 5 torches, and 10 arrows. 
  // Write a function called countTotalItems() that returns how many items the player has in total. 
  // Have your main() function print the output of countTotalItems() as well as the number of torches.
  
  std::array<int, Items::TOTAL_ITEMS> playerItems {2, 5, 10};

  std::cout << "The player has " << countTotalItems(playerItems) << " items in total\n";
  std::cout << "Of which " << countArrows(playerItems) << " are arrows\n";

  return 0;
}
