#include <iostream>
#include <string>
#include <utility>

bool validInput()
{
    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;
    }
    std::cin.ignore(32767, '\n');
    return true;
}

int getLength()
{
    int input;
    while(true){
        std::cout << "How many friends do you have?: ";
        std::cin >> input;
        if(validInput()){
            return input;
        }else{
            std::cout << "Thats a weird number of friends, let's try again\n\n";
        }
    }
}

void selectionSort(std::string *myFriends, int numOfFriends)
{
    for(int outer = 0; outer < numOfFriends; ++outer){

        int nextSortedName = outer;
        //std::string firstSortedName = myFriends[0];
        for(int inner = outer; inner < numOfFriends; ++inner)
        {
            //std::cout << "Comparing " << myFriends[inner] << " & " << firstSortedName << "\n"; 
            if(myFriends[inner] < myFriends[nextSortedName])
            {
                nextSortedName = inner;    
            }
        }
        //myFriends[outer] = myFriends[nextSortedName];
        std::swap(myFriends[outer], myFriends[nextSortedName]);
    }
}

void printNames(std::string *myFriends, int numOfFriends)
{
    for(int count = 0; count < numOfFriends; ++count)
    {
        std::cout << "Your friend #" << count+1 << " is: " << myFriends[count] << "\n";
    }

}

int main()
{
    int numOfFriends = getLength();


    std::string *myFriends = new std::string[numOfFriends];
    
    for(int count = 0; count < numOfFriends; ++count)
    {
        std::cout << "Enter the name of your friend #" << count+1 << ": ";
        std::cin >> myFriends[count];
    }
    std::cout << std::endl;

    selectionSort(myFriends, numOfFriends);

    printNames(myFriends, numOfFriends);

    delete[] myFriends;
    return 0;
}