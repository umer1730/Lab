#include<iostream>
using namespace std;
main()
{
    int cars[5][5]={{10,7,12,10,4},
                    {18,11,15,17,2},
                {23,19,12,16,14},
            {7,12,16,0,2},
        {3,5,6,2,1}};
     

       for (int row=0;row < 5;row++)
        {
            for (int col=0;col < 5;col++)
            {
                cout<<cars[row][col]<<"\t";
            }
            cout<<endl;
        }
    }