#include<iostream>
using namespace std;
int digitSum(int number) 
{
    int sum = 0;
    while (number != 0) 
    {
        sum = sum + (number%10);
        number = number/10;
    }
    return sum;
}
int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits: " << digitSum(number) << endl;
    return 0;
}
