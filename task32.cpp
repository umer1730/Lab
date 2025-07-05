#include <iostream>
using namespace std;
int collatzCycleLength(int n) 
{
    int count = 1; 
    while (n != 1) {
        if (n % 2 == 0) 
        {
            n /= 2; 
        } else 
        {
            n = 3 * n + 1; 
        }
        count++; 
    }
    return count; 
}
int maxCycleLength(int i, int j) 
{
    if (i > j) 
    {
        swap(i, j); 
    }
    int maxLength = 0;
    for (int num = i; num <= j; ++num) 
    {
        int length = collatzCycleLength(num);
        if (length > maxLength) 
        {
            maxLength = length; 
        }
    }
    return maxLength;
}
int main() 
{
    int i, j;
    while (cin >> i >> j) 
    { 
        int maxLength = maxCycleLength(i, j);
        cout<< i << " " << j << " " << maxLength;
    }
    return 0;
}