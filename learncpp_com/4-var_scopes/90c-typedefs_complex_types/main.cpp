#include <iostream>
#include <string>
#include <vector>

int main(){
	
	// in advanced C++ there are some wild types like:
	std::vector < std::pair < std::string, int > > pairlist;
	std::cout << sizeof(pairlist) << std::endl;

	// And wherever you need your data type you have to write the whole thing, it's easier to define it as a typedef
	typedef std::vector < std::pair < std::string, int > > pairlist_t;
	pairlist_t pairlist2;
	
	std::cout << sizeof(pairlist2) << std::endl;

	return 0;
}
