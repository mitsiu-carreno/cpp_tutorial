#include <iostream>
#include <string>

enum class MonsterType{
  ogre,
  dragon,
  orc,
  giant_spider,
  slime,
};

struct Monster{
  std::string name;
  MonsterType type;
  int health;
};

std::string getMonsterType(MonsterType type){
  
	// We need C++17 for this code to work (g++ -std=c++1z -o main main.cpp)
  switch(type){
    case MonsterType::ogre:
      return "Orge";
      break;

    case MonsterType::dragon:
      return "Dragon";
      break;
    
    case MonsterType::orc:
      return "Orc";
      break;

    case MonsterType::giant_spider:
      return "Giant Spider";
      break;

    case MonsterType::slime:
      return "Slime";
      break;
    
    default:
      return "Unkown type of monster";
      break;
  }
  
}

void printMonster(Monster monst){
  std::cout << "This " << getMonsterType(monst.type) << " is named " << monst.name << " and has " << monst.health << " health.\n";
}

int main(){

  Monster monst1 = {"Torg", MonsterType::ogre, 145};
  Monster monst2 = {"Blurp", MonsterType::slime, 23};

  printMonster(monst1);
  printMonster(monst2);

  return 0;
}

