#include <iostream>
using namespace std; 
main()
{
    float distance,fuel;
    cout << "Enter the distance: ";
    cin >> distance;
    fuel = distance * 10;
    if (fuel < 100)
    {
        fuel = 100;
    }
    cout << "Fuel needed: " << fuel << endl;
}