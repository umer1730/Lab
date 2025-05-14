#include<iostream>
using namespace std;
main()
{
    int num = 0;
    int sum = 0;
    while (num >= 0)
    {
        sum = sum + num;
        cout<<"Enter a  number:";
        cin>>num;
    }
        cout<<"Sum is:"<<sum;
}