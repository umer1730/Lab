#include<iostream>
using namespace std;
double calculatetotalresistance(double resistance[],int size) 
{
    double RT = 0; 
    for (int i = 0; i < size; i++) 
    {
        RT += resistance[i]; 
    }
    return RT;
}
int main() 
{
    int n;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;
    double resistance[n]; 
    cout << "Enter the resistance value (in ohms) of the "<<n<<" resistors, one per line:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> resistance[i];
    }
    double result = calculatetotalresistance(resistance, n);
    cout << "The total resistance of the series circuit is " << result << " ohms." << endl;
    return 0;
}