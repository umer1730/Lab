#include<iostream>
using namespace std;
bool canPayWithChange(int change[], double totaldue)
{
    double quarter = 0.25;
    double dime = 0.10;
    double nickel = 0.05;
    double penny = 0.01;
    double totalchange = (change[0] * quarter) + (change[1] * dime) + (change[2] * nickel) + (change[3] * penny);
    return totalchange >= totaldue;
}
int main()  
{
    int change[4];  
    double totaldue;
    cout << "Enter quarters: ";
    cin >> change[0];
    cout << "Enter dimes: ";
    cin >> change[1];
    cout << "Enter nickels: ";
    cin >> change[2];
    cout << "Enter pennies: ";
    cin >> change[3];
    cout << "Enter the total amount due: $";
    cin>>totaldue;
    cout<<"Can you pay the amount? ";
    if (canPayWithChange(change, totaldue))  
    {
        cout << "Yes" << endl;
    }  
    else  
    {
        cout << "No" << endl;
    }
    return 0;  
}