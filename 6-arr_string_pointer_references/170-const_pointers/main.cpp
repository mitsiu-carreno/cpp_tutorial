#include <iostream>

int main()
{
    std::cout << "So far we've only seen non-const pointers to non-const values\n";

    int value = 5;
    std::cout << value << "\n";

    int *ptr = &value;
    *ptr = 6;
    std::cout << value << "\n";

    std::cout << "However, we can't set a non-const pointer to a const value.\n";
    std::cout << "A const variable is one whose value can not be changed.\n";
    std::cout << "Hypothetically, if we could set a non-const pointer to a const value,\n";
    std::cout << "we could be able to dereference the non-const pointer and change the value.\n\n";
    std::cout << "This would violate the intention of const!\n\n";

    return 0;
}