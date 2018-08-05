#include <iostream>

int getClassSise(bool inBigClassroom){
    if(inBigClassroom){
        return 30;
    }else{
        return 20;
    }
}

int main(){

    bool inBigClassroom = false;

    // Conditional operator is used as an expression here, this cant be done with if/else statement
    const int classSize = inBigClassroom ? 30 : 20;

    std::cout << "The class size is: " << classSize << std::endl;

    //Refactoring line 8 (const definition) with if/else should be something like this:
    const int classSize2 = getClassSise(inBigClassroom);
    std::cout << "The class size (with if/else) is: " << classSize2 << std::endl;
    return 0;
}