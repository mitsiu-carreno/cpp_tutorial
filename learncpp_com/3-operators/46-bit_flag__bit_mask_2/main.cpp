#include <iostream>

int main(){

   // Define a bunch of physical/emotional states
    const unsigned char isHungry    = 1 << 0;   // 0000 0001
    const unsigned char isSad       = 1 << 1;   // 0000 0010 
    const unsigned char isMad       = 1 << 2;   // 0000 0100 
    const unsigned char isHappy     = 1 << 3;   // 0000 1000 
    const unsigned char isLaughing  = 1 << 4;   // 0001 0000 
    const unsigned char isAsleep    = 1 << 5;   // 0010 0000 
    const unsigned char isDead      = 1 << 6;   // 0100 0000 
    const unsigned char isCrying    = 1 << 7;   // 1000 0000 

    unsigned char me = 0;   // all flags/options turned off to start
    
    me |= isHappy | isLaughing; // I am happy and laughing

    me &= ~isLaughing;      // I am no longer laughing

    me |= isHungry;         // I am happy and hungry

    // We`ll use static_cast<bool> to interpret the results as a boolean value rather than an integer
    std::cout << "Am i happy? " << static_cast<bool>(me & isHappy) << "\n";
    std::cout << "Am i laughing? " << static_cast<bool>(me & isLaughing) << "\n";
    std::cout << "Am i hungry? " << static_cast<bool>(me & isHungry) << "\n";  

   return 0;
}