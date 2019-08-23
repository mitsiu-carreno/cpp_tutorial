#include <iostream>

double askDouble(){
    double input;
    std::cout << "Enter a double value: ";
    std::cin >> input;
    return input;
}

char getOperation(){
    char operation;
    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> operation;
    return operation;
}

double performOperation(double x, double y, char operation){
    double result (0.0);

    if(operation == '+'){
        result = x + y;
    }else if(operation == '-'){
        result = x - y;
    }else if(operation == '*'){
        result = x * y;
    }else if(operation == '/'){
        result = x / y;
    }else{
        std::cout << "Invalid operation";
    }
    return result;
}

int main(){

    double x = askDouble();
    double y = askDouble();

    char operation = getOperation();

    double result = performOperation(x, y, operation);
    std::cout << x << " " << operation << " " << y << " is " << result << std::endl;

    return 0;
}