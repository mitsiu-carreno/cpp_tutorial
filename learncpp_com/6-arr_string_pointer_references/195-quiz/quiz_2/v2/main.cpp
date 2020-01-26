#include <iostream>

//Write the following program: Create a struct that holds a student’s first name and grade 
//(on a scale of 0-100). 
//Ask the user how many students they want to enter. 
//Dynamically allocate an array to hold all of the students. 
//Then prompt the user for each name and grade. 
//Once the user has entered all the names and grade pairs, sort the list by grade (highest first). 
//Then print all the names and grades in sorted order.

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
    std::cout << "How many students are you going to register?: ";
    std::cin >> input;
    if(isValidInput()){
      return input;
    }else{
      std::cout << "Sorry that number seems weird lets try again\n\n";
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
      std::cout << "That name seems weird let's try again\n\n";
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
      std::cout << "That grade seems weird let's tray again\n\n";
    }
  }
}

void fillStudents(Student *studentRegistry, int studentRegistryLength){
  std::cout << "Let's fill each student info: \n";
  for(int i{0}; i < studentRegistryLength; ++i){
    std::cout << "Student " << i+1 << ":" << std::endl;

    studentRegistry[i].name = getStudentName();

    studentRegistry[i].grade = getStudentGrade();
    std::cout << std::endl;
  } 
  std::cout << std::endl; 
}

void sortByGrade(Student *studentRegistry, int studentRegistryLength){
  for(int superi {0}; superi < studentRegistryLength; ++superi){
    int bubbleCurrentMax {0};
    bool earlyStop {true};
    for(int i {studentRegistryLength-1}; i >=0; --i){
      if(bubbleCurrentMax < studentRegistry[i].grade){
        bubbleCurrentMax = studentRegistry[i].grade;
      }else{
        earlyStop = false;
        Student temp {studentRegistry[i]};
        studentRegistry[i] = studentRegistry[i+1];
        studentRegistry[i+1] = temp;
      }
    }
    if(earlyStop && (superi != studentRegistryLength -1)){
      std::cout << "Early stoping the bubble sort algorithm was detected and implemented, please double check sorting\n";
      return;
    }
  }  
}

void printStudentRegistry(Student *studentRegistry, int studentRegistryLength){
  for(int i {0}; i < studentRegistryLength; ++i){
    std::cout << studentRegistry[i].name << " got a grade of " << studentRegistry[i].grade << std::endl;
  }
}

int main(){
  int numOfStudents = getNumStudents();

  Student *studentRegistry = new Student[numOfStudents];

  fillStudents(studentRegistry, numOfStudents); 

  sortByGrade(studentRegistry, numOfStudents);

  printStudentRegistry(studentRegistry, numOfStudents);

  delete[] studentRegistry;

  return 0;
}
