#include <iostream>

enum class Color{
	RED,
	BLUE,
};

int main(){
	
	Color color = Color::RED;

	if(color == Color::BLUE){	//both are Color type so can be compared
		std::cout << "The color is blue\n";
	}else if(color == Color::RED){
		std::cout << "The color is red\n";
	}

	// std::cout << color << "\n";	// This won't work, because there's no implicit conversion to int 
	std::cout << static_cast<int>(color) << "\n";
return 0;
}
