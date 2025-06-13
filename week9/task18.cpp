#include<iostream>
using namespace std;
string removeVowels(string input) 
{
    string result;
    for (char c : input) 
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') 
            {
            result += c;
        }
    }
    return result;
}
int main() 
{
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput); 
    string output = removeVowels(userInput);
    cout << "String with vowels removed: " << output << endl;
    return 0;
}