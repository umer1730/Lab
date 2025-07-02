#include <iostream>
using namespace std;
bool isSpecial(int number, int N) 
{
    int temp = number; 
    while (temp > 0) 
    {
        int digit = temp % 10; 
        if (digit == 0 || N % digit != 0) {
            return false;
        }
        temp /= 10; 
    }
    return true;
}
void generateSpecialNumbers(int N) 
{
    for (int num = 1111; num <= 9999; ++num) 
    {
        if (isSpecial(num, N)) 
        {
            cout << num << " "; 
        }
    }
}
int main() {
    int N;
    cout << "Enter an integer N: ";
    cin >> N;
    cout << "Special numbers: ";
    generateSpecialNumbers(N);
    return 0;
}
