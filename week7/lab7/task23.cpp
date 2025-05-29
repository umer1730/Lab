#include<iostream>
using namespace std;
int calculateprice(int money,int year)
{
    int currentyear = 1800;
    int age = 18;
    for (int currentyear = 1800;currentyear <= year;currentyear++,age++)
    {
        if (currentyear % 2 == 0)
        {
            money = money - 12000; 
        }
        else 
        {
            money -= (12000 + 50 * age);
        }
    }
    if (money >= 0)
    {
        cout<<"Yes! He will live a carefree life and will have "<<money<<" dollars left."<<endl;
    }
    else
    {
        cout<<"He will need "<<-money <<" dollars to survive."<<endl;
    }
}
main()
{
    int money,year;
    cout<<"Enter money:";
    cin>>money;
    cout<<"Enter year:";
    cin>>year;
    calculateprice(money,year);
}