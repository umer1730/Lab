#include<iostream>
using namespace std;
void reverseword(char word[]) 
{
    int length = 0;
    while (word[length] != '\0') 
    {
        length++;
    }
    cout<<"Reversed string:";
    for (int i = length - 1; i >= 0; i--) 
    {
        cout<<word[i];
    }
    cout<<endl;
}
int main() 
{
    int size = 100;
    char word[size];
    cout << "Enter a string: ";
    cin >> word; 
    reverseword(word);
    return 0;
}