#include <iostream>

enum ParseResult{
  SUCCESS = 0,
  ERROR_OPENINIG_FILE = -1,
  ERROR_PARSING_FILE  = -2,
  ERROR_READING_FILE  = -3,
};

bool openFile(){
  return true;
}

bool parseFile(){
  return true;
}

bool readFile(){
  return false;
}

ParseResult getFile(){
  if(!openFile())
    return ERROR_OPENINIG_FILE;
  if(!parseFile())
    return ERROR_PARSING_FILE;
  if(!readFile())
    return ERROR_READING_FILE;
  return SUCCESS;
}

int main(){
  
  ParseResult result  = getFile();
  std::cout << "Parseing file result: " << result << "\n";

  return 0;
}
