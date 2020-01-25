#include <iostream>
#include <vector>

struct Student{
  std::string name;
  int grade;
};

bool validInput(){
  if(std::cin.fail()){
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    return false;
  }
  std::cin.ignore(32767, '\n');
  return true;
}

int getNumStudents(){
  int input;

  while(true){
    std::cout << "Enter the number of students: ";
    std::cin >> input;
    if(validInput()){
      return input;
    }else{
      std::cout << "Number not allowed, try again\n\n";
    }
  }
}

void fillStudents(std::vector<Student> &studentRegistry){
  int i {0};
  for(Student student : studentRegistry){
    i++;
    std::cout << "Llenemos la información del estudiante " << i << std::endl;
    std::cout << "¿Nombre?: ";
  
    std::cout << "¿Calificación? (0-100): ";
    student.grade = getInteger()
  }  
}

int main(){
  //Write the following program: Create a struct that holds a student’s first name and grade 
  //(on a scale of 0-100). 
  //Ask the user how many students they want to enter. 
  //Create a std::vector to hold all of the students. 
  //Then prompt the user for each name and grade. 
  //Once the user has entered all the names and grade pairs, sort the list by grade 
  //(highest first). Then print all the names and grades in sorted order.

  int numStudents;

  numStudents = getNumStudents();

  std::vector<Student> studentRegistry;

  fillStudents(studentRegistry);  

  return 0;
}
