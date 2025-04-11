#include<iostream>
using namespace std;
main()
{
string name;
int a;
int b;
int c;
cout << "Enter name: ";
cin >> name;
cout << "Matric: ";
cin >> a;
cout << "Inter: ";
cin >> b;
cout << "ECAT: ";
cin >> c;
float aggregate;
aggregate = ((a / 1100.0 * 0.30) + (b / 550.0 * 0.30) + (c / 400.0 * 0.40)) * 100;
cout << "Aggregate: " << aggregate;
}