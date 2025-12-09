#include<iostream>
using namespace std;
void func();
main()
{
    func();
}
func()
{
    int a,b;
    cout<<"Enter the distance:";
    cin>>a;
    b = 10 * a;
    cout<<"Fuel needed:"<<b;
}