#include <iostream>

int main(){
    int count = 1;
    while(count <= 100){
        std::cout << count << " -> ";
        
        if(count % 20 == 0){
            std::cout << "\n";
        }

        ++count;
    }

    return 0;
}