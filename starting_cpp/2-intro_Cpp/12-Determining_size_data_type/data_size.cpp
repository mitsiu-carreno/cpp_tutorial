// This program determines the size of integers, long
// integers, and long doubles

#include <iostream>
using namespace std;

int main(){
  long double apple;

  cout << "The size of an int is " << sizeof(int);
  cout << " bytes.\n";

  cout << "The size of a long int is " << sizeof(long);
  cout << " bytes.\n";

  cout << "The size of a long double is " << sizeof(apple);
  cout << " bytes.\n";
 
  return 0;
}
