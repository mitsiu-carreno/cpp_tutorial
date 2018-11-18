#include <iostream>

void printCStyleString(char string[], int length){
    for(int cont=0; cont < length; ++cont){
         std::cout << static_cast<int>(string[cont]) << "\t";
    }

    std::cout << "\n";
    
    for(int cont=0; cont < length; ++cont){
        std::cout << " " << string[cont] << " \t";
    }
    std::cout << "\n";
}

int main()
{
    std::cout << "A C-style string is simply an array of characters that uses a null terminator \\0 (ascii code 0)\n";
    std::cout << "Also called a null-terminated string\n\n";

    char myCStyleString[] ="string";
    
    int sizeOfString = sizeof(myCStyleString) / sizeof(myCStyleString[0]); 

    std::cout << "The array \"string\" has " << sizeOfString << " characters.\n\n";
    
    printCStyleString(myCStyleString, sizeOfString);

    //You can modify the elements of the array like:
    myCStyleString[1] = 'p';
    
    // not like
    //myCStyleString = "nope";

    std::cout << myCStyleString << "\n";

    std::cout << "When printing, std::cout PRINTS CHARACTERS UNTIL IT ENCOUNTERS A NULL TERMINATOR\n";

    myCStyleString[6] = '3';
    // WARNING Position 7 is not even part of the array (unsafe memory use)
    myCStyleString[7] = 'a';

    std::cout << myCStyleString << "\n";

    // when asking user for input, you have to make a big "enough" array for it
    char user[255];

    std::cout << "Enter your name: ";
    // use cin.getline to define how many characters to select (254) and have space for the null terminator (255)
    std::cin.getline(user, 255);
    std::cout << "Nice to meet you " << user << std::endl;
    

    return 0;
}