// It would be ok to #include square.h here if needed
// This program does't need it 

int getSquareSides(){   // actual defintion of getSquareSides
    return 4;
}

int getSquarePerimeter(int sideLength){
    return sideLength * getSquareSides();
}