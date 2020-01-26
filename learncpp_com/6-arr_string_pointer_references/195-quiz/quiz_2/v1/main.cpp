#include <iostream>
#include <vector>
  
//Write the following program: Create a struct that holds a student’s first name and grade 
//(on a scale of 0-100). 
//Ask the user how many students they want to enter. 
//Create a std::vector to hold all of the students. 
//Then prompt the user for each name and grade. 
//Once the user has entered all the names and grade pairs, sort the list by grade 
//(highest first). Then print all the names and grades in sorted order.


struct Student{
  std::string name;
  int grade;
};

bool isValidInput(){
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
    if(isValidInput()){
      return input;
    }else{
      std::cout << "Number not allowed, try again\n\n";
    }
  }
}

std::string getStudentName(){
  std::string input;

  while(true){
    std::cout << "Name?: ";
    std::cin >> input;
    if(isValidInput()){
      return input;
    }else{
      std::cout << "There seems to be a problem with the name, please try again\n";
    }
  }
}

int getStudentGrade(){
  int input;
  
  while(true){
    std::cout << "Grade? (0-100): ";
    std::cin >> input;
    if(isValidInput()){
      return input;
    }else{
      std::cout << "This grade doesn't seem right, remember from 0 to 100\n";
    }
  }
}

void fillStudents(std::vector<Student> &studentRegistry){
  int i {0};
  for(Student &student : studentRegistry){
    i++;
    std::cout << "Lets fill student number " << i << " info" << std::endl;

    student.name = getStudentName();

    student.grade = getStudentGrade();

    std::cout << std::endl;
  }  
}

void sortByGrade(std::vector<Student> &studentRegistry){
  // Tipical bubble algorithm because i'am at the library without connection and i wanna do it for my self
  int registrySize = studentRegistry.size();

  for(int superi {0}; superi < registrySize; ++superi){
  int bubbleCurrentMax {0}; 
    for(int i {registrySize-1}; i >= 0; --i){
      if(bubbleCurrentMax < studentRegistry.at(i).grade){
        bubbleCurrentMax = studentRegistry.at(i).grade;
      }else{
        Student temp = studentRegistry.at(i);
        studentRegistry.at(i) = studentRegistry.at(i+1);
        studentRegistry.at(i+1) = temp;
      }
    }
  }
}

void printStudentRegistry(std::vector<Student> &studentRegistry){
  for(auto &student : studentRegistry){
    std::cout << student.name << " got a grade of " << student.grade << std::endl;
  }
}

int main(){

  int numStudents;
  std::vector<Student> studentRegistry;

  numStudents = getNumStudents();
  studentRegistry.resize(numStudents);

  fillStudents(studentRegistry);  

  sortByGrade(studentRegistry);

  printStudentRegistry(studentRegistry);

  return 0;
}
