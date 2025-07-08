#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    cin >> a >> b;
    bool found = false;
    if (b - a + 1 < 4) {
        cout << "No combinations possible." << endl;
        return 0;
    }
    for (int n1 = a; n1 <= b - 3; ++n1) {
        for (int n2 = n1 + 1; n2 <= b - 2; ++n2) {
            for (int n3 = n2 + 1; n3 <= b - 1; ++n3) {
                for (int n4 = n3 + 1; n4 <= b; ++n4) {
                    cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
                    found = true;
                }
            }
        }
    }

    if (!found) {
        cout << "No combinations possible." << endl;
    }

    return 0;
}