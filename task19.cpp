#include<iostream>
using namespace std;
void func(int a,int b);
main()
{
    int a,b;
    string day;
    while(true)
    {
    cout<<"Enter the day of purchase:";
    cin>>day;
    cout<<"Enetr the total purchase amount:$";
    cin>>a;
    if (day == "Sunday")
    {b = a-(a * 0.10);
     cout<<"Payable amount:$"<< b <<endl;
    }
    if (day == "Monday")
    {
        b = a-(a * 0.05);
        cout<<"Payable amount:$"<< b <<endl;
    }
    }
}