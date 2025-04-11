#include<iostream>
using namespace std;
void printname(string name)
{
    cout<<"USername is:"<<name;
}
main()
{
    string name;
    cout<<"USername is:";
    cin>>name;
    printname(name);
}
