#include<iostream>
using namespace std;
int main()
{
    string word;
    int length = 0;
    cout << "Enter a string: ";
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        length++;
    }
    if (length % 2 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}