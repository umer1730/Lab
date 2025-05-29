#include<iostream>
using namespace std;
int digitSum(int number) 
{
    int sum = 0;
    for (; number != 0; number /= 10) 
    {
        sum += number % 10;
    }
    return sum;
}
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;    
    int result = digitSum(num);
    cout << "Sum of digits: " << result << endl;
    return 0;
}