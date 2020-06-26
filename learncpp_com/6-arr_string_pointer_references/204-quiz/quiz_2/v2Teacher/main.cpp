#include <iostream>
#include <algorithm>

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

void sortNames(Student * students, int length){
  // Step through each element of the array
  for(int startIndex = 0; startIndex < length; ++startIndex){
    // LargestIndex is the index of the largest element we've encountered so far
    int largestIndex = startIndex;

    // Look for largest element in the remaining array (starting at startIndex +1)
    for(int currentIndex = startIndex +1; currentIndex < length; ++currentIndex){
      // If the current element is larger than our previously found smallest
      if(students[currentIndex].grade > students[largestIndex].grade){
        // This is the new largest number for this iteration
        largestIndex = currentIndex;
      }
    }

    // Swap our start element with our largest element
    std::swap(students[startIndex], students[largestIndex]);
  }
}

int main(){

  int numStudents = 0;
  
  do{
    std::cout << "How many students do you want to enter?: ";
    std::cin >> numStudents;
  }while(numStudents <= 1);

  // Allocate an array to hold the names
  Student *students = new Student[numStudents];

  //Read in all students
  for(int i {0}; i < numStudents; ++i){
    std::cout << "Enter name #" << i + 1 << ": ";
    std::cin >> students[i].name;
    std::cout << "Enter grade #" << i + 1 << ": ";
    std::cin >> students[i].grade;
  }

  // Sort the names
  sortNames(students, numStudents);

  // Print out all the names
  for(int i = 0; i < numStudents; ++i){
    std::cout << students[i].name << " got a grade of " << students[i].grade << std::endl;  
  }

  // DONT FORGET TO DEALLOCATE MEMORY
  delete[] students;

  return 0;
}
