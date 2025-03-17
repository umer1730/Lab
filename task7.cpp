#include<iostream>
using namespace std;
void func();
main()
{
    func();
}
void func()
{
    int a,b;
    cout<<"Enter the side length of the Rubik's cube:";
    cin>>a;
    b = (a * a) * 6;
    cout<<"Number of sticker's needed:"<<b;
}