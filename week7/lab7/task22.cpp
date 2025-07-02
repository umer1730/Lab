#include<iostream>
using namespace std;
int calculateMoney(int age, int washingMachinePrice, int toyPrice) 
{
    int moneySaved = 0;
    int moneyGift = 10; 
    int totalToys = 0;
    for (int i = 1; i <= age; i++) 
    {
        if (i % 2 == 0) 
        {
            moneySaved += (moneyGift - 1);
            moneyGift += 10; 
        } 
        else 
        {    
            totalToys++;
        }
    }
    moneySaved += (totalToys * toyPrice);
    if (moneySaved >= washingMachinePrice) 
    {
        cout << "Yes! " << moneySaved - washingMachinePrice << endl;
    } 
    else {
        cout << "No! " << washingMachinePrice - moneySaved << endl;
    }
    return 0;
}
int main() 
{
    int age, washingMachinePrice, toyPrice;
    cout<<"Enter Lilly's age:";
    cin>>age;
    cout<<"Enter the price of washingmachine:";
    cin>>washingMachinePrice;
    cout<<"Enter the unit price of each money:";
    cin>>toyPrice;
    calculateMoney(age, washingMachinePrice, toyPrice);
    return 0;
}