#include <iostream>

int main()
{
    int nArray[] = {9,7,5,3,1};
    char cString[] = "Mitisu";
    const char *cSConstant = "Alejandro";

    std::cout << "Printing nArray " << nArray << "\n";
    std::cout << "Printing cString " << cString << "\n";
    std::cout << "Printing cSConstant " << cSConstant << "\n";    
    return 0;
}