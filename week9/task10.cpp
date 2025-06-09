#include<iostream>
#include<string>
using namespace std;
string shiftLetters(string input) 
{
    for (char &ch : input) 
    {
        if (isalpha(ch)) 
        {
            if (ch == 'z') ch = 'a';
            else if (ch == 'Z') ch = 'A';
            else ch++;
        }
    }
    return input;
}
int main() 
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string output = shiftLetters(input);
    cout << "shifted string: "<<output<<endl;
    return 0;
}