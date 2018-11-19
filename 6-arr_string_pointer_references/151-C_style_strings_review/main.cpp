#include <iostream>
#include <cstring>

int main()
{
    char phrase[255]; 
    std::cout << "Enter your favorite phrase from a book: ";
    std::cin.getline(phrase, 255);

    int spacesFound = 0;
    for(int count=0; count < strlen(phrase); ++count)
    {
        if(phrase[count] == ' '){
            ++spacesFound;
        }
    }
    
    std::cout << "You type " << spacesFound << " spaces in the phrase: \"" << phrase << "\"\n";

    return 0;
}