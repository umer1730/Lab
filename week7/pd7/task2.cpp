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
    for (int row = rowsize;row >= 1;row--)
    {
        for(int col = row;col >= 1;col--)
        {
            cout<<"*";
        }
        cout<< endl;
    }
}