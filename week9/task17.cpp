#include <iostream>
#include <string>
using namespace std;
void printSomething(string a) 
{
    cout<<"something " <<a<<endl;
}
int main() 
{
    string input;
    cout<<"Enter a string: ";
    cin>>input;
    cout<<"Result: ";
    printSomething(input);
    return 0;
}