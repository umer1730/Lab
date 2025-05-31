#include<iostream>
using namespace std;
void printstars(int rowsize);
main()
{
    int rowsize;
    cout<<"Enter desired number of rows:";
    cin>>rowsize;
    printstars(rowsize);
}
void printstars(int rowsize)
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