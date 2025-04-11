#include<iostream>
using namespace std;
void fun(int x,int y)
{    if (x == y)
cout<<"true"<<endl;
 else
 cout<< "false"<<endl;
}
main()
{
    int x,y;
    cout<<"Enter the first number:";
    cin>>x;
    cout<<"Enetr the second number:";
    cin>>y;
    fun( x, y);
}