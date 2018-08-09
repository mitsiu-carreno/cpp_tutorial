#include <iostream>
#include <bitset>

std::__1::bitset<8UL> toBitset(char flag){
    std::bitset<8> bitflag(flag);
    return bitflag;
}

int main(){
    
    // VARIABLES TO IDENTIFY THE INDIVIDUAL BITS WITHIN A BYTE (SO WE CAN MANIPULATE THOSE BITS on/off) 
    // C++14 
    const unsigned char option0 = 0b00000001;         // represent bit 0
    const unsigned char option1 = 0b00000010;         // represent bit 1
    // C++11 (hex)
    const unsigned char option2 = 0x4;      // 0000 0100 represent bit 2
    // C++11
    const unsigned char option3 = 1<<3;     // 0000 1000 represent bit 3
    const unsigned char option4 = 1<<4;     // 0001 0000 represent bit 4
    const unsigned char option5 = 1<<5;     // 0010 0000 represent bit 5
    const unsigned char option6 = 1<<6;     // 0100 0000 represent bit 6
    const unsigned char option7 = 1<<7;     // 1000 0000 represent bit 7

    // THE VARIABLE WE WANT TO MANIPULATE 
    // typically we use an unsigned integer of the appropiate size (8, 16, 32 bits)
    unsigned char myFlag = 0;
    std::bitset<8> bitFlag(myFlag);

    std::cout << "Initial bitflag:\t" << bitFlag << "\n\n"; 

    std::cout << "Turn on individual bit: |= " << "\n";
    myFlag |= option3;
    std::cout << "Bitflag:\t" << toBitset(myFlag) << "\n\n";

    std::cout << "Turn off individual bit: &= ~ " << "\n";
    myFlag &= ~option3;
    std::cout << "Bitflag:\t" << toBitset(myFlag) << "\n\n";

    std::cout << "Toggle state of individual bit: ^= " << "\n";
    myFlag ^= option4;
    std::cout << "Bitflag:\t" << toBitset(myFlag) << "\n\n";

    std::cout << "Determining if a bit is on or off: & " << "\n";
    if(myFlag & option4){
        std::cout << "Bitflag:\t" << toBitset(myFlag) << "\t option4 is enabled\n\n";
    }else{
        std::cout << "Bitflag:\t" << toBitset(myFlag) << "\t option4 is disabled\n\n";
    }

    std::cout << "Toggle state of individual bit: ^= " << "\n";
    myFlag ^= option4;
    std::cout << "Bitflag:\t" << toBitset(myFlag) << "\n\n";

    std::cout << "Determining if a bit is on or off: & " << "\n";
    if(myFlag & option4){
        std::cout << "Bitflag:\t" << toBitset(myFlag) << "\t option4 is enabled\n\n";
    }else{
        std::cout << "Bitflag:\t" << toBitset(myFlag) << "\t option4 is disabled\n";
    }
    return 0;
}