#include <iostream>

int main()
{
    std::cout << "Arrays can store any kind of data, even arrays!\n";

    int multi[3][5];
    int totRows = sizeof(multi) / sizeof(multi[0]);
    int totCols = sizeof(multi[0]) / sizeof(multi[0][1]);

    //std::cout << "TotRows: " << totRows << " totCols: " << totCols << std::endl;
    for(int row = 0; row < totRows; ++ row){
        for(int col = 0; col < totCols; ++col){
            std::cout << "[" << row << "][" << col << "] "; 
        }
        std::cout << "\t\\\\ row "<< row << " \n";
    }

    int init[3][5] = 
    {
        {0,1,2,3,4},    // row 0 = {0,1,2,3,4}
        {5,6,7,8,9},    // row 1 = {5,6,7,8,9}
        {}              // row 2 = {0,0,0,0,0}
    };

    /*  NOT ALLOWED 
    int init[][] =
    {
        {0,1,2,3,4},
        {5,6,7,8,9},
        {}
    };
    */

    std::cout << "\n\n";

    std::cout << "Printing cube[3][5][3]\n\n";
    int cube[3][5][3];
    int cubeRows = sizeof(cube) / sizeof(cube[0]);
    int cubeCols = sizeof(cube[0]) / sizeof(cube[0][0]);
    int cubeLevels = sizeof(cube[0][0]) / sizeof(cube[0][0][0]);

    for(int row = 0; row < cubeRows; ++row)
    {
        for(int col = 0; col < cubeCols; ++col)
        {
            for(int level = 0; level < cubeLevels; ++level)
            {
                std::cout << "[" << row << "][" << col <<"][" << level <<"]     "; 
            }
            std::cout << "\n";
            for(int space = 0; space < col+1; ++space)
            {
                std::cout << " ";
            }
            
        }
        std::cout << "\n";
    }

    int sum[9][9];
    int sumRows = sizeof(sum) / sizeof(sum[0]);
    int sumCols = sizeof(sum[0]) / sizeof(sum[0][0]);

    for(int row=1; row <= sumRows; ++row)
    {
        for(int col=1; col <= sumCols; ++col)
        {
            if(col == 1 || row == 1)
                std::cout << row + col - 1 << "\t";
            else
                std::cout << row + col  << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}