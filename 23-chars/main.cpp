#include <iostream>

int main(){
    char ch1(97);
    char ch2('a');
    std::cout << ch1 << std::endl;
    std::cout << ch2 << std::endl;

    // Cast to int
    std::cout << "Char " << ch1 << " have value: " << static_cast<int>(ch1) << std::endl;


    char chInput;
    std::cout << "Ingresa el texto 'asdf'" << std::endl;
    std::cin >> chInput;
    std::cout << "Primer valor " << chInput << " codigo ASCII " << static_cast<int>(chInput) << std::endl;

    std::cin >> chInput;
    std::cout << "Segundo valor " << chInput << " codigo ASCII " << static_cast<int>(chInput) << std::endl;

    std::cin >> chInput;
    std::cout << "Tercer valor " << chInput << " codigo ASCII " << static_cast<int>(chInput) << std::endl;

    std::cin >> chInput;
    std::cout << "Cuarto valor " << chInput << " codigo ASCII " << static_cast<int>(chInput) << std::endl;
    
    return 0;
}