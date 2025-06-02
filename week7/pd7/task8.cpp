#include <iostream>
using namespace std;
int main() 
{
    int days;
    cout << "Enter the number of days you visited the hospital: ";
    cin >> days;
    int doctors = 7;
    int treated = 0;
    int untreated = 0;
    for (int day = 1; day <= days; day++) 
    {
        int patients;
        cout << "Number of patients who visited the hospital on day " << day << ": ";
        cin >> patients;
        if (day % 3 == 0 && untreated > treated) 
        {
            doctors++;  //doctors = doctors + 1;
        }
        if (patients <= doctors) 
        {
            treated += patients; 
        } 
        else 
        {
            treated += doctors;
            untreated += (patients - doctors); 
        }
    }
    cout << "Treated patients: " << treated << endl;
    cout << "Untreated patients: " << untreated<< endl;
    return 0;
}