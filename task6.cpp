#include<iostream>
using namespace std;
void meas();
main()
{
    meas();
}
void meas()
{
    float a,b;
    cout<<"Enter teh measurement in inches:";
    cin>>a;
    b = a / 12;  
    cout<<"Equivalent in feet:"<<b; 
}