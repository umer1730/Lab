#include <iostream>
#include <cmath>
using namespace std;
int iteratedSquareRoot(int n) 
{
    if (n < 0) return -1;
    int count = 0;
   double value= static_cast<double>(n);
    while (value >= 2.0) 
    {
        value = sqrt(value);
        count++;
    }
    return count;
}
main() 
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int result = iteratedSquareRoot(n);
    cout << "Iterated square root: " << result << endl;
    return 0;
}