#include <iostream>
#include <functional>

// To add a comparison function, we have to use a new type "std::function" to store a function
// that takes two int parameters and returns a bool  

// sort accepts a comparison function
void sort (int *begin, int *end, std::function<bool(int, int)> compare){
  // Loop array
  for(auto start_element {begin}; start_element != end; ++start_element){
    auto smallest_element {start_element};
  
    for(auto current_element {std::next(start_element)}; current_element != end; ++current_element){
      // The compare function is used to check if the current element should be 
      // ordered before the current smallest_element
      if(compare(*current_element, *smallest_element)){
        smallest_element = current_element;
      } 
    }
    std::swap(*start_element, *smallest_element);
  }

}

int main(){
  
  int array[] {2,1,9,4,5};

  sort(std::begin(array), std::end(array), std::greater{});

  for(auto i : array){
    std::cout << i << " ";
  }
  std::cout << "\n";

  return 0;
}
