#include<iostream>
using namespace std;
int main() 
{
    char name[100]; 
    cout << "Enter a String: ";
    cin >> name; 
    int length = 0;
    while (name[length] != '\0') 
    {
        length++;
    }   
    if (length > 0 && name[length - 1] == 'n') {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
 return 0;
}