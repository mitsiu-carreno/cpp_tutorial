#include <iostream>

enum StudentNames       // This "trick" only works if the value of the enumerator isn't changed manually
{
    KENNY,         // 0
    KYLE,          // 1
    STAN,          // 2
    BUTTERS,       // 3
    CARTMAN,       // 4
    MAX_STUDENTS   // 5     // this is usefull in case an other element is added, the length is updated automatically
};

int main()
{
    // One "problem" with arrays is that integer indices do not provide any information to the programmer about the meaning of the index
    const int numberOfStudents = 5;
    int testScores[numberOfStudents];
    testScores[2] = 76;
    // Who is represented by testScores[2]?


    int testScores2[MAX_STUDENTS];  // allocate 5 integers
    testScores2[STAN] = 76;
    // 

    return 0;
}