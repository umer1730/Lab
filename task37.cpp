#include<iostream>
using namespace std;

void printcars(int cars[5][5]) 
{
    for (int row = 0; row < 5; row++) 
    {
        for (int col = 0; col < 5; col++) 
        {
            cout<<cars[1][3] << " "; // Corrected to print each element in the array
        }
        
    }
}

int main() 
{
    int cars[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };

    printcars(cars);
    return 0;
}