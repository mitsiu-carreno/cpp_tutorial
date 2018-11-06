#include <iostream>

enum class StudentNames
{
  KENNY,
  KYLE,
  STAN,
  BUTTERS,
  CARTMAN,
  WENDY,
  MAX_STUDENTS
};

// Its better to use a standard enum inside of a namespace
namespace StudentNames2{
  enum StudentNames{
    KENNY,
    KYLE,
    STAN,
    BUTTERS,
    CARTMAN,
    WENDY,
    MAX_STUDENTS
  };
}

int main()
{
  // arrays cant accept non int as length and position so you MUST CAST IT! not cool bro 
  int testScores[static_cast<int>(StudentNames::MAX_STUDENTS)]; // allocate six students  
  testScores[static_cast<int>(StudentNames::KENNY)] = 80;

  std::cout << testScores[static_cast<int>(StudentNames::KENNY)] << std::endl;

  int testScores2[StudentNames2::MAX_STUDENTS];
  testScores2[StudentNames2::KENNY] = 81;

  std::cout << testScores2[StudentNames2::KENNY] << " <- standard enum in a namespace is better :)\n";

  return 0;
}