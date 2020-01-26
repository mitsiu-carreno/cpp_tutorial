//What’s wrong with each of these snippets, and how would you fix it?
/*
a)
int main()
{
  int array[]{ 0, 1, 2, 3 };
 
  for (std::size_t count{ 0 }; count <= std::size(array); ++count)
  {
    std::cout << array[count] << ' ';
  }
 
  std::cout << '\n';
 
  return 0;
}

b)
int main()
{
  int x{ 5 };
  int y{ 7 };

  const int* ptr{ &x };
  std::cout << *ptr << '\n';
  *ptr = 6;
  std::cout << *ptr << '\n';
  ptr = &y;
  std::cout << *ptr << '\n';

  return 0;
}

c)
void printArray(int array[])
{
  for (int element : array)
  {
    std::cout << element << ' ';
  }
}

int main()
{
  int array[]{ 9, 7, 5, 3, 1 };

  printArray(array);

  std::cout << '\n';

  return 0;
}

d)
int* allocateArray(const int length)
{
  int temp[length]{};
  return temp;
}

e)
int main()
{
  double d{ 5.5 };
  int* ptr{ &d };
  std::cout << ptr << '\n';

  return 0;
}
