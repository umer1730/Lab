#include<iostream>
using namespace std;
void printTransposed(int cars[][5], int rowsize, int colsize) 
{
    for (int col = 0; col < colsize; col++)     // we reverse the loop mean col first and row after
    {
        for (int row = 0; row < rowsize; row++) 
        {
            cout << cars[row][col] << "\t"; 
        }
        cout << endl;
    }
}
int main() 
{
    const int rowsize = 5;
    const int colsize = 5;
    int cars[rowsize][colsize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };
    cout << "Transposed Matrix:\n";
    printTransposed(cars, rowsize, colsize);
    return 0;
}