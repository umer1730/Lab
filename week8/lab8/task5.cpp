#include<iostream>
using namespace std;
bool isPrime(int num) 
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
int countOnes(int num) 
{
    int count = 0;
    while (num > 0) 
    {
        count += num % 2; 
        num /= 2; 
    }
    return count;
}
string howbad(int num) 
{
    int population = countOnes(num);
    string result = "";
    if (population % 2 == 0) 
    {
        result += "Evil ";
    } 
    else 
    {
        result += "Odious ";
    }
    if (isPrime(population)) 
    {
        result += "Pernicious";
    }
    return result;
}
int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Classification: " << howbad(number) << endl;
    return 0;
}