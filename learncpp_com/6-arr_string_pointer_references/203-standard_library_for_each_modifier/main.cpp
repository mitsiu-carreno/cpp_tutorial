#include <iostream>
#include <array>


void DoubleNumber(int &i){
  i = i*2;
}

void PrintArray(std::array<int, 6> arr){
  for(auto i : arr){
    std::cout << i << " ";
  }
  std::cout << "\n";

}

int main(){
  
  std::array<int, 6> arr{4,6,2,7,1,9};

  PrintArray(arr);

  std::for_each(arr.begin(), arr.end(), DoubleNumber);
  // std::ranges::for_each(arr, DoubleNumber);  
  // Since C++20 (with the intoduction of ranges) we don't have to use begin() and end() 

  PrintArray(arr);

  // You might be tempted to:
  
  for(int &i : arr){
    DoubleNumber(i);
  }  
  // but that might be more error prone (forget the reference, send other variable, etc)
  

  PrintArray(arr);

  // besides, you can skip elements at the beggining or end of a container 
  std::for_each(std::next(arr.begin()), std::prev(arr.end()), DoubleNumber);
  // Like many algorithms, std::for_each can be parallelized to achive faster processing,
  // making it better suited for large projects and big data than a range-based for-loop 

  PrintArray(arr);

  return 0;
}
