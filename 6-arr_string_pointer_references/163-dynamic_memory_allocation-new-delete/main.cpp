#include <iostream>

int main()
{
  std::cout << "To allocate a single variable dynamically, we use the scalar (non-array) form of the \"new\" operator";
  std::cout << "\"new int\"; // dynamically allocate an integer (and discard the result)";
  std::cout << "Most often we assign the return value to our own pointer so we can access it later";

  int *dynamic = new int;
  *dynamic = 7;

  return 0;
}