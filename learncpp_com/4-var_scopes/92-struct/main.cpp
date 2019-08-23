#include <iostream>
#include <string>

struct Persona{
  std::string name;
  short edad;
  short anioNacimiento;
};

void printNonStructPersona(std::string personaName, short personaEdad, short personaAnioNacim){
  std::cout << "Nombre: " << personaName << "\tedad: " << personaEdad << "\taño de nacimiento: " << personaAnioNacim << "\n";
}

// Expect a single parameter containing all the data
void printStructPersona(Persona persona){
  std::cout << "Nombre: " << persona.name << "\tedad: " << persona.edad << "\taño de nacimiento: " << persona.anioNacimiento << "\n";
}

int main(){

  // Mitsiu Person
  std::string mitName("Mitsiu Alej Carreño");
  short mitEdad(25);
  short mitAnioNacim (1993);

  // This call requires the three variables to be sent into de function
  printNonStructPersona(mitName, mitEdad, mitAnioNacim);

  // Struct Persona is capitalized, kary not
  Persona kary;   // create a Persona struct for kary
  // Assign a value to kary's Persona members
  kary.name = "Karina de Sarabia";  // Assign a value to member name within struct Kary
  kary.edad = 25;                   // Assign a value to member edad within struct Kary
  kary.anioNacimiento = 1992;       // Assing a value to member anioNacimiento within struct Kary
  printStructPersona(kary);

  // Struct initialization 
  Persona jorge ={"GIORGIO Andrade Pandi", 28}; // jorge.name = "GIORGIO Andrade Pandi" jorge.edad = 29 jorge.anioNacimiento = 0 (default initilialization for short)
  printStructPersona(jorge);
  
  jorge.name = "Giorgio Andrade Pandi";
  // Today's jorge birthday!!!
  ++jorge.edad;
  jorge.anioNacimiento = 1990;
  printStructPersona(jorge);

 
  return 0;
}
