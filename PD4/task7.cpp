#include <iostream>
using namespace std;
int main() {
    string x;
    int y, z, discount;
    while (true) {
        cout << "Enter the country's name: ";
        cin >> x;
        cout << "Enter the ticket price in dollars: $";
        cin >> y;

        if (x == "Pakistan")
            discount = 5;
        else if (x == "Ireland")
            discount = 10;
        else if (x == "India")
            discount = 20;
        else if (x == "England")
            discount = 30;
        else if (x == "Canada")
            discount = 45;
        else {
            cout << "No discount available for this country." << endl;
            continue;
        }
        z = y - (y * discount / 100);
        cout << "Final ticket price after discount: $" << z << endl;
        }
    }

