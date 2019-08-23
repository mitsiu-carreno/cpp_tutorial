#include <iostream>

int main(){

  unsigned int countdown = 10;

  while(countdown >= 0 ){
    if(countdown == 0)
      std::cout << "Blastoff!!";
    else{
      std::cout << countdown << " ";
    }
    --countdown;
  }

  return 0;
}
