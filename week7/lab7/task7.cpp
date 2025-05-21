#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter numbers count:";
    cin >> n;
    if (n < 1 || n > 1000) 
    {
        cout << "Invalid:Number must be count between 1 and 1000." << endl;
        n = 1;
    }
    int numbers[n];
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a number:";
        cin  >> numbers[i];
        if (numbers[i] < 200)
        { 
            p1++;
        }
        else if (numbers[i] < 400)
        {
            p2++;
        }
        else if (numbers[i] < 600) 
        {
            p3++;
        }
        else if (numbers[i] < 800) 
        {
            p4++;
        }
        else    
        {
            p5++;
        }
    }
    cout << endl ;
    cout <<""<< (p1 * 100.0 / n) << "%" << endl;
    cout <<""<< (p2 * 100.0 / n) << "%" << endl;
    cout <<""<< (p3 * 100.0 / n) << "%" << endl;
    cout <<""<< (p4 * 100.0 / n) << "%" << endl;
    cout <<""<< (p5 * 100.0 / n) << "%" << endl;
}