int readNumber();
void writeAnswer(int);

int main(){

    int firstVal = readNumber();
    int secondVal = readNumber();

    int result = firstVal + secondVal;

    writeAnswer(result);
    
    return 0;
}