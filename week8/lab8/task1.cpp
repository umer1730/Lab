
#include <iostream>
using namespace std;
bool doesBrickFit(int a, int b, int c, int w, int h) 
{
    if ((a <= w && b <= h) || (a <= h && b <= w)) return true; 
    if ((a <= w && c <= h) || (a <= h && c <= w)) return true; 
    if ((b <= w && c <= h) || (b <= h && c <= w)) return true; 
    return false; 
}
int main() 
{
    int a, b, c, w, h;
    cout << "Enter height: ";
    cin >> a;
    cout << "Enter width: ";
    cin >> b;
    cout << "Enter depth: ";
    cin >> c;
    cout << "Enter width(w): ";
    cin >> w;
    cout << "Enter height(h): ";
    cin >> h; 
    bool result = doesBrickFit(a, b, c, w, h);
    cout << boolalpha << result; 
    return 0;
}