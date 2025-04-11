#include <iostream>
using namespace std;
int longestTime(int h, int m) 
{
    int hourInMinutes = h * 60;
    if (hourInMinutes > m) 
    {
        cout<<"h"<<h;  
    } 
    else 
    {
        cout<<"m"<<m;  
    }
}
int main() {
    int h, m;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    int result = longestTime(h, m);
    cout << "Longest time is: " << result << endl;
    return 0;
}