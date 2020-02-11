#include <iostream>
#include <array>

enum class Items{
  HEALTH_POTION,
  TORCH,
  ARROW,
  TOTAL_ITEMS,
};

// This had to be constant because non-constant on using (L16) fails
const Items totalItems = Items::TOTAL_ITEMS;  
using inventory_type = std::array<int, static_cast<int>(totalItems)>;

int countTotalItems(inventory_type playerItems){
  int totalItems {0};

  for(auto element : playerItems){
    totalItems += element;
  }

  return totalItems;
}

std::string getItemName(int enumPosition){
  switch(enumPosition){
    case 0:
      return "health potion(s)";
    case 1:
      return "torch(es)";
    case 2:
      return "arrow(s)";
    default:
      return "err... what is this?";
  }
}

std::string detailItems(inventory_type playerItems){
  std::string detailStr = "";  
  for(int i {0}; i < static_cast<int>(totalItems); ++i){
    detailStr += std::to_string(playerItems.at(i)) + " " + getItemName(i) + '\n';
  }
  return detailStr;
}

int main(){

  
  inventory_type playerItems {2, 5, 10};

  std::cout << "The player has " << countTotalItems(playerItems) << " items in total\n";

  std::cout <<  detailItems(playerItems);

  return 0;
}
