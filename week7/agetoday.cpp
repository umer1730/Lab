#include <iostream>
using namespace std;
main()
{
    float age;
    float days;
    cout << "Enter your age in Years : ";
    cin  >> age;
    days = (age*365);
    cout << "Your age in Days is approximately" <<" " << days <<" " << "days";
}