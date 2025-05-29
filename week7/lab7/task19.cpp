#include<iostream>
using namespace std;
int frequencyChecker(int number,int digit)
 {
    int count = 0; 
    while (number != 0) 
    {
        int currentDigit = number % 10;  
        if (currentDigit == digit) 
        {
            count++;
        }
        number /= 10;  
    } 
    return count;
}
int main() 
{
    int  number,digit;
    cout<<"Enter a number:";
    cin>>number;
    cout<<"Enter the digit to check:";
    cin>>digit;
    frequencyChecker(number,digit);
    cout<<"Frequency:"<<frequencyChecker(number,digit);
    return 0;
}