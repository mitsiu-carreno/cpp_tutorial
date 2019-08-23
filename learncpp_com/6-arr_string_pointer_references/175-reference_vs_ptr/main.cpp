#include <iostream>

int main(){

    std::cout << "References and pointers have an interesting relationship\n";
    std::cout << "A reference acts like a pointer that is implicitly dereferenced when accessed\n";
    std::cout << "(references are usually implemented internally by the compiler using pointers)\n";
    
    int value = 5;
    int *const ptr = &value;

    int &ref = value;

    *ptr = 6;
    std::cout << value << std::endl;

    ref = 7;
    std::cout << value << std::endl;

    // *ptr and ref valuate identically

    std::cout << "Because references must be initialized to valid objects (cannot be null) and cannot be changed once set\n";
    std::cout << "references are generally much safer to use than pointers (since there is no risk of dereferencing a null pointer)\n";
    std::cout << "However, they are also a bit more limited in functionality accordingly\n\n";

    std::cout << "If a given task can be solved with either a reference or a pointer, the reference should\n";
    std::cout << "generally be preferred.\n";
    std::cout << "Pointers should be used in situations where references are not sufficient (such as dinamically allocating memory)\n";

    return 0;
}