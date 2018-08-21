#include <iostream>
#include "goo.cpp"
#include "foo.cpp"

int main(){
	
	std::cout << "Foo namespace: " << Foo::doSomething(3,4) << "\n";
	std::cout << "Goo namespace: " << Goo::doSomething(3, 4) << "\n";

	return 0;
}
