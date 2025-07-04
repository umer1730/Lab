#include<iostream>
using namespace std;
int collatzCycleLength(int n) 
{
    int count = 1; 
    while (n != 1) 
    {
        if (n % 2 == 0) //even
        {
            n /= 2; 
        } 
        else 
        {            //odd
            n = 3 * n + 1; 
        }
        count++; 
    }
    return count; 
}
int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;
    int cycleLength = collatzCycleLength(n);
    cout << "Cycle length: " << cycleLength <<endl;
    return 0;
}