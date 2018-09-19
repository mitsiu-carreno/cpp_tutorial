#include <iostream>
#include <string>

struct Employee{
	int id;
	std::string name;
	char age;
	double wage;

};

int main(){
	
	Employee myEmplyee;
	short intSize = sizeof(myEmplyee.id);
	short stringSize = sizeof(myEmplyee.name);
	short charSize = sizeof(myEmplyee.age);
	short doubleSize = sizeof(myEmplyee.wage);

	std::cout << "Printing the size of each member of the Employee struct\n\n";
	std::cout << "int id:\t\t" << intSize << " bytes\n";
 	std::cout << "string name:\t" << stringSize << " bytes\n";
	std::cout << "char age:\t" << charSize << " bytes\n";
	std::cout << "double wage:\t" << doubleSize	<< " bytes\n\n";	

	std::cout << "Adding all the sizes("<< (intSize + stringSize + charSize + doubleSize) <<"), we should get the size of our Employee struct (" << sizeof(myEmplyee) << "), but we don't, the compiler sometimes add gaps into structures for performance reasons \n(this is called padding)\n";

	return 0;

}
