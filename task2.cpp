#include<iostream>
using namespace std;
void add();
main()
{
    add();
}
void add()
{
    int num1,num2,sum;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    sum = num1 + num2;
    cout<<"Sum:"<<sum; 
}