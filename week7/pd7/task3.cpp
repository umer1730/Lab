#include<iostream>
using namespace std;
void printupperstars(int rowsize);
void printlowerstars(int rowsize);
main()
{
    int rowsize;
    cout<<"Enter desired number of rows:";
    cin>>rowsize;
    printupperstars(rowsize);
    printlowerstars(rowsize);
}
void printupperstars(int rowsize)
{
    for (int row = 1;row <= rowsize;row++)
    {
        for(int col = 1;col <= row;col++)
        {
            cout<<"*";
        }
        cout<< endl;
    }
}
void printlowerstars(int rowsize)
{
    for (int row = rowsize;row >= 1;row--)
    {
        for(int col = row;col >= 1;col--)
        {
            cout<<"*";
        }
        cout<< endl;
    }
}    
