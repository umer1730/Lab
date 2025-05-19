#include<iostream>
using namespace std;

int main() {
    int num;
    int totalVolume = 0;
    int count = 0;
    int length, width, height;

    cout << "Enter box dimensions (length width height ...) and -1 to stop: ";

    while (cin >> num && num != -1) {
        if (count % 3 == 0) {
            length = num;
        } else if (count % 3 == 1) {
            width = num;
        } else {
            height = num;
            totalVolume += length * width * height;
        }
        count++;
    }

    if (count % 3 != 0) {
        cout << "Invalid input. Every box must have 3 dimensions." << endl;
    } else {
        cout << "Total volume: " << totalVolume << endl;
    }

    return 0;
}