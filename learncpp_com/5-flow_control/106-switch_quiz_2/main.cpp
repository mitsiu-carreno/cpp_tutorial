#include <iostream>
#include <string>

enum class Animal{
  pig, 
  chicken, 
  goat, 
  cat, 
  dog, 
  ostrich,
};

std::string getAnimalName(Animal animal){
  switch(animal){
    case Animal::pig:
      return "pig";
      break;

    case Animal::chicken:
      return "chicken";

    case Animal::goat:
      return "goat";

    case Animal::cat:
      return "cat";

    case Animal::dog:
      return "dog";

    case Animal::ostrich:
      return "ostrich";

    default:
      return "unknown";
  }
}

int printNumberOfLegs(Animal animal){
  switch(animal){
    case Animal::pig:
    case Animal::goat:
    case Animal::cat:
    case Animal::dog:
      return 4;

    case Animal::chicken:
    case Animal::ostrich:
      return 2;
    
    default:
      return 0;
  }
}

void printDescription(Animal animal){

  std::cout << "A " << getAnimalName(animal) << " has " << printNumberOfLegs(animal) << " legs\n";
}

int main(){
  
  Animal cat = Animal::cat;
  Animal chick = Animal::chicken;
  
  printDescription(cat);
  printDescription(chick);

  return 0;
}
