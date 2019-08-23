#include <iostream>
#include <bitset>

int main(){
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_favorited = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;

    unsigned char myArticleFlags = 0;
    std::cout << "Initial value for myArticleFlags:\n"; 
    std::cout << std::bitset<8>(myArticleFlags) << "\n";

    std::cout << "Set the article as viewed:\n";
    myArticleFlags |= option_viewed;
    std::cout << std::bitset<8>(myArticleFlags) << "\n";

    std::cout << "Checking if article is deleted:\n";
    if(myArticleFlags & option_deleted){
        std::cout << "Article deleted!\n";
    }else{
        std::cout << "Article NOT deleted\n";
    }
    
    std::cout << "Set the article as favorited:\n";
    myArticleFlags |= option_favorited;
    std::cout << std::bitset<8>(myArticleFlags) << "\n";

    std::cout << "Set the article as NOT favorited:\n";
    myArticleFlags &= ~option_favorited;
    std::cout << std::bitset<8>(myArticleFlags) << "\n";

    std::cout << "Toggle shared:\n";
    myArticleFlags ^=option_shared;
    std::cout << std::bitset<8>(myArticleFlags) << "\n";

    std::cout << "Toggle shared again:\n";
    myArticleFlags ^=option_shared;
    std::cout << std::bitset<8>(myArticleFlags) << "\n";
    //std::cout << std::bitset<8>(myArticleFlags) << "\n";

    return 0;
}
