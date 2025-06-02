#include <iostream>
#include <iomanip> 
using namespace std;
int main() 
{
    int cargoCount;
    cout << "Enter the count of cargo for transportation: ";
    cin >> cargoCount;
    int minibusCargo = 0;
    int truckCargo = 0;
    int trainCargo = 0;
    int totalCargo = 0;
    double totalCost = 0.0;
    for (int i = 0; i < cargoCount; i++) 
    {
        int weight;
        cout << "Enter the tonnage of cargo " << (i + 1) << ": ";
        cin >> weight;
        totalCargo += weight;
        if (weight <= 3) 
        {
            minibusCargo += weight;
            totalCost += weight * 200; 
        } 
        else if (weight <= 11) 
        {
            truckCargo += weight;
            totalCost += weight * 175; 
        } 
        else 
        {
            trainCargo += weight;
            totalCost += weight * 120; 
        }
    }
    double minibusPercentage = (double)minibusCargo / totalCargo * 100;
    double truckPercentage = (double)truckCargo / totalCargo * 100;
    double trainPercentage = (double)trainCargo / totalCargo * 100;
    double averagePrice = totalCost / totalCargo;
    cout << fixed << setprecision(2); 
    cout << "Average price per ton: " << averagePrice << endl;
    cout << "Percentage carried by minibus: " << minibusPercentage << "%" << endl;
    cout << "Percentage carried by truck: " << truckPercentage << "%" << endl;
    cout << "Percentage carried by train: " << trainPercentage << "%" << endl;
    return 0;
}