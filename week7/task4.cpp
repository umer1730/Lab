#include<iostream>
using namespace std;
main()
{
 system("color 80");
    int length;
    int width;
    cout << "Enter the length of  the rectangle:";
    cin >> length;
    cout << "Enter the width of the rectangle:";
    cin >> width;
    int area;
    area = length * width;
    cout << "area is " << area;
} 