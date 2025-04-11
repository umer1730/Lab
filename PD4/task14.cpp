#include <iostream>
using namespace std;
int tpCheck(int people, int tp) 
{
    int totalSheets = tp * 500;
    int sheetsNeededPerDay = people * 57;
    int daysLast = totalSheets / sheetsNeededPerDay;
    if (daysLast < 14) 
    {
        cout << "Your TP will only last " << daysLast << " days, buy more!" << endl;
    } else 
    {
        cout << "Your TP will last " << daysLast << " days, no need to panic!" << endl;
    }
}
main() 
{
    int people, tp;
    cout << "Enter number of people in the household: ";
    cin >> people;
    cout << "Enter number of rolls of TP: ";
    cin >>tp;
    int result = tpCheck(people, tp);
    return 0;
}