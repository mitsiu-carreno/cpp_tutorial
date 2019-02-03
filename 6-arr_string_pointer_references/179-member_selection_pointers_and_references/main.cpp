#include <iostream>

int main(){

  std::cout << "It is common to have either a pointer or a reference to a struct (or class)\n";  
  std::cout << "You can select the member of a struct using the MEMBER SELECTION OPERATOR (.)\n";

  struct Person {
    int age;
    double weight;
  };

  Person person;

  // Member selection using acual struct variable
  person.age = 5;



  // Member selection using reference to struct
  Person &ref = person;
  // Same syntax for references
  ref.age = 6;



  // However with a pointer you need to dereference the pointer first
  // Member selection using pointer to struct
  Person *ptr = &person;
  (*ptr).age = 7;
  // Note that the pointer dereference must be enclosed in parentheses, because the member selection operator
  // has a higher precedence that the dereference operator

  std::cout << "Because the sintax for access to structs and class members through a pointer is awkward\n";
  std::cout << "(*ptr).member\n\n";
  std::cout << "C++ offers a second member selection operator (->) for doing member selection from pointers\n";
  std::cout << "The following two lines are aquivalent\n";
  std::cout << "(*ptr).member = 5;\n";
  std::cout << "ptr->member = 5;\n\n";
  std::cout << "And the dereference is implicitly done\n";

  ptr->age = 8;
  std::cout << ptr->age << "\n\n";

  std::cout << "Rule: when using a pointer to access the value of a member, use operator -> insted of operator . (the . operator)\n";

  return 0;
}