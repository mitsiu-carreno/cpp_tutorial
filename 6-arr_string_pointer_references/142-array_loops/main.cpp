#include <iostream>

int main()
{
  
  int testScore[] ={88, 75, 98, 80, 93};

  // Get the average score without loops
  double noLoopTotalScore = testScore[0] + testScore[1] + testScore[2] + testScore[3] + testScore[4];
  double noLoopAverageScore = noLoopTotalScore / (sizeof(testScore) / sizeof(testScore[0]));
  std::cout << "The average score is: " << noLoopAverageScore << "\n";



  // Get the average score WITH loops
  int totalElements = sizeof(testScore) / sizeof(testScore[0]);
  double sumScores = 0;
  int bestScore = 0;
  for(int count = 0; count < totalElements; ++count)
  { 
    sumScores += testScore[count];
    if(testScore[count] > bestScore)
    {
      bestScore = testScore[count];
    }
  }  
  std::cout << "The average score (with loops) is: " << sumScores / totalElements << "\n";
  std::cout << "And the best score was: " << bestScore << "\n\n";


  std::cout << "Loops are typically used with arrays to do one of three things:\n";
  std::cout << "1) Calculate a value (e.g. average, total)\n";
  std::cout << "2) Search of a value (e.g. highest, lowest)\n";
  std::cout << "3) Reorganize the array (e.g. ascending, descending)\n";

  return 0;
}