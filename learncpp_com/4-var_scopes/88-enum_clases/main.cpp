#include <iostream>

// Enum class defines this as a scoped enumeration instead of a standard enumeration
enum class Color{
	RED,	// RED is inside the scope of Color
	BLUE,
	GREEN,
};

enum class Fruit{
	BANANA,	// BANANA is inside the scope of Fruit
	APPLE,
};

int main(){
	Color color = Color::RED;		// RED is not directly accessible any more, we have to use Color::RED
	Fruit fruit = Fruit::APPLE;	// BANANA is not directly accesible any more, we have to use Fruit::BANANA

	if(color == fruit){	// complie error here, as the compiler doesn't know how to compare different types Color and Fruit
		std::cout << "Color and fruit are equal\n";
	}else{
		std::cout << "Color and fruit are not equal\n";
	}

	return 0;
}
