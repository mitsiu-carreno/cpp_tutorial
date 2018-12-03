#include <iostream>

int main()
{
    std::cout << "There are rare cases where the operating system fails to grant the memory requested\n";
    std::cout << "By default, if new fails, a bad_alloc exception is thrown\n\n";

    int *value = new (std::nothrow) int;    // value will be set to a null pointer if the integer allocation fails 
    
    if(!value)  // handle case where new returned null
    {
        // Do error handling here 
        std::cout << "Could not allocate memory\n\n";
        return 0;
    }
    *value = 3;

    std::cout << "Dynamicaly allocated in memory address: " << value << " with value: " << *value << "\n";

    delete value;
    value = nullptr;

    return 0;
}