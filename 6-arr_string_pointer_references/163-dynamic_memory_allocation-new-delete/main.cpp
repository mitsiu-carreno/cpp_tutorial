#include <iostream>

int main()
{
  std::cout << "To allocate a single variable dynamically, we use the scalar (non-array) form of the \"new\" operator";
  std::cout << "\"new int\"; // dynamically allocate an integer (and discard the result)";
  std::cout << "Most often we assign the return value to our own pointer so we can access it later\n\n";

  int *dynamic = new int;   // dynamically allocate an integer
  *dynamic = 7;             // put a value in that memory location

  int *ptr1 = new int(5);   // direct initialization
  int *ptr2 = new int{7};   // uniform initialization

  std::cout << "Dynamically allocated variable \"dynamic\" with value: " << *dynamic << "\n";
  std::cout << "Dynamically allocated variable \"ptr1\" with value: " << *ptr1 << "\n";
  std::cout << "Dynamically allocated variable \"ptr2\" with value: " << *ptr2 << "\n\n";

  std::cout << "When we are done with a dynamically allocated variable, we need to tell C++ explicitly to free the memory for reuse\n";
  std::cout << "Use delete operator to do so and set pointer to nullptr\n";

  delete dynamic;         // return the memory to the operating system. dynamic is now a dangling pointer
  dynamic = nullptr;

  delete ptr1;
  ptr1 = nullptr;

  delete ptr2;
  ptr2 = nullptr;

  // std::cout << *dynamic;  // Dereferencing a dangling pointer will cause undefined behavior
  // delete dynamic;         // Trying to dealLocate a memory again will also lead to undefined behavior

  return 0;
}