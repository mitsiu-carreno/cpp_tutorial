#include <iostream>
#include <random>
#include <ctime>

bool validInput(){
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;        
    }
    std::cin.ignore(32767, '\n');
    return true;
}

int generateRandom()
{
    // Initialize our mersenne twister with a random seed based on clock
    std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr)));
    //Create a reusable random number generator that generates uniform numbers between 0 and 12102016
    std::uniform_int_distribution<> rand(0, 100);

    return rand(mersenne);
}

bool playAgain()
{
    while(true){
        char input;
        std::cout << "¿Quieres jugar de nuevo? [s/n] ";
        std::cin >> input;
        
        if(validInput()){
            if(input == 's' || input == 'S')
            {
                return true;
            }
            if(input == 'n' || input == 'N')
            {
                std::cout << "Gracias por jugar, regresa pronto :)\n\n";
                return false;
            }
        }
        // If valid but no 'y' or 'n' or if not valid, request again
        std::cout << "Por favor escribe 's' o 'n'\n";
    }
     
}

void play(int random)
{
    std::cout << "\n\n\nEstoy pensando en un número. Tienes 7 intentos para adivinar\n";
    for(int count = 1; count <= 7; ++count){
        int guess;
        std::cout << "Intento #" << count << "/7: ";
        std::cin >> guess;
        if(validInput())
        {
            if(random == guess)
            {
                std::cout << "Shiii!! ese es el número, ganaste!!!!!\n";
                return;
            }
            if(guess > random)
                std::cout << "Tu número es muy grande\n";
            if(guess < random)
                std::cout << "Tu número es muy pequeño\n";

        }else{
            std::cout << "Lo siento no entendí ese número, por favor intenta de nuevo\n";
            --count;
        }
    }
    std::cout << "Lo siento has perdido, el número era " << random << "\n";
}

int main()
{
    do{
        int random = generateRandom();
        play(random);
    }
    while(playAgain());

    return 0;
}