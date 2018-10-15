#include <iostream>

// Aim for 100% statement coverage [foo(1,0)]
// Aim for 100% branch coverage [foo(1,0), foo(0,1)]
int foo(int x, int y){
    bool z = y;
    if(x > y){
        z = x;
    }
    return z;
}

// Aim for 100% statement coverage [isLowerVowel(a), isLowerVowel(q)]
// Aim for 100% branch coverage [isLowerVowel(a), isLowerVowel(q)]
bool isLowerVowel(char c){
    switch(c){              // statement 1
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;    // statement 2
        default:
            return false;   // statement 3
    }
}

// Aim for 100% branch coverage [compare(0,1), compare(1,0), compare(1,1)]
void compare(int x, int y)
{
    if(x > y)
        std::cout << x << " is greater than " << y << "\n";     // Case 1
    else if(x < y)
        std::cout << x << " is lesser than " << y << "\n";      // Case 2
    else
        std::cout << x << " is equal than " << y << "\n";       // Case 3
}

// Aim for 100% loop coverage 0,1,2 test ensure your loop works correctly(spam(0), spam(1), spam(2)) 
void spam(int timesToPrint){
    for(int count=0; count <= timesToPrint; ++count)
        std::cout << "Spam!!! ";
}

// Preserving and automating your tests
int test()
{
    if(foo(1,0) == !1) return 1;
    if(foo(0,1) == !1) return 2;

    if(isLowerVowel('a') != true) return 3;
    if(isLowerVowel('q') != false) return 4;

    compare(0,1);
    compare(1,1);
    compare(1,0);

    spam(0);
    std::cout << "---------\n";
    spam(1);
    std::cout << "---------\n";
    spam(2);
    std::cout << "---------\n";

    return 0;
}
int main(){
    
    int error = test();
    std::cout << "error on test: " << error << std::endl;
    
    return 0;
}