#include <iostream>

int main()
{
    char name[] = "Mollie";
    int nameLength = sizeof(name) / sizeof(name[0]);
    int numVowels = 0;

    for(char *ptr = name; ptr < &name[nameLength]; ++ptr)
    {   
        switch(*ptr)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++numVowels;
                break;
        }
    }
    
    std::cout << "Name '" << name << "' has " << numVowels << " vowels in it\n"; 
    return 0;
}