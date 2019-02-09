#include <iostream>

int main()
{

  int scores[] = {25, 31, 47, 98, 68, 89};

  int maxScore = 0;   // keep track of our larges score

  for(const auto &currentScore : scores)  // iterate over array scores, assigning each value in turn to variable currentScore
  {
    if(currentScore > maxScore)
    {
      maxScore = currentScore;
    }
  }

  std::cout << "The higher score is: " << maxScore << std::endl;

  return 0;
}