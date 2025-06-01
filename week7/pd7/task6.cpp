#include<iostream>
using namespace std;
bool isPrime(int num) 
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0)
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
int main() 
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << primorial(n) << endl;  
    return 0;
}