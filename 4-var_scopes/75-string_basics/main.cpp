#include <iostream>
#include <string>
#include <typeinfo>

int main(){

	std::string myName("mitsiu");
	myName = "Mitsiu";

	std::string myId("003");

	std::cout << "Hello, my name is " << myName << ", with id: " << myId << "\n";

	return 0;
}
