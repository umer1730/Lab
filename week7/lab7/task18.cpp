#include<iostream>
using namespace std;
int totalDigits(int number) 
{
    int count = 0;
    if (number < 0) 
    {
        number = -number;
    }
    for (; number != 0; number /= 10) 
    {
        count++;
    }
    return count;
}
int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Total number of digits: " << totalDigits(number) << endl;
    return 0;
}