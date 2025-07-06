#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;

    // Pasta types
    string pastaTypes[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};

    // Array to store sales for each type
    int sales[SIZE];

    // Input sales
    cout << "Enter the number of pastas sold for each type:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << pastaTypes[i] << ": ";
        cin >> sales[i];
    }

    // Display sales summary
    cout << "\n--- Monthly Sales Report ---\n";
    int totalSales = 0;

    for (int i = 0; i < SIZE; i++) {
        cout << pastaTypes[i] << ": " << sales[i] << " units\n";
        totalSales += sales[i];
    }

    cout << "Total Pastas Sold: " << totalSales << " units\n";

    return 0;
}
