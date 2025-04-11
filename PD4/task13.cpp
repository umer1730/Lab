#include <iostream>
using namespace std;
void pet(int holidays) 
{
    const int totalDays = 365;
    const int norm = 30000;
    const int playWorkDay = 63;
    const int playHoliday = 127;
    int workDays = totalDays - holidays;
    int totalPlayTime = (workDays * playWorkDay) + (holidays * playHoliday);
    int difference = norm - totalPlayTime;
    int hours = abs(difference) / 60;
    int minutes = abs(difference) % 60;
    if (difference > 0) 
    {
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    } 
    else 
    {
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    }
}
int main() 
{
    int holidays;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    pet(holidays);
    return 0;
}
