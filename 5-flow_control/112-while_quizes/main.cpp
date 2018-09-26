#include <iostream>

int main(){
  
  std::cout << "---Quiz 1---\n";

  char letter = 'a';
  while(letter != 'z'){
    std::cout << letter << " - " << static_cast<int>(letter) << std::endl;

    ++letter;
  }

  std::cout << "\n---Quiz 2---\n";

  int count = 5;
  while(count >= 1){
    int temp = count;
    while(temp > 0){
      std::cout << temp << " ";
      --temp;
    }
    std::cout << std::endl;

    --count;
  }


  std::cout << "\n---Quiz 3---\n";

  count = 5;
  while(count > 0){
    int temp = 5;
    while(temp > 0){
      if(temp )
        
      --temp;
    }
    std::cout << std::endl;

    --count;
  }

  return 0;
}
