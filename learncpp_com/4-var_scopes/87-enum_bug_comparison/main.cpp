#include <iostream>

enum Color{
	RED,	// RED is placed in the same scope as Color
	GREEN,
	BLUE,
};

enum Fruit{
	APPLE, // APPLE is placed in the same scope as Fruit
	BANANA,
};

int main(){

	Color color = RED;	// Color and RED can be accessed in the same scope (no prefix needed)
	Fruit fruit = APPLE;	// Fruit and APPLE can be accessed in the same scope (no prefix needed)

	if(color == fruit){	// The compiler will compare a and b as integers 
		std::cout << "Color and fruit are equal\n";
	}	else{
		std::cout << "Color and fruit are not equal\n";
	}

	return 0;
}
