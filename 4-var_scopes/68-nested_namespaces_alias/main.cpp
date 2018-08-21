#include <iostream>

namespace Foo {
   // Goo is a namespace inside Foo namespace
  namespace Goo {
    const int g_x = 5;
  }
}

// C++17 
// namespace Foo::Goo{
//  const int g_x = 5;
// }

// namespaces alliases
namespace Boo = Foo::Goo; // Boo now refers to Foo::Goo

int main(){

  std::cout << Foo::Goo::g_x << "\n";
  std::cout << "Namespace allias " << Boo::g_x;
  
  return 0;
}
