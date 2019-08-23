#include <iostream>

int main(){

    std::cout << "A secondary, (and less used) use of references is to provide access to nested data\n";
    std::cout << "This can help keep your code cleaner and more readable\n";

    struct Something{
        int some;
        float other;
    };

    struct Other{
        Something something;
        int otherValue;
    };

    Other other;
    other.something.some = 3;

    std::cout << "other.something.some value " << other.something.some << std::endl;  

    int &ref = other.something.some;
    // ref can now be used in place of other.something.some

    ref = 6;
    
    std::cout << "other.something.some value " << other.something.some << std::endl;  
    std::cout << "ref value: " << ref << std::endl;

    return 0;
}