#include <iostream>
#include <vector>
#include <algorithm>


//Write the following program: Create a struct that holds a student’s first name and grade 
//(on a scale of 0-100). 
//Ask the user how many students they want to enter. 
//Create a std::vector to hold all of the students. 
//Then prompt the user for each name and grade. 
//Once the user has entered all the names and grade pairs, sort the list by grade 
//(highest first). Then print all the names and grades in sorted order.

struct Student{
  std::string name{};
  int grade{};
};

int getNumberOfStudents(){
  int numberOfStudents {};

  do{
    std::cout << "How many students do you want to enter? ";
    std::cin >> numberOfStudents;
  }while(numberOfStudents <= 0);

  return numberOfStudents;
}

std::vector<Student> getStudents(){

  using vector_type = std::vector<Student>;

  int numberOfStudents{ getNumberOfStudents() };

  // Create a vector with numberOfStudents elements
  vector_type students(static_cast<vector_type::size_type>(numberOfStudents));

  int studentNumber {1};

  for(auto &student : students){
    std::cout << "Enter name #" << studentNumber << ": ";
    std::cin >> student.name;
    std::cout << "Enter grade #" << studentNumber << ": ";
    std::cin >> student.grade;

    ++studentNumber;
  }
  return students;
}

// Pass by reference to avoid slow copies
bool compareStudents(const Student &a, const Student &b){
  return (a.grade > b.grade);
}

int main(){

  auto students { getStudents() };

  // WTF!!!! CHECK THIS OUT NIGGA
  std::sort(students.begin(), students.end(), compareStudents);

  // Print out all the names
  for(const auto &student : students){
    std::cout << student.name << " got a grade of " << student.grade << std::endl;
  }

  return 0;
}
