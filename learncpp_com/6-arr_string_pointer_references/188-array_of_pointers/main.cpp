int main(){
  // Pointers to pointers have a few uses. The most common use is to dynamically allocate an array of pointers 
  
  int **array = new int*[10]; // Allocate an array of 10 int pointers

  // Works like a standard dynamically allocated array, except the array elements are of type "pointer to integer"
  
  delete[] array;

  return 0;
}
