# Cpp_tutorial
This repo is intended to store all the excercises developed while taking the course at [Learn Cpp](www.learncpp.com)
---

## Compiling
```cpp
$ g++ -std=c++1z -o main -I headers/ src/* 
```
* g++ GCC, normally does preprocessing, compilation, assembly and linking
* -std=c++1z determines the language standard (C++17 from 2017)
* -o place output in the file main  
* -I add the directory headers to the list of directories to be searched for header files


## Google C++ Style Guide

### Filenames
All lowercase and underscore ( _ ) or dash ( - )      
```cpp   
my_useful_class.cpp
```

### Typenames (classes, structs, type aliases, enums, and type template params)
Start with capital letter and have capital letter for each new word (no underscores)
```cpp
class UrlTableTester {...
struct UrlTableProperties {...
typedef hash_map<UrlTableProperties *, std::string> PropertiesMap;
using PropertiesMap = hash_map<UrlTableProperties *, std::string>;
enum UrlTableErrors{...
```

### Variable Names (including function parameters and data members, no structs)
All lower case with underscores between words
```cpp
[OK] std::string table_name;
[NO] std::string tableName;  // Mixed case
```

### Class Data Members
Named like ordinary variables but with a trailing underscore
```cpp
class TableInfo{
  ...
  private:
    std::string table_name_;
    static Pool <TableInfo>* pool_;
```

### Struct Data Members
Named like ordinary variables (No trailing underscore)
```cpp
struct UrlTableProperties{
  std::string name;
  int num_entries;
  static Pool<UrlTableProperties>* pool;
};
```

### Constant Names
Named with a leader "K" followed by a mixed case 
Underscores can be used as separators in the rare cases where capitalization cannot be used for separation
```cpp
const int KDaysInAWeek = 7;
const int KAndroid8_0_0 = 24;   // Android 8.0.0
```

### Function Names
Start with a capital letter and have a capital leter for each new word
```cpp
AddTableEntry()
DeleteUrl()
OpenFileOrDie()
```

### Namespace Names
All lower-case
```cpp
namespace mynamespace{...
```

### Enumerator Names
Like constants (leading "K" followed by mixed case)
```cpp
enum UrlTableErrors{
  KOk = 0,
  KErrorOutOfMemory,
  KErrorMalformedInput,
};
```

