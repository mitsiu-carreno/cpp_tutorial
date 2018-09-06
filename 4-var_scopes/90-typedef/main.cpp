#include <iostream>

typedef int numerin;
typedef long numeron;
typedef long numerote;

numerin main(){

	numerin edad = 25;	// int edad = 25;
	
	numeron anoNacim = 1993;
	numerote fechaNacim = 30061993;

	fechaNacim = anoNacim;

	std::cout << "Numerote uses: " << sizeof(fechaNacim) << " bytes y tiene el valor: " << fechaNacim << "\n";



	return 0;
}
