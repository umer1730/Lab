#include<iostream>
using namespace std;
int triangularnumber(int num)
{
    for (int i = 0;i <= num;i++)
    {
        return(num * (num + 1)) / 2;
    }
}
main()
{
    int num;
    cout<<"Enter the number of triangle:";
    cin>>num;
    cout<<"Number of dots in the triangle: "<<triangularnumber(num);
}