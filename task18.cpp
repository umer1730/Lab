#include <iostream>
using namespace std;
void printname(string username)
main()
 { 
    string username;
    while (true) 
    {
        cout << "Enter name: ";
        cin >> username;
        printname(username);
    }
}   