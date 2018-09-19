#include <iostream>
#include <string>

struct Employee{
	std::string name;
	char age;
	double wage;
};

struct Company{
	Employee CEO;	//Employee is a struct within the Company struct
	int numberOfEmployees;
};

int main(){
	
	Company myCompany = { {"Mitsiu Alejandro Carreño Sarabia", 25, 18000}, 10 };

	std::cout << "My Company owned by " << myCompany.CEO.name << " aged " << static_cast<int>(myCompany.CEO.age) << " has a total of employees of " << myCompany.numberOfEmployees << std::endl;

	std::cout << "Testing to print char as number " << +myCompany.CEO.age << "\n";


	return 0;
}
