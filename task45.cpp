#include<iostream>
using namespace std;
void printsum(int matrix[][3],int rowsize)
{
    int sum=0;
    for (int row = 0;row < rowsize;row++)
    {
        for (int col = 0;col <3;col++)
        {
            sum += matrix[row][col];
        }
    }
    cout<<"Sum of all elements:"<<sum<<endl;
}
main()
{
    int rowsize;
    cout<<"Enter the row size:";
    cin>>rowsize;
    int matrix[rowsize][3];
    cout<<"Enter matrix elements:"<<endl;
    for (int row=0;row < rowsize;row++)
    {
        for(int col=0;col < 3;col++)
        {
             cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin>>matrix[row][col];
        }
    }
    printsum(matrix,rowsize);
}