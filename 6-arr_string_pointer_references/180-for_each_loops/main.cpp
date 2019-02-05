#include <iostream>

int main(){

  const int numStudents = 5;
  int scores [numStudents] = {100, 87, 60, 79, 66};
  int maxScore = 0;
  for(int i = 0; i < numStudents; ++i){
    if(scores[i] > maxScore){
      maxScore = scores[i];
    }
  }
  std::cout << "Max score is: " << maxScore << std::endl; 


  int fibonacci[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};
  for(int next : fibonacci){  // iterate over fibonacci array
    std::cout << next << "\t\n";  
    // we access the array element for this iteration through variable next
  }

  std::cout << "\n\n"; 
  std::cout << "Because element declaration should have the same type as the array elements,\n";
  std::cout << "This is an ideal case in which to use the AUTO keyword\n";
  std::cout << "and let C++ deduce the type of the element array for us\n";

  for(auto next : fibonacci){
    std::cout << next << ", ";
  }
  std::cout << "\n\n";   

  return 0;
}