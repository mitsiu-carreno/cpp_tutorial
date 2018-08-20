#include <iostream>

int generateId(){
	static int s_id = 0;
	return s_id++;
}

int main(){
	
	std::cout << "Current Id: " << generateId() << "\n";
	std::cout << "Current Id: " << generateId() << "\n";
	std::cout << "Current Id: " << generateId() << "\n";
	std::cout << "Current Id: " << generateId() << "\n";
	std::cout << "Current Id: " << generateId() << "\n";
					
	return 0;
}
