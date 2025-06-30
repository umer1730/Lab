#include<iostream>
using namespace std;
bool isprime(int num) 
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int primenumbers(int n) 
{
    int count = 0;
    for (int i = 2; i <= n; i++) 
    {
        if (isprime(i)) 
        {
            count++;
        }
    }
    return count;
}
int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = primenumbers(n);
    cout<<result<< endl;
    return 0;
}