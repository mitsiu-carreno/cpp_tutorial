#include <iostream>
#include <string>

enum ItemType{
  ITEMTYPE_SWORD,
  ITEMTYPE_TORCH,
  ITEMTYPE_POTION,
};

ItemType itemType;

void setItemType(ItemType item){
  if(item == ITEMTYPE_SWORD){
    std::cout << "Set sword\n";
  }
  if(item == ITEMTYPE_TORCH){
    std::cout << "Set torch\n";
  }
  if(item == ITEMTYPE_POTION){
    std::cout << "Set potion\n";
  }

  itemType = item;
}

std::string getItemName(ItemType item){
  if(item == ITEMTYPE_SWORD)
    return std::string("sword");
  if(item == ITEMTYPE_TORCH)
    return std::string("torch");
  if(item == ITEMTYPE_POTION)
    return std::string("potion");
  // Just in case there's a new one
  return std::string("???");
}

int main(){
  
  setItemType(ITEMTYPE_SWORD);
  std::cout << "You are carrying a " << getItemName(itemType) << "\n";

  setItemType(ITEMTYPE_TORCH);
  std::cout << "You are carrying a " << getItemName(itemType) << "\n";

  return 0;
}
