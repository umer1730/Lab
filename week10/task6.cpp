#include <iostream>
using namespace std;
int main() {
    const int SIZE = 10;
    int packages[SIZE];
    cout << "Enter the weights of 10 packages: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> packages[i];
    }
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (packages[j] > packages[j + 1]) {
                int temp = packages[j];
                packages[j] = packages[j + 1];
                packages[j + 1] = temp;
            }
        }
    }
    cout << "Sorted package weights in ascending order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << packages[i] << " ";
    }
    return 0;
}