#include <iostream>
using namespace std;
bool isPrime(int number) 
{
    if (number <= 1)
        return false;
    for (int i = 2; i * i <= number; i++) 
    {
        if (number % i == 0)
            return false;
    }
    return true;
}
long long primorial(int n) 
{
    int count = 0;
    int num = 2;
    long long result = 1; 
    while (count < n) 
    {
        if (isPrime(num)) 
        {
            result *= num;
            count++;
        }
        num++;
    }
    return result;
}
main()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;
    cout<<isPrime(number);
}
