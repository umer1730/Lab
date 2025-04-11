#include<iostream>
using namespace std;
void possiblebonus(int a ,int b)
{
if(1<=b-a && b-a<=6)
{
    cout<<"true"<<endl;
}
else
{
    cout<<"false"<<endl;
}
}
main()
{
    int a,b;
    cout<<"Enter your position:";
    cin>>a;
    cout<<"Enter your friend's position:";
    cin>>b;
    if (a>0 && b>0 && a<b)
    {
        possiblebonus(a,b);
    }
    else{
        cout<<"Invalid input! Make sure a is positive, b is positive and a < b."<<endl;
    }
}