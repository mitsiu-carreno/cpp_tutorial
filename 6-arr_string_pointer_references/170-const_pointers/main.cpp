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

    const int value2 = 5;
    const int *ptr2 = &value2;    //this is ok, ptr is a non-const pointer that is pointing to a "const int"
    //*ptr2 = 6;   // NOT allowed, we can't change a const value 

    std::cout << "A pointer to a constant value can point to a non-const variable\n";
    std::cout << "A pointer to a constant variable treats the variable as constant when it\n"; 
    std::cout << "is accessed through the pointer, regadless of whether the variable was initially defined as const or not\n";
    int value3 = 6;             // value is non constant
    const int *ptr3 = &value3;   // this is still ok 
    value3 = 7;     // the value is non-const when accessed through a non-const identifier
    // but the following not 
    //*ptr3 = 8;    // ptr3 treats its value as const, so changing the value through ptr3 is not legal

    std::cout << "Because a pointer to a const value is not const itself (it just points to a const value),\n"; 
    std::cout << "the pointer can be redirected to point at other values\n";
    int val = 5;
    const int *valPtr = &val;   // valPtr points to a const int

    int val2 = 6;
    const int *valPtr2 = &val2; // okay, valPtr now points at some other const int

    std::cout << "\n\n\nConstant pointers\n";
    std::cout << "We can also make pointer constant itself (Whose value can not be changed after initialization)\n";

    int value4 = 5;
    int *const constPtr = &value4;  // constPtr will always point to value4
    
    std::cout << "This means a const pointer will always point to the same address";

    //constPtr = &value3; // not ok, once initialized a const pointer can not be changed

    // However because the value being pointed to is still non-const, it is possible to change the value being 
    // pointed to via dereferencing the const pointer
    
    *constPtr = 7;  // allowed, since constPtr points to a non-const int

    std::cout << "Finally its possible to declare a const pointer to a const value\n";
    const int *const doubleConst = &value4;
    std::cout << "A const pointer to a const value can not be set to point to another address, nor can \n";
    std::cout << "the value it is pointing to be changed through the pointer\n";

    // Recapping 
    int finalValue = 5;
    const int *fPtr = &finalValue;          // fPtr points to a "const int", so this is a pointer to a const value
    int *const fPtr2 = &finalValue;         // fPtr2 points to an "int", so this is a const pointer to a non-const value
    const int *const fPtr3 = &finalValue;   // fPtr3 points to a "const int", so this is a const pointer to a const value

    return 0;
}