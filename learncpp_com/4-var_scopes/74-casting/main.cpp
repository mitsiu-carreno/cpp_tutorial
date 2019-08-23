#include <iostream>

// Casting: represents an explicit request by the programmer to do a type conversion

int main(){

	// Consider
	int i1 = 10;
	int i2 = 4;
	float f = i1/i2;
	// Because both i1 and i2 are integers, no promotion take place and integer division is performed, resulting in the value 2 
	// which is then implicitly converted to 2.0 and assigned to f!!!

	std::cout << f << "\n";

	// C-style cast  (SHOULD BE AVOIDED)
	float ccast = (float) i1 / i2;
	std::cout << "C-style cast:\t\t" << ccast << "\n";

	float ccast2 = float(i1)/i2;
	std::cout << "C-style cast (method 2):" << ccast2 << "\n\n";
	// End c-style cast

	// static_cast
	
	float stc_cast = static_cast<float>(i1) / i2;
	std::cout << "static_cast:\t" << stc_cast << "\n";

	char c = 'a';
	std::cout << static_cast<int>(c) << " = 'a'"<< std::endl;

	int i = 97;
	// char c = i;	// implicit conversion
	char c2 = static_cast<char>(i);
	std::cout << c2 << "\n";

	i = 100;
	// i = i/2.5;
	i = static_cast<int>( i / 2.5 );
	std::cout << i << "\n";

	return 0;
}
