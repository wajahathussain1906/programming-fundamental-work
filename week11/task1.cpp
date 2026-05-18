#include <iostream>
using namespace std;
void printCars(int cars[][5], int rowSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << cars[row][col] << "\t";
        }
        cout << endl;
    }
}

int main()
{

    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {
        {10, 12, 12, 14, 16},
        {12, 14, 15, 13, 16},
        {7, 13, 5, 3, 23},
        {3, 4, 10, 13, 14},
        {9, 10, 12, 15, 17}};
    printCars(cars, rowSize);
}