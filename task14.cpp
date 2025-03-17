#include<iostream>
using namespace std;
void fun();
main()
{
    fun();
}
void fun()
{
    int num;
    char op;
    cout<<"Enter a number:";
    cin>>num;
if(num%2==0)
{
    cout<<"Num is even";
}
else
  {
    cout<<"Num is odd";
  }
}

